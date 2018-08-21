/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSMailDefaultService.h>

@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService {

	NSString* _bundleIdentifier;
	NSString* _accountIdentifier;
	NSString* _notificationNamePrefix;
	NSArray* _mailboxNames;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * notificationNamePrefix;              //@synthesize notificationNamePrefix=_notificationNamePrefix - In the implementation block
@property (nonatomic,copy) NSArray * mailboxNames;                         //@synthesize mailboxNames=_mailboxNames - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)notificationNamePrefix;
-(NSArray *)mailboxNames;
-(void)setNotificationNamePrefix:(NSString *)arg1 ;
-(void)setMailboxNames:(NSArray *)arg1 ;
-(void)registerForPush:(/*^block*/id)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
@end

