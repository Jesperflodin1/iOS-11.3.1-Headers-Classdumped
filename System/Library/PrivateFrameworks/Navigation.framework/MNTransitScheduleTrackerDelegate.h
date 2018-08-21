/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTransitScheduleTrackerDelegate <NSObject>
@optional
-(void)transitScheduleTracker:(id)arg1 willArriveAtStepIndex:(unsigned long long)arg2 inTimeInterval:(double)arg3;
-(void)transitScheduleTracker:(id)arg1 didArriveAtStepIndex:(unsigned long long)arg2;

@required
-(void)transitScheduleTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
-(void)transitScheduleTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;

@end
