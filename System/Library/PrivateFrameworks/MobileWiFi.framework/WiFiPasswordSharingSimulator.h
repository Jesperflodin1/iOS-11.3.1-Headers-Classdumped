/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileWiFi.framework/MobileWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFPasswordSharingServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SFPasswordSharingService;

@interface WiFiPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	SFPasswordSharingService* _service;
	/*^block*/id _replyHandler;

}
-(id)init;
-(void)dealloc;
-(void)runWithSSID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
@end
