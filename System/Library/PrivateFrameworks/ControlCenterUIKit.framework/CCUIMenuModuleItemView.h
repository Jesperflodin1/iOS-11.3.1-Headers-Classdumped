/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIImage, UIView, UIImageView;

@interface CCUIMenuModuleItemView : UIControl {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImage* _glyphImage;
	UIView* _separatorView;
	UIImageView* _glyphImageView;
	UIView* _highlightedBackgroundView;
	BOOL _separatorVisible;
	BOOL _useTallLayout;
	/*^block*/id _handler;
	double _preferredMaxLayoutWidth;

}

@property (nonatomic,copy,readonly) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL separatorVisible;                       //@synthesize separatorVisible=_separatorVisible - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,nonatomic) BOOL useTallLayout;                          //@synthesize useTallLayout=_useTallLayout - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(id)handler;
-(void)_updateForStateChange;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 glyphImage:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setUseTallLayout:(BOOL)arg1 ;
-(BOOL)useTallLayout;
-(double)_titleBaselineToTop;
-(double)_titleBaselineToBottom;
-(BOOL)_shouldCenterText;
-(double)_glyphMargin;
-(BOOL)separatorVisible;
-(id)initWithTitle:(id)arg1 glyphImage:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSeparatorVisible:(BOOL)arg1 ;
-(NSDirectionalEdgeInsets)_labelInsets;
@end
