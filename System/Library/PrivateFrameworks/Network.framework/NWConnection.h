/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NWPath, NWConcrete_nw_connection, NWEndpoint, NWParameters;

@interface NWConnection : NSObject {

	BOOL _internalIsViable;
	BOOL _internalHasBetterPath;
	long long _internalConnectionState;
	NSError* _internalError;
	NWPath* _internalPath;
	NWConcrete_nw_connection* _internalConnection;

}

@property (assign) long long internalConnectionState;                                    //@synthesize internalConnectionState=_internalConnectionState - In the implementation block
@property (assign) BOOL internalIsViable;                                                //@synthesize internalIsViable=_internalIsViable - In the implementation block
@property (assign) BOOL internalHasBetterPath;                                           //@synthesize internalHasBetterPath=_internalHasBetterPath - In the implementation block
@property (retain) NSError * internalError;                                              //@synthesize internalError=_internalError - In the implementation block
@property (retain) NWPath * internalPath;                                                //@synthesize internalPath=_internalPath - In the implementation block
@property (nonatomic,readonly) unsigned tlsConnectionTime; 
@property (nonatomic,retain) NWConcrete_nw_connection * internalConnection;              //@synthesize internalConnection=_internalConnection - In the implementation block
@property (nonatomic,readonly) NWPath * currentPath; 
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,readonly) NWEndpoint * connectedLocalEndpoint; 
@property (nonatomic,readonly) NWEndpoint * connectedRemoteEndpoint; 
@property (nonatomic,readonly) NSError * error; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (nonatomic,readonly) BOOL hasBetterPath; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)connectionWithEndpoint:(id)arg1 parameters:(id)arg2 ;
+(id)connectionWithConnectedSocket:(int)arg1 ;
+(id)connectionWithInternalConnection:(id)arg1 ;
-(void)cancel;
-(NWParameters *)parameters;
-(void)start;
-(NWPath *)currentPath;
-(NWEndpoint *)endpoint;
-(BOOL)isViable;
-(BOOL)hasBetterPath;
-(NWConcrete_nw_connection *)internalConnection;
-(void)setInternalConnection:(NWConcrete_nw_connection *)arg1 ;
-(id)initWithInternalConnection:(id)arg1 ;
-(id)initWithConnectedSocket:(int)arg1 ;
-(int)getConnectedSocket;
-(BOOL)startTLSWithSessionID:(id)arg1 ;
-(void)forceCancel;
-(void)cancelCurrentEndpoint;
-(unsigned)tlsConnectionTime;
-(NWEndpoint *)connectedLocalEndpoint;
-(NWEndpoint *)connectedRemoteEndpoint;
-(id)copyError;
-(id)copyCurrentPath;
-(void)dumpTimestamps;
-(long long)internalConnectionState;
-(void)setInternalConnectionState:(long long)arg1 ;
-(BOOL)internalIsViable;
-(void)setInternalIsViable:(BOOL)arg1 ;
-(BOOL)internalHasBetterPath;
-(void)setInternalHasBetterPath:(BOOL)arg1 ;
-(NSError *)internalError;
-(void)setInternalError:(NSError *)arg1 ;
-(NWPath *)internalPath;
-(void)setInternalPath:(NWPath *)arg1 ;
-(NSError *)error;
-(long long)connectionState;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
@end

