/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager;

@interface _DECBackupHelper : NSObject {

	NSFileManager* _fm;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)canBackup;
-(BOOL)backupNewerThanCurrentState;
-(BOOL)markRestoreAsNotDone;
-(BOOL)finishBackup;
-(void)fixupDataProtection;
-(BOOL)canRestore;
-(BOOL)restoredAlready;
-(BOOL)restoreStart;
-(BOOL)restoreDone;
-(id)backupPathForExpert:(id)arg1 ;
-(id)restorePathForExpert:(id)arg1 ;
-(BOOL)createBackupDirectoriesIfMissing;
-(BOOL)probePathAt:(id)arg1 ;
-(id)_currentBackupVersionPath;
-(BOOL)markVersionOfBackupDirectoryAsCurrent;
-(BOOL)isClassCLocked;
@end
