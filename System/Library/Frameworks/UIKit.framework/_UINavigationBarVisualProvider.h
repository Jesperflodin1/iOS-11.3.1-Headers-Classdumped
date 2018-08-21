/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UINavigationBar, _UINavigationBarItemStack, NSDictionary, _UINavigationControllerRefreshControlHost;

@interface _UINavigationBarVisualProvider : NSObject {

	UINavigationBar* _navigationBar;
	_UINavigationBarItemStack* _stack;
	NSDictionary* _overrides;
	BOOL _usesLegacyUI;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;

}

@property (nonatomic,readonly) UINavigationBar * navigationBar;                                           //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) _UINavigationBarItemStack * stack;                                           //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost;              //@synthesize refreshControlHost=_refreshControlHost - In the implementation block
@property (nonatomic,readonly) BOOL wantsLargeTitleDisplayed; 
+(BOOL)supportsRefreshControlHosting;
-(void)layoutSubviews;
-(void)invalidateIntrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UINavigationBar *)navigationBar;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(long long)statusBarStyle;
-(void)stackDidChangeFrom:(id)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)prepare;
-(void)teardown;
-(void)setStack:(_UINavigationBarItemStack *)arg1 ;
-(void)changeAppearance;
-(void)changeLayout;
-(void)_updateBackground;
-(void)_updateTitleViewForOpacityChange;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(long long)currentContentSize;
-(void)safeAreaInsetsDidChange;
-(CGPoint)heightRangeFittingWidth:(double)arg1 ;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(void)barSizeChanged;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)updateConstraints;
-(void)prepareForPush;
-(void)prepareForPop;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(void)updateTopNavigationItemAnimated:(BOOL)arg1 ;
-(void)updateTopNavigationItemTitleView;
-(void)recordBarSize:(CGSize)arg1 ;
-(BOOL)wantsLargeTitleDisplayed;
-(void)setupTopNavigationItem;
-(void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canHandleStatusBarTouchAtPoint:(CGPoint)arg1 ;
-(id)preferredFocusedView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(/*^block*/id)arg2 ;
-(_UINavigationBarItemStack *)stack;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(id)_shim_contentView;
-(id)_shim_layoutView;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1 ;
-(void)_shim_setUseContentView:(BOOL)arg1 ;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)_shim_updateBackdropView;
-(id)_shim_backdropGroupName;
-(void)_shim_setBackdropGroupName:(id)arg1 ;
-(BOOL)_shim_disableBlurTinting;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(double)_shim_backgroundHeight;
-(long long)_shim_backdropStyle;
-(id)_shim_userContentGuide;
-(void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2 ;
-(id)_shim_promptText;
-(void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2 ;
-(void)_shim_updateBackIndicator;
-(id)_shim_backIndicatorView;
-(void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)_shim_customHitTest:(CGPoint)arg1 forView:(id)arg2 ;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1 ;
-(void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_popForCarplayPressAtFakePoint:(CGPoint)arg1 ;
-(BOOL)_shim_throwConstraintExceptions;
-(void)_shim_updateBackgroundViewIgnoringFlag;
-(void)_shim_30244716;
-(BOOL)_shim_34415965;
-(double)_shim_backgroundAlpha;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
@end
