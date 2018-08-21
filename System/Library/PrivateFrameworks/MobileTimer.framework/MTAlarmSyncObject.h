/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTSyncObject.h>

@class MTAlarm;

@interface MTAlarmSyncObject : MTSyncObject {

	MTAlarm* _alarm;

}

@property (nonatomic,readonly) MTAlarm * alarm;              //@synthesize alarm=_alarm - In the implementation block
+(id)changeWithAlarm:(id)arg1 changeType:(long long)arg2 ;
+(id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2 ;
+(id)createMTPBAlarmFromMTAlarm:(id)arg1 ;
+(id)createMTAlarmFromMTPBAlarm:(id)arg1 ;
-(id)objectIdentifier;
-(id)description;
-(id)lastModifiedDate;
-(MTAlarm *)alarm;
-(id)createProtobufWithOptions:(id)arg1 ;
-(id)initWithAlarm:(id)arg1 changeType:(long long)arg2 ;
@end

