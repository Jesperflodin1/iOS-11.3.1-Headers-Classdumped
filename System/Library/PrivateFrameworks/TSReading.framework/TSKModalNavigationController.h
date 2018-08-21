/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIView;

@interface TSKModalNavigationController : UINavigationController {

	UIView* mTopSeparator;
	BOOL mShowTopSeparator;
	BOOL mIsFullscreenViewController;

}

@property (assign,nonatomic) BOOL showTopSeparator; 
@property (assign,nonatomic) BOOL isFullscreenViewController; 
-(void)dealloc;
-(long long)positionForBar:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithRootViewController:(id)arg1 ;
-(void)layoutViews;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)setIsFullscreenViewController:(BOOL)arg1 ;
-(void)p_statusBarWillChange:(id)arg1 ;
-(BOOL)showTopSeparator;
-(BOOL)isFullscreenViewController;
@end
