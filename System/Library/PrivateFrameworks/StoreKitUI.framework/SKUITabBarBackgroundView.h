/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView, _UINavigationBarAppearanceStorage, UIColor, NSString;

@interface SKUITabBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	BOOL barWantsAdaptiveBackdrop;
	BOOL translucent;
	_UINavigationBarAppearanceStorage* appearanceStorage;
	long long barStyle;
	UIColor* barTintColor;
	UIView* _shadowView;
	long long _backdropStyle;

}

@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage; 
@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (assign,nonatomic) BOOL barWantsAdaptiveBackdrop; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (assign,nonatomic) long long backdropStyle;                                            //@synthesize backdropStyle=_backdropStyle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isTranslucent;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(UIColor *)barTintColor;
-(UIView *)_shadowView;
-(void)_setShadowView:(id)arg1 ;
-(long long)backdropStyle;
-(id)_currentCustomBackground;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setBackdropStyle:(long long)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(void)updateBackgroundImage;
-(void)setAppearanceStorage:(_UINavigationBarAppearanceStorage *)arg1 ;
-(BOOL)barWantsAdaptiveBackdrop;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
@end

