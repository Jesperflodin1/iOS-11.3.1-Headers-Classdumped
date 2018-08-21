/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSArray;

@interface ASDUpdateMetricsStore : NSObject {

	NSLock* _lock;
	NSArray* _metrics;
	double _averagePollTime;

}

@property (nonatomic,readonly) NSArray * metrics;                   //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) double averagePollTime;              //@synthesize averagePollTime=_averagePollTime - In the implementation block
+(void)_setUpdateMetrics:(id)arg1 ;
+(id)_updateMetrics;
-(id)init;
-(void)synchronize;
-(NSArray *)metrics;
-(void)_load;
-(id)_serialableData;
-(void)addPoll:(id)arg1 ;
-(double)averagePollTime;
@end
