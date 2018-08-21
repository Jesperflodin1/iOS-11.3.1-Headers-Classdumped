/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@class HMHome, _UIAsyncInvocation, HMAddUserRemoteViewController;

@interface HMAddUserViewController : UIViewController <HMUserManagementRemoteHost> {

	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMAddUserRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                      //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                      //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                      //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMAddUserRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(HMAddUserRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(HMAddUserRemoteViewController *)arg1 ;
-(void)_requestRemoteViewController;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(void)presentWhenLoaded;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)_finishSetupWithError:(id)arg1 ;
-(id)initWithHome:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)setLoadHandler:(id)arg1 ;
-(id)loadHandler;
@end

