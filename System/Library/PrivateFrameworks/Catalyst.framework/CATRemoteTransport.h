/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/Catalyst-Structs.h>
#import <Catalyst/CATTransport.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@protocol CATRemoteTransportDelegate;
@class CATRemoteConnection, NSMutableDictionary, NSString;

@interface CATRemoteTransport : CATTransport <CATRemoteConnectionDelegate> {

	CATRemoteConnection* mConnection;
	NSMutableDictionary* mOperationByUUID;
	BOOL mConnectionHasOpened;
	id<CATRemoteTransportDelegate> _remoteTransportDelegate;

}

@property (assign,nonatomic,__weak) id<CATRemoteTransportDelegate> remoteTransportDelegate;              //@synthesize remoteTransportDelegate=_remoteTransportDelegate - In the implementation block
@property (nonatomic,readonly) SecTrustRef peerTrust; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)createRemoteTransportPairWithTransport:(id*)arg1 andTransport:(id*)arg2 ;
-(void)suspendConnection;
-(void)resumeConnection;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidClose:(id)arg1 ;
-(id<CATRemoteTransportDelegate>)remoteTransportDelegate;
-(void)invalidateConnection;
-(id)operationToSendMessage:(id)arg1 ;
-(void)remoteTransportSendMessageOperation:(id)arg1 sendData:(id)arg2 ;
-(void)connectionWillSecure:(id)arg1 ;
-(void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2 ;
-(void)connectionDidSecure:(id)arg1 ;
-(void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg1 didInterruptWithError:(id)arg2 ;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)setRemoteTransportDelegate:(id<CATRemoteTransportDelegate>)arg1 ;
-(SecTrustRef)peerTrust;
@end

