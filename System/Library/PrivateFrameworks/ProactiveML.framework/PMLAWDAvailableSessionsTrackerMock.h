/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/PMLAWDAvailableSessionsTracker.h>

@class NSMutableArray, NSArray;

@interface PMLAWDAvailableSessionsTrackerMock : PMLAWDAvailableSessionsTracker {

	NSMutableArray* _internalTrackedStats;
	NSArray* _trackedStats;

}

@property (readonly) NSArray * trackedStats;              //@synthesize trackedStats=_trackedStats - In the implementation block
-(id)init;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(void)clearTrackedMessages;
-(id)recentStatsForModelName:(id)arg1 ;
-(void)triggerAWDMetricRequest;
-(NSArray *)trackedStats;
@end
