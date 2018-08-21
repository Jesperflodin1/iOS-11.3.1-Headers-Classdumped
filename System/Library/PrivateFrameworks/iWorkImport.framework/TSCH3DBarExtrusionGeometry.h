/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DExtrusionGeometry.h>

@class TSCH3DNormalDirectionMapper;

@interface TSCH3DBarExtrusionGeometry : TSCH3DExtrusionGeometry {

	BarExtrusionSetting mExtrusionSetting;
	TSCH3DNormalDirectionMapper* mNormalDirectionMapper;
	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mNormalizedSpine;
	float mScaleMappingStartingHeight;
	float mBottomCapScale;

}

@property (nonatomic,readonly) BOOL isCylindrical; 
@property (nonatomic,readonly) BOOL hasTopBevel; 
@property (nonatomic,readonly) BOOL hasBottomBevel; 
@property (nonatomic,readonly) float size; 
@property (assign,nonatomic) BarExtrusionSetting extrusionSetting; 
@property (nonatomic,readonly) TSCH3DNormalDirectionMapper * normalDirectionMapper; 
@property (nonatomic,readonly) float scaleMappingStartingHeight; 
@property (nonatomic,readonly) float bottomCapScale; 
+(id)namedBevelInterpolationShaderFunction;
-(unsigned)capOffset;
-(void)generateArrays;
-(TSCH3DNormalDirectionMapper *)normalDirectionMapper;
-(void)setExtrusionSetting:(BarExtrusionSetting)arg1 ;
-(unsigned)geometryOffset;
-(int)capCount;
-(void)p_insertCrossPointsIntoVector:(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(BOOL)hasBottomBevel;
-(BOOL)hasTopBevel;
-(void)p_updateNormalizedSpineScaleMappingsUsingTransform:(const tmat4x4<float>*)arg1 forSpineGenerator:(id)arg2 ;
-(BOOL)isCylindrical;
-(void)debug_printDataPoints;
-(id)selectionKnobPositions;
-(BarExtrusionSetting)extrusionSetting;
-(float)scaleMappingStartingHeight;
-(float)bottomCapScale;
-(id)init;
-(float)size;
-(void)dealloc;
-(int)geometryCount;
@end
