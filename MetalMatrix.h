//
//  MetalMatrix.h
//  MetalTest
//
//  Created by 苏金劲 on 2020/6/8.
//  Copyright © 2020 苏金劲. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <simd/simd.h>

#define MM_kRADIANS (1.0f / 180.0f * M_PI)

// Convert degrees to radians
#define MM_RADIANS(degrees) degrees * MM_kRADIANS

#define MM_RADIANS_OVER_PI(degrees) degrees * (1.f / 180.f)

NS_ASSUME_NONNULL_BEGIN

@interface MetalMatrix : NSObject

#pragma mark Public - MatrixSize

+ (NSUInteger)mm_matrixSize;


#pragma mark Public - Identity

+ (simd_float4x4)mm_identity;


#pragma mark Public - Transformations - Scale

+ (simd_float4x4)mm_scale: (simd_float3)vector;

+ (simd_float4x4)mm_scaleWithX: (float)x
                         withY: (float)y
                         withZ: (float)z;


#pragma mark Public - Transformations - Translate

+ (simd_float4x4)mm_translate: (simd_float3)vector;

+ (simd_float4x4)mm_translateWithX: (float)x
                             withY: (float)y
                             withZ: (float)z;


#pragma mark Public - Transformations - Rotate

+ (simd_float4x4)mm_rotate: (float)angle
                      axis: (simd_float3)axis;

+ (simd_float4x4)mm_rotate: (float)angle
                     withX: (float)x
                     withY: (float)y
                     withZ: (float)z;


#pragma mark Public - Transformations - Perspective

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


#pragma mark Public - Transformations - LookAt

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


#pragma mark Public - Transformations - Orthographic

+ (simd_float4x4)mm_orthoWithLeft: (float)left
                        withRight: (float)right
                       withBottom: (float)bottom
                          withTop: (float)top
                         withNear: (float)near
                          withFar: (float)far;

+ (simd_float4x4)mm_orthoWithOrigin: (simd_float3)origin
                           withSize: (simd_float3)size;


#pragma mark Public - Transformations - Off-Center Orthographic

+ (simd_float4x4)mm_ortho_ocWithLeft: (float)left
                           withRight: (float)right
                          withBottom: (float)bottom
                             withTop: (float)top
                            withNear: (float)near
                             withFar: (float)far;

+ (simd_float4x4)mm_ortho_ocWithOrigin: (simd_float3)origin
                              withSize: (simd_float3)size;


#pragma mark Public - Transformations - frustum

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


#pragma mark Public - Transformations - Off-Center frustum

+ (simd_float4x4)mm_frustum_ocWithLeft: (float)left
                             withRight: (float)right
                            withBotoom: (float)bottom
                               withTop: (float)top
                              withNear: (float)near
                               withFar: (float)far;
@end

NS_ASSUME_NONNULL_END
