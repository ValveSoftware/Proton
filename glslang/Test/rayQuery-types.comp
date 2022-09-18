#version 460
#extension GL_EXT_ray_query : require

layout(local_size_x = 16, local_size_y = 8, local_size_z = 1) in;

layout(binding = 0, set = 0) uniform accelerationStructureEXT tlas;

void main()
{
  rayQueryEXT rayQuery;
  rayQueryInitializeEXT(rayQuery,       // Ray query
                        tlas,           // Top-level acceleration structure
                        0,              // Ray flags
                        0xFF,           // 8-bit instance mask
                        vec3(0),        // Ray origin
                        0.0,            // Minimum t-value
                        vec3(1, 0, 0),  // Ray direction
                        10000.0);       // Maximum t-value

  // yes this is silly, just want to verify the return types
  bool rq_proceed = rayQueryProceedEXT(rayQuery);
  while(rq_proceed)
  {
    rq_proceed = rayQueryProceedEXT(rayQuery);
  }

  const uint intersectionType = rayQueryGetIntersectionTypeEXT(rayQuery, true);
  const float rayTMin = rayQueryGetRayTMinEXT(rayQuery);
  const uint rayFlags = rayQueryGetRayFlagsEXT(rayQuery);
  const vec3 worldRayOrigin = rayQueryGetWorldRayOriginEXT(rayQuery);
  const vec3 worldDirection = rayQueryGetWorldRayDirectionEXT(rayQuery);
  const float intersectionT = rayQueryGetIntersectionTEXT(rayQuery, true);
  const int customIndex = rayQueryGetIntersectionInstanceCustomIndexEXT(rayQuery, true);
  const int instanceId = rayQueryGetIntersectionInstanceIdEXT(rayQuery, true);
  const uint sbtOffset = rayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetEXT(rayQuery, true);
  const int geometryIndex = rayQueryGetIntersectionGeometryIndexEXT(rayQuery, true);
  const int primitiveIndex = rayQueryGetIntersectionPrimitiveIndexEXT(rayQuery, true);
  const vec2 barys = rayQueryGetIntersectionBarycentricsEXT(rayQuery, true);
  const bool frontface = rayQueryGetIntersectionFrontFaceEXT(rayQuery, true);
  const bool aabbOpaque = rayQueryGetIntersectionCandidateAABBOpaqueEXT(rayQuery);
  const vec3 objRayDirection = rayQueryGetIntersectionObjectRayDirectionEXT(rayQuery, true);
  const vec3 objRayOrigin = rayQueryGetIntersectionObjectRayOriginEXT(rayQuery, true);
  const mat4x3 objToWorld = rayQueryGetIntersectionObjectToWorldEXT(rayQuery, true);
  const mat4x3 worldToObj = rayQueryGetIntersectionWorldToObjectEXT(rayQuery, true);
}
