/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VOSBluetoothDevice, PSSpecifier, UIAlertController;

@interface VoiceOverBluetoothSSPPairingRequest : NSObject {

	VOSBluetoothDevice* _device;
	PSSpecifier* _specifier;
	UIAlertController* _alert;
	id _delegate;
	int _pairingStyle;

}
-(id)_sanitizeNameForAlert:(id)arg1 ;
-(void)showWithWindow:(id)arg1 ;
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)hidPairingResult:(id)arg1 ;
@end

