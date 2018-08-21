/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _regionSupportsPaymentRegistrationInitialized;
	BOOL _regionSupportsPaymentRegistration;

}
+(id)sharedCapabilities;
-(id)init;
-(void)dealloc;
-(BOOL)supportsApplePay;
-(void)getRegionSupportsPaymentRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isAppleTV;
-(void)localeChanged:(id)arg1 ;
@end
