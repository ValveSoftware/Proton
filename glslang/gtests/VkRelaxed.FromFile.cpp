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

struct vkRelaxedData {
    std::vector<std::string> fileNames;
    std::vector<std::vector<std::string>> resourceSetBindings;
};

using VulkanRelaxedTest = GlslangTest <::testing::TestWithParam<vkRelaxedData>>;

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
            // These are not part of a matched interface. Other cases still need to be added.
            } else if (name != "gl_FrontFacing" && name != "gl_FragCoord") {
                success &= false;
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

TEST_P(VulkanRelaxedTest, FromFile)
{
    const auto& fileNames = GetParam().fileNames;
    const auto& resourceSetBindings = GetParam().resourceSetBindings;
    Semantics semantics = Semantics::Vulkan;
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

        shader->setEnvInput(glslang::EShSourceGlsl, shader->getStage(), glslang::EShClientVulkan, 100);
        shader->setEnvClient(glslang::EShClientVulkan, glslang::EShTargetVulkan_1_1);
        shader->setEnvTarget(glslang::EShTargetSpv, glslang::EShTargetSpv_1_0);

        // Use vulkan relaxed option
        shader->setEnvInputVulkanRulesRelaxed();

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

    if (!resourceSetBindings.empty()) {
        assert(resourceSetBindings.size() == fileNames.size());
        for (size_t i = 0; i < shaders.size(); i++)
            shaders[i]->setResourceSetBinding(resourceSetBindings[i]);
    }

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
    Glsl, VulkanRelaxedTest,
    ::testing::ValuesIn(std::vector<vkRelaxedData>({
        {{"vk.relaxed.frag"}},
        {{"vk.relaxed.link1.frag", "vk.relaxed.link2.frag"}},
        {{"vk.relaxed.stagelink.0.0.vert", "vk.relaxed.stagelink.0.1.vert", "vk.relaxed.stagelink.0.2.vert", "vk.relaxed.stagelink.0.0.frag", "vk.relaxed.stagelink.0.1.frag", "vk.relaxed.stagelink.0.2.frag"}},
        {{"vk.relaxed.stagelink.vert", "vk.relaxed.stagelink.frag"}},
        {{"vk.relaxed.errorcheck.vert", "vk.relaxed.errorcheck.frag"}},
        {{"vk.relaxed.changeSet.vert", "vk.relaxed.changeSet.frag" }, { {"0"}, {"1"} } },
    }))
);
// clang-format on

}  // anonymous namespace
}  // namespace glslangtest
#endif 
