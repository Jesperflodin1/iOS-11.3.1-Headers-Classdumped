/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecureChannel/SecureChannelService.h>

@protocol SecureChannelService;
@class NSXPCConnection, NSObject;

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {

	NSXPCConnection* _connectionToService;
	NSObject*<SecureChannelService> _remoteObject;

}
+(id)sharedInstance;
-(id)init;
-(void)callToActionForURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)runApproverFlowForURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

