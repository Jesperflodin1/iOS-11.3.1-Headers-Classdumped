/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NCNotificationSection : NSObject {

	NSMutableDictionary* _coalescedNotifications;

}

@property (nonatomic,retain) NSMutableDictionary * coalescedNotifications;              //@synthesize coalescedNotifications=_coalescedNotifications - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationsCount; 
-(id)init;
-(unsigned long long)notificationsCount;
-(id)coalescedNotificationForThreadIdentifier:(id)arg1 ;
-(NSMutableDictionary *)coalescedNotifications;
-(void)setCoalescedNotifications:(NSMutableDictionary *)arg1 ;
-(id)removeNotificationRequest:(id)arg1 ;
-(id)addNotificationRequest:(id)arg1 ;
-(id)replaceNotificationRequest:(id)arg1 ;
@end

