/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@protocol OS_dispatch_group;
@class HDFHIRResourceSchema, NSURL, NSData, NSError, NSObject, HDFHIRCredentialedSession;

@interface HDFHIRIngestionResourceFetchOperation : HDClinicalIngestionPerAccountOperation {

	long long _queryMode;
	HDFHIRResourceSchema* _resourceSchema;
	/*^block*/id _fetchResultsHandler;
	NSURL* _fullRequestURL;
	NSURL* _effectiveRequestURL;
	NSData* _fetchedData;
	NSError* _fetchError;
	NSObject*<OS_dispatch_group> _fetchGroup;
	HDFHIRCredentialedSession* _session;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> fetchGroup;              //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,readonly) HDFHIRCredentialedSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSURL * fullRequestURL;                                   //@synthesize fullRequestURL=_fullRequestURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * effectiveRequestURL;                     //@synthesize effectiveRequestURL=_effectiveRequestURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * fetchedData;                            //@synthesize fetchedData=_fetchedData - In the implementation block
@property (nonatomic,readonly) NSError * fetchError;                                 //@synthesize fetchError=_fetchError - In the implementation block
+(NSDictionary*)_schemaVariableBindingsWithLastFetchDate:(id)arg1 ;
+(id)FHIRDateStringFromDate:(id)arg1 ;
+(id)FHIRDateTimeStringFromDate:(id)arg1 ;
-(NSURL *)fullRequestURL;
-(void)_performFetchWithURL:(id)arg1 retryCount:(long long)arg2 ;
-(void)_accumulateResponseTimeMetricWithTaskState:(id)arg1 ;
-(void)_handleTaskCompletedWithData:(id)arg1 ;
-(void)_accumulateRequestFailureMetricWithTaskState:(id)arg1 ;
-(void)_handleTaskError:(id)arg1 retryCount:(long long)arg2 ;
-(NSDictionary*)_schemaVariableBindings;
-(NSData *)fetchedData;
-(NSURL *)effectiveRequestURL;
-(id)initWithTask:(id)arg1 account:(id)arg2 nextOperation:(id)arg3 session:(id)arg4 queryMode:(long long)arg5 resourceSchema:(id)arg6 fetchResultsHandler:(/*^block*/id)arg7 ;
-(void)setFullRequestURL:(NSURL *)arg1 ;
-(void)main;
-(HDFHIRCredentialedSession *)session;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(NSError *)fetchError;
@end

