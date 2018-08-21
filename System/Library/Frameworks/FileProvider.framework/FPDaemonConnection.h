/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDDaemon, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface FPDaemonConnection : NSObject {

	NSXPCConnection*<FPDDaemon> _connectionQueueConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _getAttributeConnections;
	NSObject*<OS_dispatch_source> _getAttributeConnectionsIdleCleanupTimer;
	unsigned _user;

}

@property (nonatomic,retain) NSXPCConnection*<FPDDaemon> connectionQueueConnection;              //@synthesize connectionQueueConnection=_connectionQueueConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection*<FPDDaemon> connection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                       //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (assign,nonatomic) unsigned user;                                                      //@synthesize user=_user - In the implementation block
+(id)connectionForUser:(unsigned)arg1 ;
+(id)newXPCConnection;
+(id)sharedConnection;
+(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)fetchSupportedServicesForDocumentAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)wakeUpCompletionHandler:(/*^block*/id)arg1 ;
-(void)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(BOOL)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)providersCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConnectionQueueConnection:(NSXPCConnection*<FPDDaemon>)arg1 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchRemoteFileProviderWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(id)arg1 itemURL:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dumpStateTo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unobserveWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection*<FPDDaemon>)connectionQueueConnection;
-(NSXPCConnection*<FPDDaemon>)connection;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(unsigned)user;
-(void)setUser:(unsigned)arg1 ;
-(id)initWithUser:(unsigned)arg1 ;
@end

