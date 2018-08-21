/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ENGroupContextDataSource;
@class NSObject, ENAccountIdentity, NSMutableArray, NSArray;

@interface ENGroupContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	ENAccountIdentity* _accountIdentity;
	NSMutableArray* _middlewares;
	id<ENGroupContextDataSource> _dataSource;
	NSArray* _allMiddlewares;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) ENAccountIdentity * accountIdentity;                  //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,retain) NSMutableArray * middlewares;                         //@synthesize middlewares=_middlewares - In the implementation block
@property (nonatomic,retain) id<ENGroupContextDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSArray * allMiddlewares;                           //@synthesize allMiddlewares=_allMiddlewares - In the implementation block
+(id)_errorWithNotFoundItems:(id)arg1 ;
+(id)_missingItemsInNotFoundError:(id)arg1 remainingErrors:(id*)arg2 ;
-(void)setDataSource:(id<ENGroupContextDataSource>)arg1 ;
-(id<ENGroupContextDataSource>)dataSource;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_participantsForCypher:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_qUpsertGroupWithParticipants:(id)arg1 previousGroup:(id)arg2 sharedApplicationData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_qCacheMiddlewares;
-(void)_cacheGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)middlewares;
-(void)_qDidCreateGroup:(id)arg1 ;
-(void)_qDidCacheGroup:(id)arg1 ;
-(void)_qDidUpdateGroup:(id)arg1 withGroup:(id)arg2 ;
-(void)_qDidReceiveDecryptionFailureForGroup:(id)arg1 ;
-(void)_qDidReceiveRegistrationIdentityUpdate;
-(void)_qCacheGroup:(id)arg1 toMiddlewares:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_qCacheMiddlewaresContainedInCost:(long long)arg1 ;
-(void)_qFetchDataSourceGroupWithGroupID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_qFetchCachedGroupWithGroupID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_middlwareConformingToProtocol:(id)arg1 ;
-(id)_qObserverMiddlewares;
-(NSArray *)allMiddlewares;
-(void)_didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAllLocalKnownGroups:(/*^block*/id)arg1 ;
-(void)_dropLocalCache:(/*^block*/id)arg1 ;
-(void)_dropLocalCacheForGroupID:(id)arg1 compeltion:(/*^block*/id)arg2 ;
-(void)_noteDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_noteRegistrationIdentityUpdate;
-(void)setMiddlewares:(NSMutableArray *)arg1 ;
-(ENAccountIdentity *)accountIdentity;
-(void)_publicDataRepresentationForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_groupFromPublicDataRepresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchGroupWithGroupID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccountIdentity:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 ;
-(void)appendMiddleware:(id)arg1 ;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
-(void)cacheIncomingGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchGroupWithGroupID:(id)arg1 skipCache:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeMiddleware:(id)arg1 ;
-(void)fetchLatestGroupWithStableID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createGroupWithParticipants:(id)arg1 sharedApplicationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateGroup:(id)arg1 withParticipants:(id)arg2 sharedApplicationData:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

