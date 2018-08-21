/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class VOSBluetoothDevice, NSArray;

@interface VoiceOverBluetoothDeviceConfigController : PSListController {

	VOSBluetoothDevice* _device;
	NSArray* _forgetGroupSpecifiers;
	NSArray* _configGroupSpecifiers;
	BOOL _dismissed;

}
-(id)init;
-(void)dealloc;
-(void)forgetDevice:(id)arg1 ;
-(id)specifiers;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)deviceRemoved:(id)arg1 ;
@end

