/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, NSDictionary, NSDate;

@interface _CDPerfMetric : NSObject {

	XSPerfCollection* _stats;
	NSString* _name;
	NSDictionary* _userInfo;

}

@property (readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (readonly) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSDate * lastUpdate; 
@property (readonly) double lastElapsedTime; 
@property (readonly) double minimumElapsedTime; 
@property (readonly) double maximumElapsedTime; 
@property (readonly) double averageElapsedTime; 
@property (readonly) unsigned long long lastResultCount; 
@property (readonly) unsigned long long errorCount; 
+(id)perfMetricForFetchRequest:(id)arg1 ;
+(id)perfMetricWithName:(id)arg1 userInfo:(id)arg2 ;
-(unsigned long long)count;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(NSDate *)lastUpdate;
-(unsigned long long)errorCount;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 sharedMemoryRegion:(cdpm_shared_memory_region_s*)arg3 ;
-(double)lastElapsedTime;
-(double)minimumElapsedTime;
-(double)maximumElapsedTime;
-(double)averageElapsedTime;
-(unsigned long long)lastResultCount;
-(id)elapsedTimeHistogram;
@end
