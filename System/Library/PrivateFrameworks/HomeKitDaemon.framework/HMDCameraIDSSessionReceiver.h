/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamReceiverDestinationProtocol.h>

@protocol HMDCameraIDSSessionReceiverDelegate, OS_dispatch_queue;
@class NSString, NSObject, IDSSession;

@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol> {

	id<HMDCameraIDSSessionReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDCameraIDSSessionReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                           //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IDSSession * session; 
@property (nonatomic,readonly) NSString * remoteDestination; 
+(id)logCategory;
-(id<HMDCameraIDSSessionReceiverDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraIDSSessionReceiverDelegate>)arg1 ;
-(void)dealloc;
-(IDSSession *)session;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5 ;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)setupReceiver:(id)arg1 ;
-(NSString *)remoteDestination;
-(void)_callSessionEnded:(id)arg1 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)_receivedIDSSession:(id)arg1 ;
-(void)_callSessionSetup:(id)arg1 ;
@end

