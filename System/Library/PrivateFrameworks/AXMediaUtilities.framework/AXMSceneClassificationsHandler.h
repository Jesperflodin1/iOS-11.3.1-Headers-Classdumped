/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSDictionary;

@interface AXMSceneClassificationsHandler : NSObject {

	NSXPCConnection* _xpcConnection;
	NSDictionary* _cachedRequestContextDictionary;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                            //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedRequestContextDictionary;              //@synthesize cachedRequestContextDictionary=_cachedRequestContextDictionary - In the implementation block
+(id)sharedHandler;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)requestContextDictionary;
-(id)requestContextDictionaryWithOperationId:(BOOL)arg1 ;
-(void)setupXpcConnection;
-(void)configureXPCConnection;
-(NSDictionary *)cachedRequestContextDictionary;
-(void)setCachedRequestContextDictionary:(NSDictionary *)arg1 ;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)localizedLabelForSceneIdentifier:(unsigned)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

