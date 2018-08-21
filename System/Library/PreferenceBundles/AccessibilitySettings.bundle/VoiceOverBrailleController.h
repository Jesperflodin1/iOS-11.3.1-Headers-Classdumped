/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/VoiceOverBluetoothDevicesController.h>

@class SCROBrailleClient, NSDictionary, NSTimer;

@interface VoiceOverBrailleController : VoiceOverBluetoothDevicesController {

	SCROBrailleClient* _brailleClient;
	NSDictionary* _brailleDriverDeviceDetectionInfo;
	NSTimer* _bluetoothDeviceLoadFailedTimer;
	BOOL _isContractedBrailleEnabled;
	BOOL _isEightDotBrailleEnabled;

}
-(id)brailleGesturesInput:(id)arg1 ;
-(id)contractedBrailleEnabled:(id)arg1 ;
-(id)brailleDisplayInput:(id)arg1 ;
-(void)setAlwaysUseNemethEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)alwaysUseNemethEnabled:(id)arg1 ;
-(void)setWordWrapEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setSoftwareKeyboardWithBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setPanningAutoturnReadingContent:(id)arg1 specifier:(id)arg2 ;
-(id)softwareKeyboardWithBrailleEnabled:(id)arg1 ;
-(void)setEightDotBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)eightDotBrailleEnabled:(id)arg1 ;
-(id)brailleDisplayOutput:(id)arg1 ;
-(void)setContractedBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)wordWrapEnabled:(id)arg1 ;
-(id)panningAutoturnReadingContent:(id)arg1 ;
-(void)handleSettingsChange:(id)arg1 ;
-(id)_bluetoothDisplayAddressFromPreferences;
-(void)_connectToBrailleClient:(BOOL)arg1 ;
-(void)_stopDeviceLoadFailedTimer;
-(id)_currentBrailleTable:(id)arg1 ;
-(id)_brailleDisplayAlertDuration:(id)arg1 ;
-(id)_stringForBrailleMode:(long long)arg1 ;
-(void)_handleBrailleConfigurationChanged;
-(void)_updateBrailleWritingCell;
-(void)_handleSettingsChange:(id)arg1 ;
-(void)primaryDeviceWasUnpaired;
-(void)_startDeviceLoadFailedTimer;
-(void)_bluetoothDeviceLoadFailedTimerFireMethod:(id)arg1 ;
-(void)_handleFailedToLoadBluetoothDevice:(id)arg1 ;
-(BOOL)shouldAddDevice:(id)arg1 ;
-(id)devicesGroupName;
-(id)bluetoothPoweredOffFooter;
-(id)bluetoothPowerAlertMessage;
-(void)deviceConnected:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)handleBrailleDidReconnect:(id)arg1 ;
-(void)handleBrailleConfigurationChanged:(id)arg1 ;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1 ;
-(void)setBluetoothIsBusy:(BOOL)arg1 ;
@end

