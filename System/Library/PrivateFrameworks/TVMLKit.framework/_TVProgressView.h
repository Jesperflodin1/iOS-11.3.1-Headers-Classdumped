/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, _TVProgressBarView, UIColor, UIImageView;

@interface _TVProgressView : UIView {

	UIVisualEffectView* _materialView;
	_TVProgressBarView* _progressBarView;
	BOOL _useMaterial;
	long long _style;
	double _cornerRadius;
	double _progress;
	UIColor* _progressTintColor;
	UIColor* _completeTintColor;
	UIImageView* _shadowImageView;

}

@property (nonatomic,retain) UIImageView * shadowImageView;              //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * completeTintColor;                //@synthesize completeTintColor=_completeTintColor - In the implementation block
@property (assign,nonatomic) BOOL useMaterial;                           //@synthesize useMaterial=_useMaterial - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(double)progress;
-(UIImageView *)shadowImageView;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(void)setCompleteTintColor:(UIColor *)arg1 ;
-(void)_updateForStyleChange;
-(id)_maskImageForProgressBar;
-(void)setUseMaterial:(BOOL)arg1 ;
-(UIColor *)completeTintColor;
-(BOOL)useMaterial;
@end

