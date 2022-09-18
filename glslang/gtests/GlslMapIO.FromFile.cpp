//
// Copyright (C) 2016-2017 Google, Inc.
// Copyright (C) 2020 The Khronos Group Inc.
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//    Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
//    Redistributions in binary form must reproduce the above
//    copyright notice, this list of conditions and the following
//    disclaimer in the documentation and/or other materials provided
//    with the distribution.
//
//    Neither the name of 3Dlabs Inc. Ltd. nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
#include <algorithm>

#include <gtest/gtest.h>

#include "TestFixture.h"

#include "glslang/MachineIndependent/iomapper.h"
#include "glslang/MachineIndependent/reflection.h"

#ifndef GLSLANG_WEB
namespace glslangtest {
namespace {

struct IoMapData {
    std::vector<std::string> fileNames;
    Semantics semantics;
};

using GlslMapIOTest = GlslangTest <::testing::TestWithParam<IoMapData>>;

template<class T>
std::string interfaceName(T symbol) {
    return symbol.getType()->getBasicType() == glslang::EbtBlock ? std::string(symbol.getType()->getTypeName().c_str()) : symbol.name;
}

bool verifyIOMapping(std::string& linkingError, glslang::TProgram& program) {
    bool success = true;

    // Verify IO Mapping by generating reflection for each stage individually
    // and comparing layout qualifiers on the results


    int reflectionOptions = EShReflectionDefault;
    //reflectionOptions |= EShReflectionStrictArraySuffix;
    //reflectionOptions |= EShReflectionBasicArraySuffix;
    reflectionOptions |= EShReflectionIntermediateIO;
    reflectionOptions |= EShReflectionSeparateBuffers;
    reflectionOptions |= EShReflectionAllBlockVariables;
    //reflectionOptions |= EShReflectionUnwrapIOBlocks;

    success &= program.buildReflection(reflectionOptions);

    // check that the reflection output from the individual stages all makes sense..
    std::vector<glslang::TReflection> stageReflections;
    for (int s = 0; s < EShLangCount; ++s) {
        if (program.getIntermediate((EShLanguage)s)) {
            stageReflections.emplace_back((EShReflectionOptions)reflectionOptions, (EShLanguage)s, (EShLanguage)s);
            success &= stageReflections.back().addStage((EShLanguage)s, *program.getIntermediate((EShLanguage)s));
        }
    }

    // check that input/output locations match between stages
    auto it = stageReflections.begin();
    auto nextIt = it + 1;
    for (; nextIt != stageReflections.end(); it++, nextIt++) {
        int numOut = it->getNumPipeOutputs();
        std::map<std::string, const glslang::TObjectReflection*> pipeOut;

        for (int i = 0; i < numOut; i++) {
            const glslang::TObjectReflection& out = it->getPipeOutput(i);
            std::string name = interfaceName(out);
            pipeOut[name] = &out;
        }

        int numIn = nextIt->getNumPipeInputs();
        for (int i = 0; i < numIn; i++) {
            auto in = nextIt->getPipeInput(i);
            std::string name = interfaceName(in);
            auto out = pipeOut.find(name);

            if (out != pipeOut.end()) {
                auto inQualifier = in.getType()->getQualifier();
                auto outQualifier = out->second->getType()->getQualifier();
                success &= outQualifier.layoutLocation == inQualifier.layoutLocation;
            }
            else {
                if (!in.getType()->isStruct()) {
                    bool found = false;
                    for (auto outIt : pipeOut) {
                        if (outIt.second->getType()->isStruct()) {
                            unsigned int baseLoc = outIt.second->getType()->getQualifier().hasLocation() ?
                                outIt.second->getType()->getQualifier().layoutLocation :
                                std::numeric_limits<unsigned int>::max();
                            for (size_t j = 0; j < outIt.second->getType()->getStruct()->size(); j++) {
                                baseLoc = (*outIt.second->getType()->getStruct())[j].type->getQualifier().hasLocation() ?
                                    (*outIt.second->getType()->getStruct())[j].type->getQualifier().layoutLocation : baseLoc;
                                if (baseLoc != std::numeric_limits<unsigned int>::max()) {
                                    if (baseLoc == in.getType()->getQualifier().layoutLocation) {
                                        found = true;
                                        break;
                                    }
                                    baseLoc += glslang::TIntermediate::computeTypeLocationSize(*(*outIt.second->getType()->getStruct())[j].type, EShLangVertex);
                                }
                            }
                            if (found) {
                                break;
                            }
                        }
                    }
                    success &= found;
                }
                else {
                    unsigned int baseLoc = in.getType()->getQualifier().hasLocation() ? in.getType()->getQualifier().layoutLocation : -1;
                    for (size_t j = 0; j < in.getType()->getStruct()->size(); j++) {
                        baseLoc = (*in.getType()->getStruct())[j].type->getQualifier().hasLocation() ?
                            (*in.getType()->getStruct())[j].type->getQualifier().layoutLocation : baseLoc;
                        if (baseLoc != std::numeric_limits<unsigned int>::max()) {
                            bool isMemberFound = false;
                            for (auto outIt : pipeOut) {
                                if (baseLoc == outIt.second->getType()->getQualifier().layoutLocation) {
                                    isMemberFound = true;
                                    break;
                                }
                            }
                            if (!isMemberFound) {
                                success &= false;
                                break;
                            }
                            baseLoc += glslang::TIntermediate::computeTypeLocationSize(*(*in.getType()->getStruct())[j].type, EShLangVertex);
                        }
                    }
                }
            }
        }
    }

    // compare uniforms in each stage to the program
    {
        int totalUniforms = program.getNumUniformVariables();
        std::map<std::string, const glslang::TObjectReflection*> programUniforms;
        for (int i = 0; i < totalUniforms; i++) {
            const glslang::TObjectReflection& uniform = program.getUniform(i);
            std::string name = interfaceName(uniform);
            programUniforms[name] = &uniform;
        }
        it = stageReflections.begin();
        for (; it != stageReflections.end(); it++) {
            int numUniform = it->getNumUniforms();
            std::map<std::string, glslang::TObjectReflection> uniforms;

            for (int i = 0; i < numUniform; i++) {
                glslang::TObjectReflection uniform = it->getUniform(i);
                std::string name = interfaceName(uniform);
                auto programUniform = programUniforms.find(name);

                if (programUniform != programUniforms.end()) {
                    auto stageQualifier = uniform.getType()->getQualifier();
                    auto programQualifier = programUniform->second->getType()->getQualifier();

                    success &= stageQualifier.layoutLocation == programQualifier.layoutLocation;
                    success &= stageQualifier.layoutBinding == programQualifier.layoutBinding;
                    success &= stageQualifier.layoutSet == programQualifier.layoutSet;
                }
                else {
                    success &= false;
                }
            }
        }
    }

    // compare uniform blocks in each stage to the program table
    {
        int totalUniforms = program.getNumUniformBlocks();
        std::map<std::string, const glslang::TObjectReflection*> programUniforms;
        for (int i = 0; i < totalUniforms; i++) {
            const glslang::TObjectReflection& uniform = program.getUniformBlock(i);
            std::string name = interfaceName(uniform);
            programUniforms[name] = &uniform;
        }
        it = stageReflections.begin();
        for (; it != stageReflections.end(); it++) {
            int numUniform = it->getNumUniformBlocks();
            std::map<std::string, glslang::TObjectReflection> uniforms;

            for (int i = 0; i < numUniform; i++) {
                glslang::TObjectReflection uniform = it->getUniformBlock(i);
                std::string name = interfaceName(uniform);
                auto programUniform = programUniforms.find(name);

                if (programUniform != programUniforms.end()) {
                    auto stageQualifier = uniform.getType()->getQualifier();
                    auto programQualifier = programUniform->second->getType()->getQualifier();

                    success &= stageQualifier.layoutLocation == programQualifier.layoutLocation;
                    success &= stageQualifier.layoutBinding == programQualifier.layoutBinding;
                    success &= stageQualifier.layoutSet == programQualifier.layoutSet;
                }
                else {
                    success &= false;
                }
            }
        }
    }

    if (!success) {
        linkingError += "Mismatched cross-stage IO\n";
    }

    return success;
}

TEST_P(GlslMapIOTest, FromFile)
{
    const auto& fileNames = GetParam().fileNames;
    Semantics semantics = GetParam().semantics;
    const size_t fileCount = fileNames.size();
    const EShMessages controls = DeriveOptions(Source::GLSL, semantics, Target::BothASTAndSpv);
    GlslangResult result;

    // Compile each input shader file.
    bool success = true;
    std::vector<std::unique_ptr<glslang::TShader>> shaders;
    for (size_t i = 0; i < fileCount; ++i) {
        std::string contents;
        tryLoadFile(GlobalTestSettings.testRoot + "/" + fileNames[i],
            "input", &contents);
        shaders.emplace_back(
            new glslang::TShader(GetShaderStage(GetSuffix(fileNames[i]))));
        auto* shader = shaders.back().get();
        
        shader->setAutoMapLocations(true);
        shader->setAutoMapBindings(true);
        
        if (controls & EShMsgSpvRules) {
            if (controls & EShMsgVulkanRules) {
                shader->setEnvInput((controls & EShMsgReadHlsl) ? glslang::EShSourceHlsl
                                                               : glslang::EShSourceGlsl,
                                    shader->getStage(), glslang::EShClientVulkan, 100);
                shader->setEnvClient(glslang::EShClientVulkan, glslang::EShTargetVulkan_1_1);
                shader->setEnvTarget(glslang::EShTargetSpv, glslang::EShTargetSpv_1_0);
            } else {
                shader->setEnvInput((controls & EShMsgReadHlsl) ? glslang::EShSourceHlsl
                                                               : glslang::EShSourceGlsl,
                                    shader->getStage(), glslang::EShClientOpenGL, 100);
                shader->setEnvClient(glslang::EShClientOpenGL, glslang::EShTargetOpenGL_450);
                shader->setEnvTarget(glslang::EshTargetSpv, glslang::EShTargetSpv_1_0);
            }
        }

        success &= compile(shader, contents, "", controls);
        
        result.shaderResults.push_back(
            { fileNames[i], shader->getInfoLog(), shader->getInfoDebugLog() });
    }

    // Link all of them.
    glslang::TProgram program;
    for (const auto& shader : shaders) program.addShader(shader.get());
    success &= program.link(controls);
    result.linkingOutput = program.getInfoLog();
    result.linkingError = program.getInfoDebugLog();

    unsigned int stage = 0;
    glslang::TIntermediate* firstIntermediate = nullptr;
    while (!program.getIntermediate((EShLanguage)stage) && stage < EShLangCount) { stage++; }
    firstIntermediate = program.getIntermediate((EShLanguage)stage);

    glslang::TDefaultGlslIoResolver resolver(*firstIntermediate);
    glslang::TGlslIoMapper ioMapper;

    if (success) {
        success &= program.mapIO(&resolver, &ioMapper);
        result.linkingOutput = program.getInfoLog();
        result.linkingError = program.getInfoDebugLog();
    }

    success &= verifyIOMapping(result.linkingError, program);
    result.validationResult = success;

    if (success && (controls & EShMsgSpvRules)) {
        for (int stage = 0; stage < EShLangCount; ++stage) {
            if (program.getIntermediate((EShLanguage)stage)) {
                spv::SpvBuildLogger logger;
                std::vector<uint32_t> spirv_binary;
                options().disableOptimizer = false;
                glslang::GlslangToSpv(*program.getIntermediate((EShLanguage)stage),
                    spirv_binary, &logger, &options());

                std::ostringstream disassembly_stream;
                spv::Parameterize();
                spv::Disassemble(disassembly_stream, spirv_binary);
                result.spirvWarningsErrors += logger.getAllMessages();
                result.spirv += disassembly_stream.str();
                result.validationResult &= !options().validate || logger.getAllMessages().empty();
            }
        }
    }

    std::ostringstream stream;
    outputResultToStream(&stream, result, controls);

    // Check with expected results.
    const std::string expectedOutputFname =
        GlobalTestSettings.testRoot + "/baseResults/" + fileNames.front() + ".out";
    std::string expectedOutput;
    tryLoadFile(expectedOutputFname, "expected output", &expectedOutput);

    checkEqAndUpdateIfRequested(expectedOutput, stream.str(), expectedOutputFname,
        result.spirvWarningsErrors);
}

// clang-format off
INSTANTIATE_TEST_SUITE_P(
    Glsl, GlslMapIOTest,
    ::testing::ValuesIn(std::vector<IoMapData>({
        {{"iomap.crossStage.vert", "iomap.crossStage.frag" }, Semantics::OpenGL},
        {{"iomap.crossStage.2.vert", "iomap.crossStage.2.geom", "iomap.crossStage.2.frag" }, Semantics::OpenGL},
        {{"iomap.blockOutVariableIn.vert", "iomap.blockOutVariableIn.frag"}, Semantics::OpenGL},
        {{"iomap.variableOutBlockIn.vert", "iomap.variableOutBlockIn.frag"}, Semantics::OpenGL},
        {{"iomap.blockOutVariableIn.2.vert", "iomap.blockOutVariableIn.geom"}, Semantics::OpenGL},
        {{"iomap.variableOutBlockIn.2.vert", "iomap.variableOutBlockIn.geom"}, Semantics::OpenGL},
        // vulkan semantics
        {{"iomap.crossStage.vk.vert", "iomap.crossStage.vk.geom", "iomap.crossStage.vk.frag" }, Semantics::Vulkan},
    }))
);
// clang-format on

}  // anonymous namespace
}  // namespace glslangtest
#endif 
