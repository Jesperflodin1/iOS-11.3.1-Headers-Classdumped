/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CDPUIController.h>

@interface CDPUIAccountRecoveryController : CDPUIController
-(void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1 ;
-(void)_setupDevicePickerController:(/*^block*/id)arg1 ;
-(void)devicePicker:(id)arg1 didSelectDevice:(id)arg2 ;
-(id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2 ;
-(BOOL)performingAccountRecovery;
-(id)_accountRecoveryEscapeOfferForDevice:(id)arg1 ;
-(id)_accountRecoveryDevicePickerEscapeOffer;
@end

