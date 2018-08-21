/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>
#import <libobjc.A.dylib/PSUIHomeButtonCustomizeControllerDelegate.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class NSTimer, PSUITVOutManager, PSSpecifier, SFAirDropDiscoveryController, CRCarPlayPreferences, NSString;

@interface PSUIGeneralController : PSListController <CRCarPlayPreferencesDelegate, PSUIHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers> {

	NSTimer* _usageTimer;
	PSUITVOutManager* _tvOutManager;
	PSSpecifier* _tvOutSpecifier;
	PSSpecifier* _airDropSpecifier;
	SFAirDropDiscoveryController* _airDropDiscoveryController;
	CRCarPlayPreferences* _carPreferences;

}

@property (nonatomic,retain) CRCarPlayPreferences * carPreferences;              //@synthesize carPreferences=_carPreferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)handleURL:(id)arg1 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(id)specifiers;
-(CRCarPlayPreferences *)carPreferences;
-(void)setCarPreferences:(CRCarPlayPreferences *)arg1 ;
-(BOOL)_hasCarPlayContent;
-(void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1 ;
-(void)profileNotification:(id)arg1 ;
-(void)handleCarPlayAllowedDidChange;
-(void)homeButtonCustomizeControllerDidFinish:(id)arg1 ;
-(void)handleTVOutChange;
-(void)loadHomeButtonSettings:(id)arg1 ;
-(id)parentalControlsEnabled:(id)arg1 ;
-(id)EDGEEnabled:(id)arg1 ;
-(void)enableEdge:(id)arg1 ;
-(void)shutDown:(id)arg1 ;
@end
