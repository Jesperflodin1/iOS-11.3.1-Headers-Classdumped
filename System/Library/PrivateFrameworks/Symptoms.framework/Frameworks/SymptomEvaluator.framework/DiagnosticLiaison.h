/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSCrossDeviceTransportEndpoint.h>

@protocol OS_dispatch_source, DiagnosticLiaisonDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface DiagnosticLiaison : NSObject <IDSCrossDeviceTransportEndpoint> {

	BOOL isIDSRegistered;
	NSXPCConnection* _connection;
	BOOL _processRemoteEvents;
	NSObject*<OS_dispatch_source> _homekitRelayTimer;
	BOOL _homekitRelayTimedOut;
	NSObject*<OS_dispatch_source> _homekitOwnerRelayTimer;
	BOOL _homekitOwnerRelayTimedOut;
	id<DiagnosticLiaisonDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (copy) id invalidationHandler;                                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (copy) id interruptionHandler;                                                 //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<DiagnosticLiaisonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id<DiagnosticLiaisonDelegate>)delegate;
-(void)setDelegate:(id<DiagnosticLiaisonDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setupDiagsXPCInterface;
-(void)remoteToggleAutoBugCaptureConsent;
-(id)remoteCasePayloadForIDSTransport:(id)arg1 groupID:(id)arg2 ;
-(id)caseSignatureForRemoteSignature:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)abcPayloadForIDSTransport;
-(void)processPayloadFromIDSTransport:(id)arg1 incomingTime:(id)arg2 ;
-(id)basicSignatureFrom:(id)arg1 ;
-(void)processPayloadVersionOneFromIDSTransport:(id)arg1 incomingTime:(id)arg2 ;
-(void)processPayloadVersionTwoFromIDSTransport:(id)arg1 incomingTime:(id)arg2 ;
-(void)startRemotelyTriggeredSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 events:(id)arg3 ;
-(void)messageReceivedFromIDS:(id)arg1 ;
-(void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)messageWithIdentifierHasBeenDelivered:(id)arg1 ;
-(void)registerTransports;
-(void)unregisterTransports;
-(void)remotelyTriggerSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 event:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)remotelyTriggerSessionWithSignature:(id)arg1 forDestinations:(id)arg2 groupIdentifier:(id)arg3 validFor:(double)arg4 reply:(/*^block*/id)arg5 ;
@end
