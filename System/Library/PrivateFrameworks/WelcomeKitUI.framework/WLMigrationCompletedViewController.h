/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class UIButton;

@interface WLMigrationCompletedViewController : WLWelcomeGroupViewController {

	UIButton* _continueButton;
	UIButton* _continueView;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;              //@synthesize continueHandler=_continueHandler - In the implementation block
-(void)loadView;
-(void)_continueTapped:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
@end
