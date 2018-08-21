/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartBasicElementProperties.h>

@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {

	float mDepthGapFactor;
	float mDepthLimitFactor;
	float mShadowCameraDepthLimitAdjustmentFactor;
	unsigned long long mMaxLimitingSeries;

}

@property (nonatomic,readonly) float p_sageInterSetDepthGapProperty; 
@property (nonatomic,readonly) long long seriesCount; 
@property (nonatomic,readonly) float depthLimitFactor; 
@property (nonatomic,readonly) float shadowCameraDepthLimitAdjustmentFactor; 
-(float)p_sageInterSetDepthGapProperty;
-(void)resetWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS458)arg2 ;
-(float)p_depthLimitedChartInitialDepthOffset;
-(float)p_interSetDepthGapProperty;
-(tvec2<int>)seriesSize;
-(float)chartMinZForScene:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(float)depthLimitFactor;
-(float)shadowCameraDepthLimitAdjustmentFactor;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateLabels;
-(long long)seriesCount;
@end

