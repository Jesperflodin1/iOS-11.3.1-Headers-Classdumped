/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:31:57 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/AssistiveTouch.axuiservice/AssistiveTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class HNDUIServer, NSString, CALayer;

@interface HNDScannerInputViewController : UIViewController {

	HNDUIServer* _userInterfaceServer;
	NSString* _cameraInputSourceAlertIdentifier;
	NSString* _hardwareInputSourceAlertIdentifier;
	NSString* _screenInputSourceAlertIdentifier;
	CALayer* _cameraInputSourceStateLeftLayer;
	CALayer* _cameraInputSourceStateRightLayer;

}

@property (nonatomic,retain) NSString * cameraInputSourceAlertIdentifier;                //@synthesize cameraInputSourceAlertIdentifier=_cameraInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) NSString * hardwareInputSourceAlertIdentifier;              //@synthesize hardwareInputSourceAlertIdentifier=_hardwareInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) NSString * screenInputSourceAlertIdentifier;                //@synthesize screenInputSourceAlertIdentifier=_screenInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) CALayer * cameraInputSourceStateLeftLayer;                  //@synthesize cameraInputSourceStateLeftLayer=_cameraInputSourceStateLeftLayer - In the implementation block
@property (nonatomic,retain) CALayer * cameraInputSourceStateRightLayer;                 //@synthesize cameraInputSourceStateRightLayer=_cameraInputSourceStateRightLayer - In the implementation block
@property (assign,nonatomic,__weak) HNDUIServer * userInterfaceServer;                   //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
-(void)hideAlerts;
-(void)hideAlertForSource:(unsigned long long)arg1 ;
-(void)hideStateForSource:(unsigned long long)arg1 ;
-(void)_hideAlertsForAllSources;
-(void)_hideStateForAllSources;
-(NSString *)cameraInputSourceAlertIdentifier;
-(HNDUIServer *)userInterfaceServer;
-(NSString *)hardwareInputSourceAlertIdentifier;
-(NSString *)screenInputSourceAlertIdentifier;
-(void)setScreenInputSourceAlertIdentifier:(NSString *)arg1 ;
-(void)setCameraInputSourceAlertIdentifier:(NSString *)arg1 ;
-(void)setHardwareInputSourceAlertIdentifier:(NSString *)arg1 ;
-(CALayer *)cameraInputSourceStateLeftLayer;
-(void)setCameraInputSourceStateLeftLayer:(CALayer *)arg1 ;
-(CALayer *)cameraInputSourceStateRightLayer;
-(void)setCameraInputSourceStateRightLayer:(CALayer *)arg1 ;
-(void)setUserInterfaceServer:(HNDUIServer *)arg1 ;
-(void)showAlert:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)showState:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)dealloc;
@end

