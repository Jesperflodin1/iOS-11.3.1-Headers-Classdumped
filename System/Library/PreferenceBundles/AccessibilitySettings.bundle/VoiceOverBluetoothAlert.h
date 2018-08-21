/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol VoiceOverBluetoothAlertDelegate;
@class VOSBluetoothDevice, UIAlertController, NSString;

@interface VoiceOverBluetoothAlert : NSObject <UIAlertViewDelegate> {

	id<VoiceOverBluetoothAlertDelegate> _delegate;
	VOSBluetoothDevice* _device;
	UIAlertController* _alertController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAlertWithResult:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dismiss;
-(id)initWithDevice:(id)arg1 ;
@end
