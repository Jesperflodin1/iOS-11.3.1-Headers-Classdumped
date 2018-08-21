/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIColor, NSArray, UIImageView, UIView, UIVisualEffectView, NSString;

@interface _UIBarBackground : UIView {

	long long _translucence;
	UIImage* _backgroundImage;
	UIColor* _backgroundTintColor;
	NSArray* _backgroundEffects;
	UIImage* _shadowImage;
	UIColor* _shadowColor;
	double _shadowHeight;
	int _shadowPosition;
	UIImageView* _backgroundImageView;
	UIView* _backgroundTopInsetView;
	UIImageView* _shadowView;
	UIVisualEffectView* _backgroundEffectView;
	BOOL _disableTinting;
	UIView* _customBackgroundView;
	double _topInset;

}

@property (assign,nonatomic) double shadowAlpha; 
@property (nonatomic,retain) UIView * customBackgroundView;                //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) BOOL disableBlur; 
@property (assign,nonatomic) BOOL disableTinting;                          //@synthesize disableTinting=_disableTinting - In the implementation block
@property (assign,nonatomic) double topInset;                              //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundEffect; 
@property (nonatomic,readonly) UIImage * shim_shadowImage; 
@property (nonatomic,readonly) UIImageView * shim_shadowView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_encodableSubviews;
-(void)configureWithEffects:(id)arg1 ;
-(void)configureAsTransperant;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 barStyle:(long long)arg3 ;
-(void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(BOOL)arg3 ;
-(void)configureWithoutShadow;
-(void)configureColoredShadow:(id)arg1 pixelHeight:(double)arg2 topShadow:(BOOL)arg3 ;
-(void)setGroupName:(NSString *)arg1 ;
-(void)transitionBackgroundViews;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(double)topInset;
-(void)setDisableTinting:(BOOL)arg1 ;
-(void)configureImage:(id)arg1 forceTranslucent:(BOOL)arg2 ;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 backgroundTintColor:(id)arg3 ;
-(NSString *)groupName;
-(void)configureShadowImage:(id)arg1 topShadow:(BOOL)arg2 ;
-(void)setTopInset:(double)arg1 ;
-(void)setDisableBlur:(BOOL)arg1 ;
-(UIImageView *)shim_shadowView;
-(UIView *)customBackgroundView;
-(void)setShadowAlpha:(double)arg1 ;
-(double)shadowAlpha;
-(UIImage *)shim_shadowImage;
-(BOOL)disableTinting;
-(BOOL)hasBackgroundEffect;
-(id)_colorForStyle:(long long)arg1 ;
-(id)_blurWithStyle:(long long)arg1 tint:(id)arg2 ;
-(void)cleanupBackgroundViews;
-(void)prepareBackgroundViews;
-(void)updateBackground;
-(BOOL)disableBlur;
-(void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(BOOL)arg3 ;
@end
