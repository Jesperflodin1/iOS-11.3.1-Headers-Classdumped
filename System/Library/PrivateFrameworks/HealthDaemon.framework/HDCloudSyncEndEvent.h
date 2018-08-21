/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncEvent.h>
#import <libobjc.A.dylib/HDAnalyticSubmissionEvent.h>

@class NSNumber, NSError, NSString;

@interface HDCloudSyncEndEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent> {

	double _duration;
	long long _result;
	NSNumber* _countSinceLastSuccess;
	NSNumber* _timeIntervalSinceLastSuccess;
	NSError* _error;
	NSError* _underlyingError;

}

@property (nonatomic,readonly) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long result;                                          //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * countSinceLastSuccess;                     //@synthesize countSinceLastSuccess=_countSinceLastSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeIntervalSinceLastSuccess;              //@synthesize timeIntervalSinceLastSuccess=_timeIntervalSinceLastSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSError * underlyingError;                            //@synthesize underlyingError=_underlyingError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_underlyingErrorForError:(id)arg1 ;
+(id)endEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 startTime:(id)arg4 result:(long long)arg5 error:(id)arg6 ;
+(id)endEventForStartEvent:(id)arg1 result:(long long)arg2 error:(id)arg3 ;
-(NSString *)description;
-(double)duration;
-(long long)result;
-(NSError *)error;
-(NSNumber *)countSinceLastSuccess;
-(NSNumber *)timeIntervalSinceLastSuccess;
-(id)initWithProfile:(id)arg1 build:(id)arg2 internal:(BOOL)arg3 operation:(long long)arg4 reason:(long long)arg5 options:(unsigned long long)arg6 type:(long long)arg7 syncCirclePrefix:(id)arg8 containerID:(id)arg9 syncID:(id)arg10 operationID:(id)arg11 startTime:(id)arg12 result:(long long)arg13 error:(id)arg14 ;
-(NSError *)underlyingError;
@end

