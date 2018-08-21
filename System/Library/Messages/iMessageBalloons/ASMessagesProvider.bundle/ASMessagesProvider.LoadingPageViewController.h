/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AppStoreKit/AppStoreKit.LoadingPagePresenterView.h>
#import <ASMessagesProvider/ASMessagesProvider.FlowPreviewingViewController.h>

@interface ASMessagesProvider.LoadingPageViewController : UIViewController <AppStoreKit.LoadingPagePresenterView, ASMessagesProvider.FlowPreviewingViewController> {

	 presenter;
	 contentViewController;
	 overlayView;
	 startedAsFlowPreview;

}

@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (assign,nonatomic) BOOL startedAsFlowPreview; 
-(void)setStartedAsFlowPreview:(BOOL)arg1 ;
-(void)hideLoading;
-(void)showWithUpdateError:(id)arg1 ;
-(void)performWithAction:(id)arg1 sender:(id)arg2 ;
-(BOOL)startedAsFlowPreview;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)showLoading;
@end

