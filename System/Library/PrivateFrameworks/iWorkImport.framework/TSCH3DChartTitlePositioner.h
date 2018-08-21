/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUWeakReference, TSCHChartInfo, TSCH3DScene;

@interface TSCH3DChartTitlePositioner : NSObject {

	TSUWeakReference* mWeakScene;
	TSCHChartInfo* mInfo;
	tvec2<float> mCachedCategoryAxisLabelsSize;
	tvec2<float> mCachedValueAxisLabelsSize;
	tvec2<float> mCachedSeriesLabelsSize;

}

@property (nonatomic,retain,readonly) TSCHChartInfo * info; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
+(id)positionerWithInfo:(id)arg1 scene:(id)arg2 ;
-(BOOL)hasScene:(id)arg1 ;
-(double)wrapWidthForSize:(CGSize)arg1 labelTransform:(const LabelTransform*)arg2 ;
-(id)initWithInfo:(id)arg1 scene:(id)arg2 ;
-(void)applyParagraphStyle:(id)arg1 onLabelTransform:(LabelTransform*)arg2 alignmentDimension:(int)arg3 ;
-(tvec2<float>)sizeOfCategoryAxisLabels;
-(tvec2<float>)sizeOfValueAxisLabels;
-(tvec2<float>)sizeOfSeriesLabels;
-(void)dealloc;
-(TSCH3DScene *)scene;
-(TSCHChartInfo *)info;
@end

