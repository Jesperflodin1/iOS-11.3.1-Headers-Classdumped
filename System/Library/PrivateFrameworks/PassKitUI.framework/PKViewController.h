/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIView, UIImage, UIColor;

@interface PKViewController : UIViewController {

	UIView* _navigationBarBackgroundView;
	UIImage* _emptyImage;
	BOOL _navigationBarPrepared;
	double _navigationBarShadowAlpha;
	BOOL _navigationBarWasTranslucent;
	UIColor* _navigationBarTintColor;
	UIColor* _navigationBarBackgroundColor;
	UIImage* _navigationBarBackgroundImage;
	UIColor* _navigationBarBleedColor;

}

@property (nonatomic,retain) UIColor * navigationBarBleedColor;              //@synthesize navigationBarBleedColor=_navigationBarBleedColor - In the implementation block
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNavigationBarBleedColor:(UIColor *)arg1 ;
-(void)_updateNavigationBarBleedView;
-(void)_prepareNavigationBarForBackground;
-(void)_restoreNavigationBar;
-(UIColor *)navigationBarBleedColor;
@end
