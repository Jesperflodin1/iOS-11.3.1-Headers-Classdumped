/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/_HKDynamicAchievementDefinitionLoading.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSMutableArray, HDKeyValueDomain, NSString;

@interface HDDynamicAchievementDefinitionDataStore : NSObject <HDDatabaseProtectedDataObserver, _HKDynamicAchievementDefinitionLoading> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _deferredReads;
	NSMutableArray* _deferredWrites;
	HDKeyValueDomain* _identifierToDataDomain;

}

@property (nonatomic,retain) HDKeyValueDomain * identifierToDataDomain;              //@synthesize identifierToDataDomain=_identifierToDataDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_keyValueStoreDidSyncNotification:(id)arg1 ;
-(HDKeyValueDomain *)identifierToDataDomain;
-(void)_postDefinitionsChangedExternally;
-(void)_queue_writeDeferringIfDataIsProtected:(/*^block*/id)arg1 ;
-(void)fetchDynamicDefinitionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_flushDeferredRequests;
-(void)addAchievementDefinition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAchievementDefinitionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIdentifierToDataDomain:(HDKeyValueDomain *)arg1 ;
@end

