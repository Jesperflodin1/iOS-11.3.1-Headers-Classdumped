/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface HDFHIRRequestTaskEndState : NSObject <NSCopying> {

	NSURL* _requestedURL;
	long long _responseStatusCode;
	double _requestDuration;

}

@property (nonatomic,copy,readonly) NSURL * requestedURL;                 //@synthesize requestedURL=_requestedURL - In the implementation block
@property (nonatomic,readonly) long long responseStatusCode;              //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,readonly) double requestDuration;                    //@synthesize requestDuration=_requestDuration - In the implementation block
+(id)unitTestSuccessState;
-(id)initWithRequestedURL:(id)arg1 responseStatusCode:(long long)arg2 requestDuration:(double)arg3 ;
-(NSURL *)requestedURL;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)requestDuration;
-(long long)responseStatusCode;
@end

