/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSUUID;

@interface NWNetworkAgentRegistration : NSObject {

	int _registrationSocket;
	Class _networkAgentClass;
	NSObject*<NWNetworkAgent> _networkAgent;
	NSUUID* _registeredUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _readSource;

}

@property (assign) Class networkAgentClass;                                      //@synthesize networkAgentClass=_networkAgentClass - In the implementation block
@property (retain) NSObject*<NWNetworkAgent> networkAgent;                       //@synthesize networkAgent=_networkAgent - In the implementation block
@property (retain) NSUUID * registeredUUID;                                      //@synthesize registeredUUID=_registeredUUID - In the implementation block
@property (assign) int registrationSocket;                                       //@synthesize registrationSocket=_registrationSocket - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> readSource;                     //@synthesize readSource=_readSource - In the implementation block
@property (getter=isRegistered,nonatomic,readonly) BOOL registered; 
@property (assign,nonatomic) unsigned long long useCount; 
+(int)newRegistrationFileDescriptor;
+(BOOL)useNetworkAgent:(id)arg1 returnUseCount:(unsigned long long*)arg2 ;
+(BOOL)removeActiveAssertionFromNetworkAgent:(id)arg1 ;
+(BOOL)addActiveAssertionToNetworkAgent:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleMessageFromAgent;
-(BOOL)createReadSourceWithRegistrationSocket:(int)arg1 ;
-(BOOL)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2 ;
-(BOOL)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2 ;
-(BOOL)removeNetworkAgentFromInterfaceNamed:(id)arg1 ;
-(Class)networkAgentClass;
-(void)setNetworkAgentClass:(Class)arg1 ;
-(void)setNetworkAgent:(NSObject*<NWNetworkAgent>)arg1 ;
-(NSUUID *)registeredUUID;
-(void)setRegisteredUUID:(NSUUID *)arg1 ;
-(int)registrationSocket;
-(void)setRegistrationSocket:(int)arg1 ;
-(NSObject*<OS_dispatch_source>)readSource;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)dupRegistrationFileDescriptor;
-(BOOL)updateNetworkAgent:(id)arg1 ;
-(BOOL)assignNexusData:(id)arg1 toClient:(id)arg2 ;
-(id)initWithNetworkAgentClass:(Class)arg1 ;
-(BOOL)registerNetworkAgent:(id)arg1 ;
-(BOOL)addNetworkAgentToInterfaceNamed:(id)arg1 ;
-(BOOL)unregisterNetworkAgent;
-(unsigned long long)useCount;
-(void)setUseCount:(unsigned long long)arg1 ;
-(NSObject*<NWNetworkAgent>)networkAgent;
-(BOOL)isRegistered;
@end

