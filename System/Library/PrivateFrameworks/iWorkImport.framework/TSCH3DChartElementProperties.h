/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCH3DTexturePool;

@interface TSCH3DChartElementProperties : NSObject <NSCopying> {

	TSCH3DTexturePool* mPool;

}

@property (nonatomic,readonly) TSCH3DTexturePool * pool; 
+(id)properties;
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(void)applyChartElementsTransform:(ObjectTransforms*)arg1 ;
-(float)elementTransformDepthFromPropertyAccessor:(const ChartScenePropertyAccessor*)arg1 ;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(void)applyChartElementsTransformToProcessor:(id)arg1 ;
-(BOOL)applyElementTransformToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(BOOL)applyCombinedTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(void)addTexcoordsToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 ;
-(id)getPropertiesOfType:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCH3DTexturePool *)pool;
@end

