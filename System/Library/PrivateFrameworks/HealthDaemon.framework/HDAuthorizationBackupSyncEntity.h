/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDAuthorizationSyncEntity.h>

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity
+(id)syncEntityIdentifier;
+(BOOL)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)createCodableSourceAuthorizationWithSourceUUID:(id)arg1 syncSession:(id)arg2 ;
+(void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1 ;
+(id)_backupInfoWithSyncStore:(id)arg1 ;
+(void)_setBackupInfo:(id)arg1 ;
+(id)backupInfoUserDefaultsKey;
+(void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2 ;
+(id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1 ;
+(id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1 ;
+(void)resetAuthorizationBackupIdentifiers;
@end
