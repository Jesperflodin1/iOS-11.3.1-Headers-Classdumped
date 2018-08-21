/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChat/BusinessChat-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIImageView, UIView;

@interface BCChatButton : UIControl {

	BOOL _isInverted;
	long long _style;
	UILabel* _label;
	UILabel* _smallLabel;
	UIImageView* _iconImageView;
	UIView* _centeredView;

}

@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL isInverted;                          //@synthesize isInverted=_isInverted - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * smallLabel;                     //@synthesize smallLabel=_smallLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIView * centeredView;                    //@synthesize centeredView=_centeredView - In the implementation block
-(void)setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(long long)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)sizeToFit;
-(void)setStyle:(long long)arg1 ;
-(UILabel *)label;
-(id)viewForLastBaselineLayout;
-(void)setLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)_setStyle:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(BOOL)isInverted;
-(void)createSubviews;
-(void)setCenteredView:(UIView *)arg1 ;
-(UIView *)centeredView;
-(void)setIsInverted:(BOOL)arg1 ;
-(UILabel *)smallLabel;
-(void)updateAppearanceForState:(long long)arg1 ;
-(void)setAccessibilityValues;
-(CGSize)calculateButtonLayout;
-(void)setSmallLabel:(UILabel *)arg1 ;
-(id)color:(BCColor)arg1 ;
-(void)updateButtonLayout;
-(void)setTextForLabel:(id)arg1 label:(id)arg2 ;
-(void)setOpacityForView:(id)arg1 opacity:(double)arg2 ;
@end
