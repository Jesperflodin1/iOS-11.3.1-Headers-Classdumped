/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <Foundation/NSOperation.h>

@class NSURL, NSString;

@interface VSUserNotificationOperation : NSOperation {

	CFUserNotificationRef _notification;
	NSURL* _iconURL;
	NSString* _title;
	NSString* _message;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	unsigned long long _response;
	/*function pointer*/void* _userNotificationCreateProc;
	/*function pointer*/void* _userNotificationReceiveResponseProc;
	/*function pointer*/void* _userNotificationCancelProc;

}

@property (assign,nonatomic) unsigned long long response;                                                //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* userNotificationCreateProc;                       //@synthesize userNotificationCreateProc=_userNotificationCreateProc - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* userNotificationReceiveResponseProc;              //@synthesize userNotificationReceiveResponseProc=_userNotificationReceiveResponseProc - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* userNotificationCancelProc;                       //@synthesize userNotificationCancelProc=_userNotificationCancelProc - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                                                              //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                           //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonTitle;                                                //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * alternateButtonTitle;                                              //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
-(void)setResponse:(unsigned long long)arg1 ;
-(id)init;
-(void)cancel;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)response;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(void)main;
-(NSString *)message;
-(NSURL *)iconURL;
-(/*function pointer*/void*)userNotificationCreateProc;
-(/*function pointer*/void*)userNotificationReceiveResponseProc;
-(/*function pointer*/void*)userNotificationCancelProc;
-(void)setUserNotificationCreateProc:(/*function pointer*/void*)arg1 ;
-(void)setUserNotificationReceiveResponseProc:(/*function pointer*/void*)arg1 ;
-(void)setUserNotificationCancelProc:(/*function pointer*/void*)arg1 ;
-(void)setIconURL:(NSURL *)arg1 ;
-(NSString *)defaultButtonTitle;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
@end

