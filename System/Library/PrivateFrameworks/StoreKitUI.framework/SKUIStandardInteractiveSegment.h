/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/SKUIInteractiveSegmenting.h>

@class UIView, UIImage, UIImageView, CAMediaTimingFunction, UILabel, NSAttributedString, NSString;

@interface SKUIStandardInteractiveSegment : UIControl <SKUIInteractiveSegmenting> {

	UIView* _borderAndBackgroundContainerView;
	UIImage* _backgroundImage;
	UIImage* _borderImage;
	UIImageView* _borderImageView;
	BOOL _hasDirtyTitleLabelSize;
	BOOL _hasSetRelativeSelectionProgress;
	BOOL _hasValidCorneredImages;
	UIImageView* _highlightedBackgroundImageView;
	long long _highlightTransactionCount;
	CAMediaTimingFunction* _inverseProgressTimingFunction;
	UIImageView* _selectedBackgroundImageView;
	CAMediaTimingFunction* _progressTimingFunction;
	double _relativeSelectionProgress;
	long long _segmentPosition;
	UILabel* _titleLabel;
	NSAttributedString* _titleLabelAttributedString;
	CGSize _titleLabelSize;
	NSAttributedString* _attributedTitle;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,copy) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                  //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double relativeSelectionProgress; 
@property (assign,nonatomic) long long segmentPosition; 
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(id)_backgroundImage;
-(NSAttributedString *)attributedTitle;
-(UIEdgeInsets)contentEdgeInsets;
-(id)_borderImage;
-(void)_updateBorderAndBackgroundContainerViewTinting;
-(void)_reloadCorneredImages;
-(unsigned long long)_cornersForSegmentPosition:(long long)arg1 ;
-(CGSize)_titleLabelSize;
-(void)_applySelectionProgress;
-(void)_setNeedsReloadCorneredImages;
-(double)_normalizedSelectionProgressForRelativeSelectionProgress:(double)arg1 ;
-(id)_progressTimingFunction;
-(id)_inverseProgressTimingFunction;
-(id)_createCorneredImageWithScale:(double)arg1 forBorder:(BOOL)arg2 ;
-(double)relativeSelectionProgress;
-(void)setRelativeSelectionProgress:(double)arg1 ;
-(long long)segmentPosition;
-(void)setSegmentPosition:(long long)arg1 ;
@end

