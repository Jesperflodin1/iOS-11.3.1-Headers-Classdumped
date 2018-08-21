/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>

@protocol OS_dispatch_queue, _KSTextReplacementStoreProtocol, _KSMigrationDelegate;
@class NSObject, _KSTextReplacementCKStore, _KSTextReplacementLegacyStore, NSString;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol> {

	NSObject*<OS_dispatch_queue> _migrationQueue;
	BOOL _didMigrateForCurrentAccount;
	BOOL _pendingMigration;
	BOOL _deviceDidMigrateOnCloud;
	BOOL _didCheckMigrationOnCloud;
	_KSTextReplacementCKStore* _ckStore;
	_KSTextReplacementLegacyStore* _legacyStore;
	NSObject*<_KSTextReplacementStoreProtocol> _textReplacementStore;
	NSString* _directoryPath;
	id<_KSMigrationDelegate> _delegate;

}

@property (nonatomic,retain) _KSTextReplacementCKStore * ckStore;                                          //@synthesize ckStore=_ckStore - In the implementation block
@property (nonatomic,retain) _KSTextReplacementLegacyStore * legacyStore;                                  //@synthesize legacyStore=_legacyStore - In the implementation block
@property (nonatomic,retain) NSObject*<_KSTextReplacementStoreProtocol> textReplacementStore;              //@synthesize textReplacementStore=_textReplacementStore - In the implementation block
@property (nonatomic,copy) NSString * directoryPath;                                                       //@synthesize directoryPath=_directoryPath - In the implementation block
@property (assign,nonatomic) BOOL didMigrateForCurrentAccount;                                             //@synthesize didMigrateForCurrentAccount=_didMigrateForCurrentAccount - In the implementation block
@property (assign,nonatomic) BOOL pendingMigration;                                                        //@synthesize pendingMigration=_pendingMigration - In the implementation block
@property (assign,nonatomic) BOOL deviceDidMigrateOnCloud;                                                 //@synthesize deviceDidMigrateOnCloud=_deviceDidMigrateOnCloud - In the implementation block
@property (assign,nonatomic) BOOL didCheckMigrationOnCloud;                                                //@synthesize didCheckMigrationOnCloud=_didCheckMigrationOnCloud - In the implementation block
@property (assign,nonatomic,__weak) id<_KSMigrationDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(BOOL)arg3 forceCloudKitSync:(BOOL)arg4 ;
-(id<_KSMigrationDelegate>)delegate;
-(void)setDelegate:(id<_KSMigrationDelegate>)arg1 ;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)accountDidChange:(id)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ignoreMigrationBatchCheck:(BOOL)arg2 forceCloudKitSync:(BOOL)arg3 ;
-(void)setLegacyStore:(_KSTextReplacementLegacyStore *)arg1 ;
-(_KSTextReplacementLegacyStore *)legacyStore;
-(void)setTextReplacementStore:(NSObject*<_KSTextReplacementStoreProtocol>)arg1 ;
-(BOOL)shouldMigrateToCloudKit;
-(BOOL)deviceDidMigrate;
-(void)pushAllLocalRecordsOnceIfNeeded;
-(void)notifyTextReplacementDidChange;
-(void)checkForMigration;
-(_KSTextReplacementCKStore *)ckStore;
-(void)resetMigrationState;
-(void)setDidMigrateForCurrentAccount:(BOOL)arg1 ;
-(void)setDeviceDidMigrateOnCloud:(BOOL)arg1 ;
-(void)setDidCheckMigrationOnCloud:(BOOL)arg1 ;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)pendingMigration;
-(void)setPendingMigration:(BOOL)arg1 ;
-(void)migrateLocallyCheckCompatibility:(BOOL)arg1 ;
-(BOOL)didCheckMigrationOnCloud;
-(BOOL)deviceDidMigrateOnCloud;
-(void)_migrateDevice;
-(NSObject*<_KSTextReplacementStoreProtocol>)textReplacementStore;
-(void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned long long)arg2 ;
-(void)respondToMigrationCompletion;
-(double)minimumUptimeRemaining;
-(void)recordSyncStatus;
-(void)respondToMigrationCompatibilityChange:(id)arg1 ;
-(void)pullMigrationSettings;
-(void)migrateLegacyStore;
-(void)setCkStore:(_KSTextReplacementCKStore *)arg1 ;
-(BOOL)didMigrateForCurrentAccount;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(NSString *)directoryPath;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
@end

