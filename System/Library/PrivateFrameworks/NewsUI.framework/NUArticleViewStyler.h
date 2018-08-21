/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleViewStyler.h>

@protocol NUArticleViewStyler
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) long long topBackgroundStatusBarStyle; 
@required
-(long long)statusBarStyle;
-(void)styleToolbar:(id)arg1;
-(void)styleTabBar:(id)arg1;
-(void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2;
-(void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2;
-(long long)topBackgroundStatusBarStyle;

@end


@class UIColor;

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler> {

	long long _statusBarStyle;
	long long _topBackgroundStatusBarStyle;
	UIColor* _backgroundColor;
	UIColor* _tabBarTintColor;
	UIColor* _toolBarTintColor;

}

@property (nonatomic,retain) UIColor * tabBarTintColor;                            //@synthesize tabBarTintColor=_tabBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * toolBarTintColor;                           //@synthesize toolBarTintColor=_toolBarTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle;                           //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,readonly) long long topBackgroundStatusBarStyle;              //@synthesize topBackgroundStatusBarStyle=_topBackgroundStatusBarStyle - In the implementation block
-(UIColor *)backgroundColor;
-(long long)statusBarStyle;
-(void)styleToolbar:(id)arg1 ;
-(void)styleTabBar:(id)arg1 ;
-(long long)statusBarStyleForBackgroundColor:(id)arg1 ;
-(UIColor *)tabBarTintColor;
-(void)setTabBarTintColor:(UIColor *)arg1 ;
-(UIColor *)toolBarTintColor;
-(void)setToolBarTintColor:(UIColor *)arg1 ;
-(void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2 ;
-(void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2 ;
-(long long)topBackgroundStatusBarStyle;
-(id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2 ;
@end
