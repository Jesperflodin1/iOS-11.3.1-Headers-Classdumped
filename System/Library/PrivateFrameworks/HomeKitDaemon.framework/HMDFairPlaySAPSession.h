/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol HMDFairPlaySAPSessionDelegate, OS_dispatch_queue;
@class NSObject, NSUUID;

@interface HMDFairPlaySAPSession : HMFObject {

	unsigned long long _state;
	id<HMDFairPlaySAPSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSUUID* _sessionIdentifier;
	FPSAPContextOpaque_Ref _session;
	NSObject*<OS_dispatch_queue> _clientQueue;
	FairPlayHWInfo_ _hardwareInfo;

}

@property (nonatomic,readonly) FPSAPContextOpaque_Ref session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FairPlayHWInfo_ hardwareInfo;                            //@synthesize hardwareInfo=_hardwareInfo - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (__weak,readonly) id<HMDFairPlaySAPSessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionIdentifier;                              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(id<HMDFairPlaySAPSessionDelegate>)delegate;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSUUID *)sessionIdentifier;
-(void)close;
-(FPSAPContextOpaque_Ref)session;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_closeWithError:(id)arg1 ;
-(void)_teardown;
-(void)_setupSAPSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleServerCertificate:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleServerSAPExchangeData:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)openWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signatureForData:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)verifySignedData:(id)arg1 signature:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(FairPlayHWInfo_)hardwareInfo;
@end

