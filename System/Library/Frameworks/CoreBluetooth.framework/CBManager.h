/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>
#import <libobjc.A.dylib/CBPairingAgentParentDelegate.h>

@class CBXpcConnection, CBPairingAgent, NSData, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {

	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	long long _state;
	NSData* _advertisingAddress;

}

@property (assign,nonatomic) long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) CBPairingAgent * sharedPairingAgent; 
@property (nonatomic,copy) NSData * advertisingAddress;                                 //@synthesize advertisingAddress=_advertisingAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3 ;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(BOOL)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)setAdvertisingAddress:(NSData *)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
-(void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2 ;
-(void)xpcConnectionIsInvalid;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)xpcConnectionDidReset;
-(void)handleStateUpdatedMsg:(id)arg1 ;
-(void)setConnectionTargetQueue:(id)arg1 ;
-(BOOL)sendDebugMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CBPairingAgent *)sharedPairingAgent;
-(NSData *)advertisingAddress;
-(id)initInternal;
@end
