/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface _HKFirstPartyWorkoutSnapshot : NSObject <NSSecureCoding> {

	long long _state;
	unsigned long long _activityType;
	NSDate* _startDate;
	NSArray* _workoutEvents;

}

@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSArray * workoutEvents;                      //@synthesize workoutEvents=_workoutEvents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)workoutSnapshotWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)state;
-(unsigned long long)activityType;
-(id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4 ;
-(NSDate *)startDate;
-(NSArray *)workoutEvents;
-(double)durationForDate:(id)arg1 ;
@end

