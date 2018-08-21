/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartAbstractAreaLayoutItem.h>

@class TSCHChartAxisLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {

	TSCHChartAxisLayoutItem* mTopHorizontalAxis;
	TSCHChartAxisLayoutItem* mBottomHorizontalAxis;
	TSCHChartAxisLayoutItem* mLeftVerticalAxis;
	TSCHChartAxisLayoutItem* mRightVerticalAxis;
	unsigned long long mRelayoutDepth;
	BOOL mInOutwardLayout;

}

@property (nonatomic,readonly) TSCHChartReferenceLineLabelsLayoutItem * rightRefLineLabels; 
@property (nonatomic,readonly) TSCHChartReferenceLineLabelsLayoutItem * topRefLineLabels; 
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)p_layoutInward;
-(void)p_layoutOutward;
-(id)renderersWithRep:(id)arg1 ;
-(void)buildSubTree;
-(CGRect)i_currentBufferAreaUnitRect;
-(double)p_dataSetNameLabelPadding;
-(Class)p_axisLayoutItemClassForAxisID:(id)arg1 ;
-(void)p_arrangeSizedChildren;
-(void)p_updateMinHitSizes;
-(TSCHChartReferenceLineLabelsLayoutItem *)rightRefLineLabels;
-(TSCHChartReferenceLineLabelsLayoutItem *)topRefLineLabels;
-(CGRect)titleFrame;
@end

