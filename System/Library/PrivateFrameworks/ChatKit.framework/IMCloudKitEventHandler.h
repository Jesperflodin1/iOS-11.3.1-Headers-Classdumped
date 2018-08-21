/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMCloudKitEventHandler <NSObject>
@optional
-(void)cloudKitEventNotificationManager:(id)arg1 didDisableAllDevices:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 didChangeEnabled:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
-(void)cloudKitEventNotificationManager:(id)arg1 didFetchSyncStatistics:(id)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
-(void)cloudKitEventNotificationManager:(id)arg1 didPerformAdditionalStorageRequiredCheck:(BOOL)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(id)arg4 error:(id)arg5;

@end

