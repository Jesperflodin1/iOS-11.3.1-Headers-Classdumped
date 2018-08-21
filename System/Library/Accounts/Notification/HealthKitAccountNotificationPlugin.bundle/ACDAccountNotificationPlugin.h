/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/Notification/HealthKitAccountNotificationPlugin.bundle/HealthKitAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;

@end

