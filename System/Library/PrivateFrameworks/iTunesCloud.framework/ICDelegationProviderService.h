/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSDelegationProviderServiceXPC.h>
#import <libobjc.A.dylib/ICDelegationProviderServiceSessionDelegate.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable, NSMutableSet, ICUserIdentityStore, NSXPCListener, NSNetServiceBrowser, NSOperationQueue, NSMutableDictionary, NSXPCConnection, ICRequestContext, NSString;

@interface ICDelegationProviderService : NSObject <ICSDelegationProviderServiceXPC, ICDelegationProviderServiceSessionDelegate, NSNetServiceBrowserDelegate, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMapTable* _activeServiceSessions;
	NSMutableSet* _connections;
	NSMapTable* _connectionToAssertions;
	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_source> _assertionTimeoutSource;
	NSMutableSet* _discoveredServices;
	ICUserIdentityStore* _identityStore;
	BOOL _isNetServiceBrowserSearching;
	BOOL _isSystemService;
	NSXPCListener* _listener;
	NSNetServiceBrowser* _netServiceBrowser;
	NSObject*<OS_dispatch_queue> _netServiceBrowserQueue;
	NSOperationQueue* _identityStoreOperationQueue;
	NSMutableDictionary* _supportedDelegationAccountUUIDToUserIdentity;
	NSXPCConnection* _xpcConnection;
	ICRequestContext* _requestContext;

}

@property (nonatomic,copy,readonly) ICRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(id)systemServiceWithRequestContext:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(id)_xpcConnection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)_updateSupportedDelegationAccountUUIDs;
-(void)_unregisterNotificationsForDelegationNetService:(id)arg1 ;
-(void)_updateBrowsingStatus;
-(void)delegationProviderServiceAddAssertion:(id)arg1 ;
-(void)_updateAssertionTimeouts;
-(void)delegationProviderServiceRemoveAssertion:(id)arg1 ;
-(void)_registerNotificationsForDelegationNetService:(id)arg1 ;
-(void)_updateDelegationForDiscoveredServices;
-(void)_netServiceDelegationAccountUUIDsDidChangeNotification:(id)arg1 ;
-(void)delegationProviderServiceSession:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startSystemXPCService;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(ICRequestContext *)requestContext;
-(void)_userIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)addAssertion:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
@end

