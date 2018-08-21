/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/Notification/SocialAccountNotificationPlugin.bundle/SocialAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface SLAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	int _accountState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupTwitterPushDestinationsForAccount:(id)arg1 accountStore:(id)arg2 ;
-(BOOL)_accountExistsForAccountTypeIdentifier:(id)arg1 inStore:(id)arg2 ;
-(id)init;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

