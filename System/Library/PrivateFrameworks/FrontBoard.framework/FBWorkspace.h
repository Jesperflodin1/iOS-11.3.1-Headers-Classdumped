/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBWorkspaceServerDelegate.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@protocol OS_dispatch_queue;
@class BSZeroingWeakReference, FBWorkspaceServer, NSMapTable, NSMutableSet, NSObject, FBSceneClientProviderInvalidationAction, FBProcess, BSAuditToken, NSString;

@interface FBWorkspace : NSObject <FBWorkspaceServerDelegate, FBSceneClientProvider> {

	BSZeroingWeakReference* _zeroingWeakDelegate;
	BSZeroingWeakReference* _zeroingWeakProcess;
	FBWorkspaceServer* _server;
	NSMapTable* _hostToClientMap;
	NSMutableSet* _invalidatingScenes;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	BOOL _willInvalidate;
	BOOL _invalidated;

}

@property (assign,nonatomic) id<FBWorkspaceDelegate> delegate; 
@property (nonatomic,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) BSAuditToken * auditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBProcess *)process;
-(id<FBWorkspaceDelegate>)delegate;
-(void)setDelegate:(id<FBWorkspaceDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)sendActions:(id)arg1 ;
-(id)_queue;
-(BSAuditToken *)auditToken;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(id)_server;
-(Class)_serverClass;
-(void)_queue_enumerateScenes:(/*^block*/id)arg1 ;
-(void)_queue_fireInvalidationAction;
-(Class)_sceneClassForSpecification:(id)arg1 ;
-(id)_createSceneClientWithIdentifier:(id)arg1 specification:(id)arg2 ;
-(void)_invalidateSceneClientWithIdentifier:(id)arg1 ;
-(void)server:(id)arg1 handleConnectEvent:(id)arg2 ;
-(void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3 ;
-(void)_queue_willInvalidateAllScenes;
-(void)_queue_invalidateAllScenes;
-(void)_queue_sceneDidInvalidate:(id)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
@end

