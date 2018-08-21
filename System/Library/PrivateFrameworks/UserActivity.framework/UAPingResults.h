/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface UAPingResults : NSObject <NSSecureCoding> {

	NSMutableDictionary* _devices;
	NSMutableDictionary* _errorsMap;
	NSMutableDictionary* _resultsMap;
	double _pingAvg;

}

@property (retain) NSMutableDictionary * devices;                 //@synthesize devices=_devices - In the implementation block
@property (retain) NSMutableDictionary * errorsMap;               //@synthesize errorsMap=_errorsMap - In the implementation block
@property (retain) NSMutableDictionary * resultsMap;              //@synthesize resultsMap=_resultsMap - In the implementation block
@property (assign) double pingAvg;                                //@synthesize pingAvg=_pingAvg - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedFormatter;
-(id)init;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clear;
-(void)setDevices:(NSMutableDictionary *)arg1 ;
-(id)toDictionary;
-(id)errors;
-(NSMutableDictionary *)devices;
-(void)setErrorsMap:(NSMutableDictionary *)arg1 ;
-(void)setResultsMap:(NSMutableDictionary *)arg1 ;
-(void)setPingAvg:(double)arg1 ;
-(NSMutableDictionary *)errorsMap;
-(NSMutableDictionary *)resultsMap;
-(double)pingAvg;
-(void)addKeysForDevice:(id)arg1 ;
-(void)incrementResultForStatus:(long long)arg1 andDevice:(id)arg2 ;
-(long long)statusForDevice:(id)arg1 ;
-(id)statusStringForResultStatus:(long long)arg1 ;
-(id)dateDeviceLastSeen:(id)arg1 ;
-(id)resultCountsForDevice:(id)arg1 ;
-(id)seenDevices;
-(void)updateDevice:(id)arg1 withStatus:(long long)arg2 ;
-(void)updateDevice:(id)arg1 withError:(id)arg2 ;
-(double)averagePingTime;
-(void)updatePingAverageWithInterval:(double)arg1 ;
-(void)addDevice:(id)arg1 ;
@end
