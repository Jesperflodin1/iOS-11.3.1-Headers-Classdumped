/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject;

@interface TSIntervalFilter : NSObject {

	unsigned long long _expectedInterval;
	unsigned _multiIntervalCount;
	unsigned long long _filterCount;
	unsigned long long* _filteredTimestamps;
	unsigned _timestampIndex;
	unsigned long long _timestampCount[8];
	unsigned long long _timestampIntervals[8];
	long long _validEntry;
	NSObject*<OS_dispatch_queue> _syncQueue;
	unsigned char _filterSize;
	unsigned long long _filterOffset;
	IOTS_U128 _filteredSnapshot;
	IOTS_U128 _filteredOffset;

}

@property (nonatomic,readonly) unsigned long long multiIntervalTime; 
@property (nonatomic,readonly) unsigned long long filterCount; 
-(void)dealloc;
-(unsigned long long)addTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)filterCount;
-(void)resetFilter;
-(id)initWithExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned)arg2 filterSize:(unsigned char)arg3 ;
-(unsigned long long)addTimestamp:(unsigned long long)arg1 entry:(long long*)arg2 ;
-(unsigned long long)multiIntervalTimeForEntry:(long long)arg1 ;
-(void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1 ;
-(void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned)arg2 ;
-(void)changeToNewFilterSize:(unsigned char)arg1 ;
-(unsigned long long)_calculateNewTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)filterCountForEntry:(long long)arg1 ;
-(unsigned long long)multiIntervalTime;
@end

