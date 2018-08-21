/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKAlarm;

@interface EKUIAlarm : NSObject {

	BOOL _isLeaveNowAlarm;
	EKAlarm* _alarm;

}

@property (nonatomic,readonly) BOOL isLeaveNowAlarm;              //@synthesize isLeaveNowAlarm=_isLeaveNowAlarm - In the implementation block
@property (nonatomic,readonly) EKAlarm * alarm;                   //@synthesize alarm=_alarm - In the implementation block
-(id)description;
-(id)localizedDescriptionAllDay:(BOOL)arg1 ;
-(EKAlarm *)alarm;
-(BOOL)isLeaveNowAlarm;
-(id)initWithAlarm:(id)arg1 ;
-(id)initLeaveNowAlarm;
-(BOOL)isEqualToUIAlarm:(id)arg1 ;
@end

