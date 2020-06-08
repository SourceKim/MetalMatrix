# MetalMatrix

Metal matrices for 3D-Transformation.Including Scale / Translate / Rotate / LookAt / Projection / Orthographic / Frustum, and some Off-Center versions.

Each matrix api will return a `simd_float4x4` structure.

You can found the example usage in [my another repo](https://github.com/SourceKim/MetalTest)，just run and search "mm_"，check the code and do tests yourself.

## Convert degrees to radians (Macro)

```objc
MM_RADIANS(degrees)
```

## Matrix Size

```objc
+ (NSUInteger)mm_matrixSize;
```

## Identity Matrix

```objc
+ (simd_float4x4)mm_identity;
```

## Scale Matrix

```objc
+ (simd_float4x4)mm_scale: (simd_float3)vector;

+ (simd_float4x4)mm_scaleWithX: (float)x
                         withY: (float)y
                         withZ: (float)z;
```

## Translate Matrix

```objc
+ (simd_float4x4)mm_translate: (simd_float3)vector;

+ (simd_float4x4)mm_translateWithX: (float)x
                             withY: (float)y
                             withZ: (float)z;
```

## Rotate Matrix

+ (simd_float4x4)mm_rotate: (float)angle
                      axis: (simd_float3)axis;

+ (simd_float4x4)mm_rotate: (float)angle
                     withX: (float)x
                     withY: (float)y
                     withZ: (float)z;


 ## Perspective Matrix

```objc
+ (simd_float4x4)mm_perspectiveWithWidth: (float)width
                              withHeight: (float)height
                                withNear: (float)near
                                 withFar: (float)far;

+ (simd_float4x4)mm_perspectiveWithFovy: (float)fovy
                             withAspect: (float)aspect
                               withNear: (float)near
                                withFar: (float)far;

+ (simd_float4x4)mm_perspectiveWithFovy: (float)fovy
                              withWidth: (float)width
                             withHeight: (float)height
                               withNear: (float)near
                                withFar: (float)far;
```


## LookAt Matrix

```objc
+ (simd_float4x4)mm_lookAtWithEye: (simd_float3)eye
                       withCenter: (simd_float3)center
                           withUp: (simd_float3)up;

+ (simd_float4x4)mm_lookAtWithEyeX: (float)eyeX
                          withEyeY: (float)eyeY
                          withEyeZ: (float)eyeZ
                       withCenterX: (float)centerX
                       withCenterY: (float)centerY
                       withCenterZ: (float)centerZ
                           withUpX: (float)upX
                           withUpY: (float)upY
                           withUpZ: (float)upZ;
```

## Orthographic Matrix

```objc
+ (simd_float4x4)mm_orthoWithLeft: (float)left
                        withRight: (float)right
                       withBottom: (float)bottom
                          withTop: (float)top
                         withNear: (float)near
                          withFar: (float)far;

+ (simd_float4x4)mm_orthoWithOrigin: (simd_float3)origin
                           withSize: (simd_float3)size;
```


## Off-Center Orthographic Matrix

```objc
+ (simd_float4x4)mm_ortho_ocWithLeft: (float)left
                           withRight: (float)right
                          withBottom: (float)bottom
                             withTop: (float)top
                            withNear: (float)near
                             withFar: (float)far;

+ (simd_float4x4)mm_ortho_ocWithOrigin: (simd_float3)origin
                              withSize: (simd_float3)size;
```

## Frustum Matrix

```objc
+ (simd_float4x4)mm_frustumWithFovH: (float)fovH
                           withFovV: (float)fovV
                           withNear: (float)near
                            withFar: (float)far;

+ (simd_float4x4)mm_frustumWithLeft: (float)left
                          withRight: (float)right
                         withBotoom: (float)bottom
                            withTop: (float)top
                           withNear: (float)near
                            withFar: (float)far;
```

## Off-Center Frustum Matrix

```objc
+ (simd_float4x4)mm_frustum_ocWithLeft: (float)left
                             withRight: (float)right
                            withBotoom: (float)bottom
                               withTop: (float)top
                              withNear: (float)near
                               withFar: (float)far;
```