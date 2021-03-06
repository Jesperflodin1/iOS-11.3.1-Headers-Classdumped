/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface AVTelephonyInterface : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CTServerConnectionRef _connection;

}

@property (assign) id<AVTelephonyInterfaceDelegate> delegate; 
-(id)init;
-(id<AVTelephonyInterfaceDelegate>)delegate;
-(void)setDelegate:(id<AVTelephonyInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(void)unregisterForNotifications;
-(void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)handleVocoderNotificationWithInfo:(id)arg1 ;
-(id)translateVocoderTypeToCoreAudioType:(id)arg1 ;
-(BOOL)registerForNotifications;
@end

