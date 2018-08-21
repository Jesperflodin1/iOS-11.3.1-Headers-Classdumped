/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDCloudSyncServerInterface.h>

@class NSString;

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remote_createCloudShareWithRecipient:(id)arg1 sampleTypes:(id)arg2 maxSampleAge:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)remote_forceCloudResetWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_fetchCloudDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(id)retmote_fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_waitOnHealthCloudSyncWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

