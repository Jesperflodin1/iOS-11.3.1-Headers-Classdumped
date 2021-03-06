/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DScene, TSCH3DChartGetProjectedBoundsPipeline, TSCH3DChartBoundsLayoutSceneDelegate;

@interface TSCH3DChartBoundsLayout : NSObject {

	TSCH3DScene* mScene;
	TSCH3DScene* mBounds;
	Class mGetBoundsClass;
	TSCH3DChartGetProjectedBoundsPipeline* mGetBounds;
	TSCH3DChartBoundsLayoutSceneDelegate* mSceneDelegate;
	box<glm::detail::tvec2<float> > mLayoutInPage;
	box<glm::detail::tvec2<float> > mBodyLayoutInPage;
	tvec2<int> mOriginalContainingViewport;
	int mMode;
	SCD_Struct_TS514 mLayoutSettings;

}

@property (nonatomic,readonly) SCD_Struct_TS514 layoutSettings; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (assign,nonatomic) box<glm::detail::tvec2<float> > layoutInPage; 
@property (assign,nonatomic) box<glm::detail::tvec2<float> > bodyLayoutInPage; 
@property (assign,nonatomic) tvec2<int> containingViewport; 
@property (assign,nonatomic) tvec2<int> originalContainingViewport; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) Class getBoundsClass; 
-(void)setLayoutInPage:(box<glm::detail::tvec2<float> >)arg1 ;
-(void)setBodyLayoutInPage:(box<glm::detail::tvec2<float> >)arg1 ;
-(const ChartProjectedBoundsSpaces*)projectedBounds;
-(tvec2<int>)containingViewport;
-(SCD_Struct_TS514)layoutSettings;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2 ;
-(void)resetSceneDelegate;
-(void)setContainingViewport:(tvec2<int>)arg1 ;
-(void)setOriginalContainingViewport:(tvec2<int>)arg1 ;
-(id)cacheableGetBoundsPipeline;
-(const ChartProjectedBoundsSpaces*)p_projectedBoundsWithLabelsMode:(int)arg1 ;
-(BOOL)isInward;
-(void)p_updateLabelWrapBoundsPass;
-(BOOL)isSage;
-(id)initWithScene:(id)arg1 containingViewport:(const tvec2<int>*)arg2 originalContainingViewport:(const tvec2<int>*)arg3 layoutSettings:(const SCD_Struct_TS514*)arg4 ;
-(ResizingSize)resizingSize;
-(void)resetContainingViewport;
-(void)cacheLabels;
-(id)debugBounds;
-(box<glm::detail::tvec2<float> >)layoutInPage;
-(box<glm::detail::tvec2<float> >)bodyLayoutInPage;
-(tvec2<int>)originalContainingViewport;
-(Class)getBoundsClass;
-(void)setGetBoundsClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(TSCH3DScene *)scene;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(void)invalidateBounds;
@end

