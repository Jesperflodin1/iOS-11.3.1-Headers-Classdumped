/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTSyncObject.h>

@class NSArray, MTAlarm, NSDate;

@interface MTAlarmStateSyncObject : MTSyncObject {

	NSArray* _alarms;
	MTAlarm* _sleepAlarm;
	NSDate* _stateModifiedDate;

}

@property (nonatomic,retain) NSDate * stateModifiedDate;              //@synthesize stateModifiedDate=_stateModifiedDate - In the implementation block
@property (nonatomic,readonly) NSArray * alarms;                      //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,readonly) MTAlarm * sleepAlarm;                  //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
+(id)alarmStateWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4 ;
+(id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2 ;
-(id)objectIdentifier;
-(id)description;
-(id)lastModifiedDate;
-(NSArray *)alarms;
-(MTAlarm *)sleepAlarm;
-(id)createProtobufWithOptions:(id)arg1 ;
-(id)initWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4 ;
-(NSDate *)stateModifiedDate;
-(void)setStateModifiedDate:(NSDate *)arg1 ;
-(id)allAlarms;
@end
