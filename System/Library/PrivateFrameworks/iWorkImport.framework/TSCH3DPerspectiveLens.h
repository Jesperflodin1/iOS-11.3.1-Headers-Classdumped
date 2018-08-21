/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLens.h>

@interface TSCH3DPerspectiveLens : TSCH3DLens {

	float mFOV;
	float mAspect;

}

@property (assign,nonatomic) float fov; 
@property (assign,nonatomic) float aspect; 
@property (nonatomic,readonly) float width; 
@property (nonatomic,readonly) float height; 
-(void)calculateCullingPlanes:(vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > >*)arg1 ;
-(FrustumRect)frustumRect;
-(id)narrowedByNormalizedBounds:(box<glm::detail::tvec2<float> >*)arg1 ;
-(id)shiftedByPercentage:(tvec2<float>*)arg1 ;
-(FrustumRect)frustumRectAtDistance:(float)arg1 ;
-(id)asFrustumLens;
-(id)matrixDescription;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)height;
-(float)width;
-(void)setAspect:(float)arg1 ;
-(float)fov;
-(void)setFov:(float)arg1 ;
-(tmat4x4<float>)matrix;
-(float)aspect;
@end

