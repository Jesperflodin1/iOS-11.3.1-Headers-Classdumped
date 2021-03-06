/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDataSource.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSHashTable, NSXPCConnection, NSString;

@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource> {

	BOOL _hasCallHostLaunched;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSMutableDictionary* _mutableCallUUIDToCallMap;
	NSHashTable* _delegates;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;                //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableCallUUIDToCallMap;              //@synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int notifyToken;                                             //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic) BOOL hasCallHostLaunched;                                    //@synthesize hasCallHostLaunched=_hasCallHostLaunched - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * callUUIDToCallMap; 
+(id)sharedXPCClientSemaphore;
+(id)sharedXPCClient;
+(void)releaseSharedXPCClient;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(id)_init;
-(void)_invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(NSDictionary *)callUUIDToCallMap;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(oneway void)removeCall:(id)arg1 ;
-(void)requestTransaction:(id)arg1 forExtensionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHasCallHostLaunched:(BOOL)arg1 ;
-(void)_requestCalls;
-(NSMutableDictionary *)mutableCallUUIDToCallMap;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)_removeCall:(id)arg1 ;
-(BOOL)hasCallHostLaunched;
-(void)_addOrUpdateCall:(id)arg1 ;
-(void)_markAllCallsAsEnded;
-(void)setMutableCallUUIDToCallMap:(NSMutableDictionary *)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(int)notifyToken;
-(void)setNotifyToken:(int)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
@end

