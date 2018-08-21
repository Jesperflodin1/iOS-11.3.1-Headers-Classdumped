/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/TTYUtilities.framework/TTYUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TTYTelephonyUtilities : NSObject {

	BOOL _headphoneJackSupportsTTY;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;              //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
+(id)sharedUtilityProvider;
+(BOOL)shouldUseRTT;
+(BOOL)relayIsSupported;
+(id)relayPhoneNumber;
+(BOOL)isRTTSupported;
-(id)init;
-(void)dealloc;
-(void)registerNotifications;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)mediaServerDied;
-(BOOL)relayIsSupported;
-(unsigned long long)currentPreferredTransportMethod;
-(BOOL)headphoneJackSupportsTTY;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
-(void)updateHeadphoneState;
-(void)headphoneStateChangedNotification:(id)arg1 ;
@end

