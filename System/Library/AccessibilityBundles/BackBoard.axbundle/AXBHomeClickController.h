/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:31:58 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoard/BackBoard-Structs.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class NSString, NSMutableArray, NSLock, AXDispatchTimer, AXUIClient;

@interface AXBHomeClickController : NSObject <AXUIClientDelegate> {

	BOOL _isAlertVisible;
	BOOL _isDisableSwitchAlertVisible;
	NSString* _eventTapIdentifier;
	NSMutableArray* _menuButtonClientIds;
	NSLock* _menuButtonLock;
	AXDispatchTimer* _writeLoginNoteTimer;
	AXUIClient* _displayFilterUIClient;
	BOOL isHearingAidControlVisible;
	BOOL switchControlRendersDeviceUnusable;
	BOOL switchControlHasScreenSwitch;
	BOOL _didShowHoldDurationTripleClickHelp;

}

@property (assign,nonatomic) BOOL didShowHoldDurationTripleClickHelp;              //@synthesize didShowHoldDurationTripleClickHelp=_didShowHoldDurationTripleClickHelp - In the implementation block
@property (assign,nonatomic) BOOL isHearingAidControlVisible; 
@property (assign,nonatomic) BOOL switchControlRendersDeviceUnusable; 
@property (assign,nonatomic) BOOL switchControlHasScreenSwitch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeMonitor;
+(id)controller;
-(void)_updateEventTapSettings;
-(id)_writeLoginNoteTimer;
-(id)displayFilterUIClient;
-(void)_promptToDisableBrightnessFilters:(/*^block*/id)arg1 data:(id)arg2 ;
-(void)_toggleWhiteOnBlackOffMainThread;
-(void)_toggleZoomOffMainThread;
-(BOOL)switchControlRendersDeviceUnusable;
-(BOOL)switchControlHasScreenSwitch;
-(void)_toggleSwitchOverOffMainThread;
-(void)_toggleAssistiveTouchOffMainThread;
-(BOOL)didShowHoldDurationTripleClickHelp;
-(void)setDidShowHoldDurationTripleClickHelp:(BOOL)arg1 ;
-(void)_toggleClassicInvertColors;
-(void)_toggleWhiteOnBlack;
-(void)_toggleReduceWhitePoint;
-(void)_toggleColorFilter;
-(void)_toggleGrayscale;
-(void)_startVoiceOverSequence;
-(void)_toggleGuidedAccess;
-(void)_toggleAssistiveTouch;
-(void)_toggleSwitchOver;
-(void)_setHearingAidControlVisible:(BOOL)arg1 ;
-(void)_toggleTouchAccommodations;
-(void)_toggleMagnifier;
-(void)_toggleLocalizationCaptionPanel;
-(void)_toggleLookingGlass;
-(void)_toggleVoiceOver;
-(BOOL)_accessibilityIsFactoryDiskImagePresent;
-(void)_fireHomeButtons:(BOOL)arg1 ;
-(void)_toggleDisplayAskSheet;
-(BOOL)isHearingAidControlVisible;
-(BOOL)_checkIfZoomWasActivated:(id)arg1 stealEvent:(BOOL*)arg2 ;
-(BOOL)_purpleBuddySetupComplete;
-(void)_triggerAppTransition;
-(void)_updateBuddyVoiceOverStatus;
-(void)clearNoteToUserSession;
-(void)_handleZoomActivationDuringBuddy;
-(void)_handleZoomInBuddyAlertResult:(long long)arg1 ;
-(BOOL)_sideButtonEnabled;
-(BOOL)captureHomeClick:(id)arg1 ;
-(void)_updateTripleHomeSettings:(BOOL)arg1 ;
-(void)_updateHomeClickEnabled;
-(void)_updateHomeClickSpeed;
-(void)_springBoardDied:(id)arg1 ;
-(id)_eventTapIdentifier;
-(void)_writeNoteToNewUserSession;
-(void)_appTransition;
-(void)_toggleZoom;
-(void)_didHideAlert;
-(void)_willShowAlert;
-(void)setIsHearingAidControlVisible:(BOOL)arg1 ;
-(BOOL)_captureKeyboardCommands:(SCD_Struct_AX0*)arg1 ;
-(void)initialize;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
-(void)setSwitchControlHasScreenSwitch:(BOOL)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
@end
