/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementProperties.h>

@class TSCH3DChartElementProperties;

@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties {

	TSCH3DChartElementProperties* mOriginal;

}
+(id)propertiesWithProperties:(id)arg1 ;
-(id)chartTransform;
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(id)elementsTransform;
-(void)applyChartElementsTransform:(ObjectTransforms*)arg1 ;
-(float)elementTransformDepthFromPropertyAccessor:(const ChartScenePropertyAccessor*)arg1 ;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(id)texcoordsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)normalsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)getPropertiesOfType:(Class)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(id)labels;
@end
