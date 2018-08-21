/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartBasicElementProperties.h>

@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties {

	vector<float, std::__1::allocator<float> >* mPercentOfTotal;
	vector<float, std::__1::allocator<float> >* mRotation;
	vector<float, std::__1::allocator<float> >* mExplode;

}
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(float)elementTransformDepthFromPropertyAccessor:(const ChartScenePropertyAccessor*)arg1 ;
-(GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(long long)flatIndex:(const tvec2<int>*)arg1 ;
-(float)explosionAtElementIndex:(const tvec2<int>*)arg1 ;
-(float)rotationAtElementIndex:(const tvec2<int>*)arg1 ;
-(float)explosionAtElementIndex:(const tvec2<int>*)arg1 propertyAccessor:(const ChartScenePropertyAccessor*)arg2 ;
-(float)percentOfTotalAtElementIndex:(const tvec2<int>*)arg1 ;
-(void)setPercentOfTotal:(float)arg1 atElementIndex:(const tvec2<int>*)arg2 ;
-(void)setRotation:(float)arg1 atElementIndex:(const tvec2<int>*)arg2 ;
-(void)setExplosion:(float)arg1 atElementIndex:(const tvec2<int>*)arg2 ;
-(BOOL)anyHasExplosion;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateLabels;
-(void)updateValues;
@end

