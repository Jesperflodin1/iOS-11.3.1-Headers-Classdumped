/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class _UIBackdropView, UIColor, SKUIPlayButtonShapeView, UIView, UIImage, SKUIPlayButtonGradientView, NSArray, UIImageView, NSString, SKUIButtonViewElement;

@interface SKUIPlayButtonControl : UIControl {

	_UIBackdropView* _backdropView;
	UIColor* _backgroundColor;
	long long _backgroundType;
	SKUIPlayButtonShapeView* _borderLayer;
	UIView* _backgroundView;
	UIColor* _bufferProgressIndicatorColor;
	UIColor* _controlForeGroundColor;
	id _bufferProgressIndicatorCompositingFilter;
	UIImage* _customPlayImage;
	UIImage* _customToggleImage;
	BOOL _didInitialHighlightForTouch;
	SKUIPlayButtonGradientView* _gradientBackgroundView;
	NSArray* _gradientColors;
	long long _gradientType;
	UIImageView* _imageView;
	SKUIPlayButtonShapeView* _innerProgressLayer;
	BOOL _indeterminate;
	SKUIPlayButtonShapeView* _outerProgressLayer;
	float _progress;
	SKUIPlayButtonShapeView* _selectedLayer;
	BOOL _showingProgress;
	UIColor* _progressIndicatorColor;
	id _progressIndicatorCompositingFilter;
	UIColor* _selectionColor;
	id _selectionCompositingFilter;
	BOOL _usesBlurredBackground;
	BOOL _showingPlayIndicator;
	BOOL _showBorder;
	BOOL _showOuterBorder;
	BOOL _disabledButSelectable;
	NSString* _backdropGroupName;
	UIImage* _backgroundImageForBlurring;
	SKUIButtonViewElement* _element;
	UIEdgeInsets _bigHitInsets;

}

@property (assign,nonatomic,__weak) UIImage * backgroundImageForBlurring;                            //@synthesize backgroundImageForBlurring=_backgroundImageForBlurring - In the implementation block
@property (assign,getter=isDisabledButSelectable,nonatomic) BOOL disabledButSelectable;              //@synthesize disabledButSelectable=_disabledButSelectable - In the implementation block
@property (nonatomic,retain) SKUIButtonViewElement * element;                                        //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) long long backgroundType;                                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,readonly) UIColor * controlForeGroundColor;                                     //@synthesize controlForeGroundColor=_controlForeGroundColor - In the implementation block
@property (nonatomic,retain) UIImage * customPlayImage;                                              //@synthesize customPlayImage=_customPlayImage - In the implementation block
@property (nonatomic,retain) UIImage * customToggleImage;                                            //@synthesize customToggleImage=_customToggleImage - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bigHitInsets;                                              //@synthesize bigHitInsets=_bigHitInsets - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                             //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (getter=isIndeterminate,nonatomic,readonly) BOOL indeterminate;                            //@synthesize indeterminate=_indeterminate - In the implementation block
@property (assign,nonatomic) float progress;                                                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) UIColor * progressIndicatorColor;                                         //@synthesize progressIndicatorColor=_progressIndicatorColor - In the implementation block
@property (nonatomic,readonly) BOOL showingPlayIndicator;                                            //@synthesize showingPlayIndicator=_showingPlayIndicator - In the implementation block
@property (nonatomic,readonly) BOOL showingProgress;                                                 //@synthesize showingProgress=_showingProgress - In the implementation block
@property (assign,nonatomic) BOOL showOuterBorder;                                                   //@synthesize showOuterBorder=_showOuterBorder - In the implementation block
+(id)blurColorForColor:(id)arg1 ;
+(SCD_Struct_SK25)_calculateStatistics:(CGImageRef)arg1 withSize:(CGSize)arg2 ;
+(id)blurColorForImage:(id)arg1 forButtonSize:(CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_backgroundView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(CGRect)hitRect;
-(void)setProgress:(float)arg1 ;
-(id)_defaultBackgroundView;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
-(void)refresh;
-(BOOL)isIndeterminate;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(id)defaultBackgroundColor;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(CGSize)buttonSize;
-(void)_createGradient:(id)arg1 withGradientType:(long long)arg2 ;
-(UIEdgeInsets)bigHitInsets;
-(void)setBigHitInsets:(UIEdgeInsets)arg1 ;
-(void)beginIndeterminateAnimation;
-(void)showPlayIndicator:(BOOL)arg1 ;
-(void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3 ;
-(long long)backgroundType;
-(BOOL)showingProgress;
-(id)_selectedLayer;
-(BOOL)isDisabledButSelectable;
-(SKUIButtonViewElement *)element;
-(void)_updateEnabledState;
-(BOOL)_renderAsEnabled;
-(id)_classicBackdropView;
-(void)_updateBackdropView;
-(void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2 ;
-(void)_updateInnerProgressLayerStroke;
-(void)updateOuterProgressLayerStroke;
-(void)_beginIndeterminateAnimation;
-(id)_outerProgressLayer;
-(void)endIndeterminateAnimation;
-(id)_innerProgressLayer;
-(float)playButtonDefaultAlpha;
-(void)_showPlayIndicator:(BOOL)arg1 ;
-(void)_prepareForReuse;
-(void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3 ;
-(id)_gradientBackgroundView;
-(float)buttonCornerRadius;
-(void)setShowBorder:(BOOL)arg1 ;
-(void)_toggleToPlayState;
-(id)_borderLayer;
-(void)showPlayIndicator:(BOOL)arg1 force:(BOOL)arg2 ;
-(BOOL)showOuterBorder;
-(id)outerBorderColor;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(id)cancelImage;
-(void)_useBlurredBackground:(BOOL)arg1 ;
-(void)setControlForegroundColor:(id)arg1 ;
-(id)playImage;
-(void)setSelectionColor:(id)arg1 withCompositingFilter:(id)arg2 ;
-(id)_playImage;
-(id)_cancelImage;
-(void)playIndicatorDidChange:(BOOL)arg1 ;
-(void)setDisabledButSelectable:(BOOL)arg1 ;
-(void)setProgressIndicatorColor:(UIColor *)arg1 ;
-(void)setBackgroundType:(long long)arg1 ;
-(void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2 ;
-(void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2 ;
-(void)setCustomPlayImage:(UIImage *)arg1 ;
-(void)setShowOuterBorder:(BOOL)arg1 ;
-(id)_simpleBackdrop;
-(UIColor *)controlForeGroundColor;
-(UIImage *)customPlayImage;
-(UIImage *)customToggleImage;
-(void)setCustomToggleImage:(UIImage *)arg1 ;
-(BOOL)showingPlayIndicator;
-(UIColor *)progressIndicatorColor;
-(UIImage *)backgroundImageForBlurring;
-(void)setBackgroundImageForBlurring:(UIImage *)arg1 ;
-(void)setElement:(SKUIButtonViewElement *)arg1 ;
-(void)setControlColor:(id)arg1 ;
@end

