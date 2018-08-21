/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/Notification/MessageAccountNotificationPlugin.bundle/MessageAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface MessageAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	int _updateAutoFetchSettingsRequestCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_accountHasMailAccountParentType:(id)arg1 ;
+(id)_childMailAccountWithParentAccount:(id)arg1 ;
+(BOOL)_accountHasLeafMailAccountType:(id)arg1 ;
+(BOOL)_accountHasLeafDeliveryAccountType:(id)arg1 ;
-(BOOL)_addMailChildAccountToParentAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_deleteDataWithMailAccount:(id)arg1 ;
-(void)_mailAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_deliveryAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_updateAutoFetchSettingsAsynchronously;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

