/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface CAMFilterScrubberViewCell : UICollectionViewCell {

	long long _filterType;
	UIView* _filteredView;
	double _selectionDotCenterTopSpacing;
	UIView* __selectionDotView;
	UIView* __clippingView;

}

@property (nonatomic,readonly) UIView * _selectionDotView;                     //@synthesize _selectionDotView=__selectionDotView - In the implementation block
@property (nonatomic,readonly) UIView * _clippingView;                         //@synthesize _clippingView=__clippingView - In the implementation block
@property (assign,nonatomic) long long filterType;                             //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) UIView * filteredView;                          //@synthesize filteredView=_filteredView - In the implementation block
@property (assign,nonatomic) double selectionDotCenterTopSpacing;              //@synthesize selectionDotCenterTopSpacing=_selectionDotCenterTopSpacing - In the implementation block
+(CGSize)defaultSize;
+(CGSize)screenScaleContentSize;
+(double)borderInsetWidth;
+(CGSize)_defaultContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(void)_updateSelectionDot;
-(double)_selectionDotDiameter;
-(UIView *)_selectionDotView;
-(UIView *)_clippingView;
-(double)selectionDotCenterTopSpacing;
-(void)setSelectionDotCenterTopSpacing:(double)arg1 ;
-(UIView *)filteredView;
@end
