/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, BBDataProviderConnection, HMDBulletinProvider, HMDHomeManager, NSMutableDictionary;

@interface HMDBulletinBoard : HMFObject <NSSecureCoding> {

	BOOL _enabled;
	NSArray* _categories;
	NSObject*<OS_dispatch_queue> _workQueue;
	BBDataProviderConnection* _dataProviderConnection;
	HMDBulletinProvider* _bulletinProvider;
	HMDHomeManager* _homeManager;
	NSMutableDictionary* _characteristicTuples;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) BBDataProviderConnection * dataProviderConnection;              //@synthesize dataProviderConnection=_dataProviderConnection - In the implementation block
@property (nonatomic,retain) HMDBulletinProvider * bulletinProvider;                         //@synthesize bulletinProvider=_bulletinProvider - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                            //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * characteristicTuples;                     //@synthesize characteristicTuples=_characteristicTuples - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                                         //@synthesize categories=_categories - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedBulletinBoard;
+(BOOL)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
+(BOOL)isCriticalNonSecureServiceType:(id)arg1 ;
+(id)bulletinSupportedCharacteristicsForService:(id)arg1 ;
+(void)archive;
+(id)unarchive;
+(void)initializeMapping;
+(id)_supportedSecureServices;
+(id)_supportedNonSecureServices;
+(BOOL)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
+(id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2 ;
+(BOOL)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSArray *)categories;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)configureHomeManager:(id)arg1 ;
-(void)refreshHomeBadgeNumber;
-(void)removeBulletinsForAccessory:(id)arg1 ;
-(id)updateBulletinForFirmwareUpdateInHome:(id)arg1 ;
-(void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeBulletinsForService:(id)arg1 ;
-(void)reloadDefaultSectionInfo;
-(void)removeBulletinWithRecordID:(id)arg1 ;
-(BBDataProviderConnection *)dataProviderConnection;
-(void)setDataProviderConnection:(BBDataProviderConnection *)arg1 ;
-(HMDBulletinProvider *)bulletinProvider;
-(void)setBulletinProvider:(HMDBulletinProvider *)arg1 ;
-(id)_insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 ;
-(void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(BOOL)arg3 ;
-(BOOL)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1 ;
-(BOOL)_hasDuplicateBulletinForCharacteristic:(id)arg1 ;
-(id)_insertBulletinWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(NSDictionary*)arg7 actionContext:(NSDictionary*)arg8 ;
-(id)_bulletinWithRecordID:(id)arg1 ;
-(void)_updateBulletin:(id)arg1 ;
-(void)_removeBulletinsUsingPredicate:(id)arg1 ;
-(NSMutableDictionary *)characteristicTuples;
-(void)refreshHomeConfiguration;
-(void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)insertBulletinForIncomingInvitation:(id)arg1 ;
-(id)insertBulletinForSecureTrigger:(id)arg1 ;
-(void)removeBulletinsForHome:(id)arg1 ;
-(void)removeBulletinsForTrigger:(id)arg1 ;
-(void)removeAllBulletins;
-(id)_lookupBulletinForCharacteristic:(id)arg1 ;
-(BOOL)isTargetCharacteristic:(id)arg1 matchCurrentCharacteristic:(id)arg2 ;
-(void)setCharacteristicTuples:(NSMutableDictionary *)arg1 ;
@end

