/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UISwitch, PSSpecifier, NSMutableArray;

@interface PSUIRestrictionsController : PSListController {

	UISwitch* _delayedSwitch;
	BOOL _delayedValue;
	PSSpecifier* _iBooksSpecifier;
	PSSpecifier* _iBooksExplicitSpecifier;
	BOOL _isObservingFaceTimeChanges;
	NSMutableArray* _mcRestrictionFeatures;

}

@property (nonatomic,retain) NSMutableArray * mcRestrictionFeatures;              //@synthesize mcRestrictionFeatures=_mcRestrictionFeatures - In the implementation block
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
+(BOOL)requiresPIN;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setExplicitEnabled:(id)arg1 ;
-(id)explicitEnabled;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(id)currentCountryCode;
-(BOOL)canBeShownFromSuspendedState;
-(void)willResignActive;
-(void)willBecomeActive;
-(id)specifiers;
-(id)countryCodes;
-(void)profileNotification:(id)arg1 ;
-(void)_disableSpecifier:(id)arg1 ;
-(BOOL)_isInConference;
-(void)_disableFaceTimeRestrictions;
-(void)updateToggleStateAndReload;
-(id)featureValue:(id)arg1 ;
-(void)setFeatureValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)siriContentRestrictionsLockedDown;
-(BOOL)featureRestricted:(id)arg1 ;
-(void)updateToggleState;
-(BOOL)_isiBooksInstalled;
-(void)_handleFaceTimeConferenceStateChanged;
-(void)_observeFaceTimeChanges:(BOOL)arg1 ;
-(void)localizedRestrictionSourceDescriptionChanged:(id)arg1 ;
-(void)_setSettingsRestrictedByString;
-(id)_mcRestrictionFeaturesFromSpecifiers:(id)arg1 ;
-(void)setMcRestrictionFeatures:(NSMutableArray *)arg1 ;
-(BOOL)_isiTunesUInstalled;
-(BOOL)_isPodcastsInstalled;
-(BOOL)_mesaIsEnabledForStore;
-(BOOL)_isSignedInToStore;
-(void)_configureIfGreenTeaDevice;
-(id)contentRatingsForMediaType:(id)arg1 ;
-(void)setCountryCode:(id)arg1 reload:(BOOL)arg2 ;
-(id)localizedContentRestrictionStringForRank:(id)arg1 mediaType:(id)arg2 ;
-(id)reversedBoolFeatureValue:(id)arg1 ;
-(void)setReversedBoolFeatureValue:(id)arg1 specifier:(id)arg2 ;
-(id)webContentRestrictionState:(id)arg1 ;
-(id)siriContentRestrictionState:(id)arg1 ;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
-(void)revertRestrictionPrefsIfNeeded;
-(void)_handleExternalApplicationChange;
-(id)localizedStringForiTunesStorePasswordDefaultTimeout;
-(id)currentCountryString:(id)arg1 ;
-(id)explicitEnabledString;
-(id)iBooksExplicitEnabledString:(id)arg1 ;
-(id)contentRestriction:(id)arg1 ;
-(NSMutableArray *)mcRestrictionFeatures;
@end

