/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class NSObject, HDCloudSyncOperationConfiguration, HDCloudSyncFetchOperationResult, NSUUID, NSDate, NSProgress, NSString;

@interface HDCloudSyncDisableOperation : NSObject <NSProgressReporting> {

	NSObject*<OS_dispatch_queue> _queue;
	HDCloudSyncOperationConfiguration* _configuration;
	HDCloudSyncFetchOperationResult* _fetchResult;
	NSUUID* _operationIdentifier;
	NSDate* _startTime;
	BOOL _queue_hasStarted;
	/*^block*/id _completion;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 fetchResult:(id)arg2 ;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

