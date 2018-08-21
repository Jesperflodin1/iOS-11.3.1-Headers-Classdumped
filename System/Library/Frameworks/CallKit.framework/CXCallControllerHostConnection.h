/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallControllerHostProtocol.h>
#import <libobjc.A.dylib/CXCallControllerVendorProtocol.h>

@protocol CXCallControllerHostConnectionDelegate, OS_dispatch_queue;
@class NSString, NSBundle, NSObject, NSXPCConnection, NSSet;

@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol> {

	BOOL _hasVoIPBackgroundMode;
	NSString* _applicationIdentifier;
	NSBundle* _bundle;
	id<CXCallControllerHostConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSXPCConnection* _connection;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                    //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL hasVoIPBackgroundMode;                                                  //@synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                                              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSBundle * bundle;                                                             //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                                                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) id<CXCallControllerVendorProtocol> remoteObjectProxy; 
@property (getter=isPermittedToUsePublicAPI,nonatomic,readonly) BOOL entitledForPublicAPI; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL entitledForPrivateAPI; 
@property (assign,nonatomic,__weak) id<CXCallControllerHostConnectionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CXCallControllerHostConnectionDelegate>)delegate;
-(void)setDelegate:(id<CXCallControllerHostConnectionDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id<CXCallControllerVendorProtocol>)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(oneway void)removeCall:(id)arg1 ;
-(id)initWithConnection:(id)arg1 serialQueue:(id)arg2 ;
-(BOOL)hasVoIPBackgroundMode;
-(void)setHasVoIPBackgroundMode:(BOOL)arg1 ;
-(oneway void)requestCalls:(/*^block*/id)arg1 ;
-(oneway void)requestTransaction:(id)arg1 forExtensionIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
@end
