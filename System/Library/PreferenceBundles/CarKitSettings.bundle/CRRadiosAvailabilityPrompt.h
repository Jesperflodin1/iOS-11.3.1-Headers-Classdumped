/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CarKitSettings/CarKitSettings-Structs.h>
@class UIViewController, UIAlertController;

@interface CRRadiosAvailabilityPrompt : NSObject {

	WiFiManagerClientRef _wifiManager;
	BOOL _needsPresentationConsideration;
	UIViewController* _presentingController;
	UIAlertController* _presentedAlertController;

}

@property (assign,nonatomic) BOOL needsPresentationConsideration;                              //@synthesize needsPresentationConsideration=_needsPresentationConsideration - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * presentedAlertController;              //@synthesize presentedAlertController=_presentedAlertController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingController;                   //@synthesize presentingController=_presentingController - In the implementation block
-(void)_setupWiFi;
-(void)setNeedsPresentationConsideration:(BOOL)arg1 ;
-(void)handleBluetoothPowerChanged:(id)arg1 ;
-(void)_teardownWiFi;
-(BOOL)needsPresentationConsideration;
-(BOOL)updateRadiosAvailabilityAlertPresentation;
-(BOOL)shouldPromptBluetoothPower;
-(BOOL)shouldPromptWiFiPower;
-(UIViewController *)presentingController;
-(UIAlertController *)presentedAlertController;
-(void)setBluetoothPowered:(BOOL)arg1 ;
-(void)setWiFiPowered:(BOOL)arg1 ;
-(void)setPresentedAlertController:(UIAlertController *)arg1 ;
-(void)handleWifiPowerChanged;
-(id)init;
-(void)dealloc;
-(void)setPresentingController:(UIViewController *)arg1 ;
@end

