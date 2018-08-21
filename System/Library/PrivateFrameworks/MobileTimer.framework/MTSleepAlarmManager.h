/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTSleepAlarm, NSMutableArray, NSDateComponentsFormatter, NSDateFormatter;

@interface MTSleepAlarmManager : NSObject {

	MTSleepAlarm* _sleepAlarm;
	NSMutableArray* _bedtimeNotifications;
	NSDateComponentsFormatter* _dateComponentsFormatter;
	NSDateFormatter* _bedtimeFormatter;

}

@property (nonatomic,retain) NSMutableArray * bedtimeNotifications;                            //@synthesize bedtimeNotifications=_bedtimeNotifications - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * dateComponentsFormatter;              //@synthesize dateComponentsFormatter=_dateComponentsFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * bedtimeFormatter;                               //@synthesize bedtimeFormatter=_bedtimeFormatter - In the implementation block
@property (nonatomic,copy,readonly) MTSleepAlarm * sleepAlarm;                                 //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
+(BOOL)isSleepAlarmBedtimeNotification:(id)arg1 ;
+(id)sharedSleepAlarmManager;
-(id)init;
-(void)addNotification:(id)arg1 ;
-(MTSleepAlarm *)sleepAlarm;
-(void)removeAllNotifications;
-(id)timeZoneForOffsetCalculation;
-(id)_newBaseDateComponentsForDay:(long long)arg1 ;
-(void)setBedtimeNotifications:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bedtimeNotifications;
-(void)prepareBedtimeNotifications;
-(id)bedtimeNotificationMessageWithCalendar:(id)arg1 ;
-(NSDateFormatter *)bedtimeFormatter;
-(NSDateComponentsFormatter *)dateComponentsFormatter;
-(void)updateSleepAlarm:(id)arg1 ;
-(void)setDateComponentsFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setBedtimeFormatter:(NSDateFormatter *)arg1 ;
@end

