/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, CUMobileDeviceSession, NSObject, NSString, RPDevice, UIViewController;

@interface RPSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableArray* _messageSendQueue;
	BOOL _messagingReady;
	int _pairVerifyState;
	BOOL _secureReady;
	BOOL _mdEnabled;
	CUMobileDeviceSession* _mdSession;
	int _mdState;
	unsigned _securityFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	RPDevice* _peerDevice;
	UIViewController* _presentingViewController;
	NSString* _serviceType;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) RPDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) unsigned securityFlags;                                   //@synthesize securityFlags=_securityFlags - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id errorHandler;                                            //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                     //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                     //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
-(void)_sendMessage:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)_run;
-(UIViewController *)presentingViewController;
-(void)_cleanup;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)unpairWithCompletion:(/*^block*/id)arg1 ;
-(void)_unpairWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)pairSetupTryPIN:(id)arg1 ;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(id)promptForPINHandler;
-(void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(int)_runPairVerify;
-(void)pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairSetupTryPIN:(id)arg1 ;
-(void)_pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSecurityFlags:(unsigned)arg1 ;
-(void)requestSystemInfoWithCompletion:(/*^block*/id)arg1 ;
-(int)_runMobileDeviceStart;
-(void)_sendQueuedMessages;
-(unsigned)securityFlags;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(RPDevice *)peerDevice;
-(void)setPeerDevice:(RPDevice *)arg1 ;
@end

