/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSYSyncCoordinatorDelegate <NSObject>
@optional
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
-(void)supportsMigrationSync;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;

@end

