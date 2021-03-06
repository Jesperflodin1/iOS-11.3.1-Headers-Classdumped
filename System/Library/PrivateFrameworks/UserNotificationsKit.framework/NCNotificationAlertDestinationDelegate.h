/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>
@optional
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;

@required
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;

@end

