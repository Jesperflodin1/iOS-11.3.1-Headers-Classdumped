/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;
@class NSObject, _KSRequestThrottle, CKDatabase, CKRecordZone, CKContainer, NSString;

@interface _KSCloudKitManager : NSObject {

	NSObject*<OS_dispatch_queue> _ckWorkQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	_KSRequestThrottle* _accountChangeThrottle;
	_KSRequestThrottle* _fetchZoneThrottle;
	BOOL _recordZoneOperationInProgress;
	BOOL _subscriptionOperationInProgress;
	CKDatabase* _cloudKitDatabase;
	CKRecordZone* _recordZone;
	id<_KSCloudKitManagerDelegate> _delegate;
	CKContainer* _cloudKitContainer;
	CKDatabase* _publicDatabase;
	NSString* _recordZoneKey;
	NSString* _subscriptionKey;
	NSString* _lastKnownUserKey;

}

@property (nonatomic,retain) CKContainer * cloudKitContainer;                             //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (nonatomic,retain) CKDatabase * publicDatabase;                                 //@synthesize publicDatabase=_publicDatabase - In the implementation block
@property (nonatomic,readonly) NSString * recordZoneKey;                                  //@synthesize recordZoneKey=_recordZoneKey - In the implementation block
@property (nonatomic,readonly) NSString * subscriptionKey;                                //@synthesize subscriptionKey=_subscriptionKey - In the implementation block
@property (nonatomic,readonly) NSString * lastKnownUserKey;                               //@synthesize lastKnownUserKey=_lastKnownUserKey - In the implementation block
@property (assign,nonatomic) BOOL recordZoneOperationInProgress;                          //@synthesize recordZoneOperationInProgress=_recordZoneOperationInProgress - In the implementation block
@property (assign,nonatomic) BOOL subscriptionOperationInProgress;                        //@synthesize subscriptionOperationInProgress=_subscriptionOperationInProgress - In the implementation block
@property (nonatomic,retain) CKDatabase * cloudKitDatabase;                               //@synthesize cloudKitDatabase=_cloudKitDatabase - In the implementation block
@property (nonatomic,retain) CKRecordZone * recordZone;                                   //@synthesize recordZone=_recordZone - In the implementation block
@property (assign,nonatomic,__weak) id<_KSCloudKitManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)prepareContainerForID:(id)arg1 ;
-(id)init;
-(id<_KSCloudKitManagerDelegate>)delegate;
-(void)setDelegate:(id<_KSCloudKitManagerDelegate>)arg1 ;
-(void)dealloc;
-(CKContainer *)cloudKitContainer;
-(void)setCloudKitContainer:(CKContainer *)arg1 ;
-(id)userIdentity;
-(BOOL)isAccountAvailable;
-(id)initWithRecordZoneName:(id)arg1 ;
-(void)accountStatusDidChange:(id)arg1 ;
-(BOOL)needsDeviceToDevice;
-(void)identityUpdated:(id)arg1 ;
-(void)setupAccountDidChange:(BOOL)arg1 ;
-(id)initWithContainer:(id)arg1 recordZoneName:(id)arg2 ;
-(void)setupSubscription;
-(void)setupRecordZoneWithCompletionHandler:(/*^block*/id)arg1 ignoreDefaults:(BOOL)arg2 ;
-(void)queryAccountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)lastKnownUserKey;
-(NSString *)recordZoneKey;
-(NSString *)subscriptionKey;
-(void)_checkAccountStatusWithCompletionHandler:(/*^block*/id)arg1 withRetryCount:(unsigned long long)arg2 ;
-(void)setRecordZoneOperationInProgress:(BOOL)arg1 ;
-(BOOL)recordZoneOperationInProgress;
-(void)_ckSaveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetZoneWithDelete:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_ckFetchRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_ckDeleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 encryptedFields:(id)arg5 ;
-(id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4 ;
-(BOOL)subscriptionOperationInProgress;
-(void)setSubscriptionOperationInProgress:(BOOL)arg1 ;
-(CKDatabase *)cloudKitDatabase;
-(void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 retryCount:(unsigned long long)arg5 ;
-(id)resolveConflicts:(id)arg1 ;
-(void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)copyFieldsFromRecord:(id)arg1 toRecord:(id)arg2 ;
-(void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(/*^block*/id)arg3 retryCount:(unsigned long long)arg4 ;
-(void)_submitFetchRecordsOperation:(id)arg1 withPriority:(unsigned long long)arg2 changeToken:(id)arg3 completionHandler:(/*^block*/id)arg4 retryCount:(unsigned long long)arg5 ;
-(CKDatabase *)publicDatabase;
-(long long)defaultQualityOfService;
-(void)_inconvenientOperation:(id)arg1 ;
-(id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 ;
-(id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 ;
-(id)recordIDForName:(id)arg1 ;
-(void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudKitDatabase:(CKDatabase *)arg1 ;
-(void)setPublicDatabase:(CKDatabase *)arg1 ;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
-(CKRecordZone *)recordZone;
@end

