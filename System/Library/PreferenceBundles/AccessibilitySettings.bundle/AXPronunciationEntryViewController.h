/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AFAssistantUIService.h>
#import <AccessibilitySettings/AXPronunciationSuggestionsViewControllerDelegate.h>
#import <AccessibilitySettings/AXPronunciationLanguageListControllerDelegate.h>
#import <AccessibilitySettings/AXPronunciationVoiceListControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableArray, AXSpeechPronunciationHelper, UIView, TTSSubstitution, AXSpeechManager, AXSpeechAction, NSString;

@interface AXPronunciationEntryViewController : AccessibilityBaseListController <AFAssistantUIService, AXPronunciationSuggestionsViewControllerDelegate, AXPronunciationLanguageListControllerDelegate, AXPronunciationVoiceListControllerDelegate, UITextFieldDelegate> {

	NSMutableArray* _appSpecifiers;
	BOOL _requestingPhonemeData;
	BOOL _isRecording;
	AXSpeechPronunciationHelper* _pronunciationHelper;
	UIView* _dictationView;
	UIView* _dictationBackgroundView;
	TTSSubstitution* _userSubstitution;
	AXSpeechManager* _speechManager;
	AXSpeechAction* _lastAction;

}

@property (nonatomic,retain) TTSSubstitution * userSubstitution;              //@synthesize userSubstitution=_userSubstitution - In the implementation block
@property (nonatomic,retain) AXSpeechManager * speechManager;                 //@synthesize speechManager=_speechManager - In the implementation block
@property (nonatomic,retain) AXSpeechAction * lastAction;                     //@synthesize lastAction=_lastAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pronunciationVoiceListController:(id)arg1 didSelectVoices:(id)arg2 ;
-(void)pronunciationLanguageListController:(id)arg1 didSelectLanguages:(id)arg2 ;
-(AXSpeechAction *)lastAction;
-(void)_dictateButtonTapped:(id)arg1 ;
-(void)handlePlayButton:(id)arg1 ;
-(void)setUserSubstitution:(TTSSubstitution *)arg1 ;
-(void)_updatePlayButtonTraits;
-(TTSSubstitution *)userSubstitution;
-(void)setLastAction:(AXSpeechAction *)arg1 ;
-(void)_showAppCombinationsAnimated:(BOOL)arg1 ;
-(void)_manageVoicesSelector;
-(id)_selectedVoice:(id)arg1 ;
-(BOOL)_usingSupportedDictationLanguage;
-(void)manipulateDictationView:(long long)arg1 ;
-(void)_calculateAndUpdateDictationStatus:(id)arg1 ;
-(BOOL)_supportsPronunciationDictation;
-(void)_updateDictationViewWithStatus:(long long)arg1 withCell:(id)arg2 ;
-(void)editingChanged:(id)arg1 ;
-(void)_handleViewHiddenStatus;
-(void)_setOriginalString:(id)arg1 specifier:(id)arg2 ;
-(id)_originalString:(id)arg1 ;
-(void)_setReplacementString:(id)arg1 specifier:(id)arg2 ;
-(id)_replacementString:(id)arg1 ;
-(void)_setIgnoresCase:(id)arg1 specifier:(id)arg2 ;
-(id)_ignoresCase:(id)arg1 ;
-(void)_setAppliesTo:(id)arg1 specifier:(id)arg2 ;
-(id)_appliesTo:(id)arg1 ;
-(void)_calculateAndUpdateDictationStatus;
-(void)pronunciationSuggestionsViewController:(id)arg1 didSelectPhonemes:(id)arg2 ;
-(void)_popSuggestionsController:(id)arg1 ;
-(void)_hideAppCombinations;
-(BOOL)_stopRecording;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)_save;
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3 ;
-(void)willResignActive;
-(id)specifiers;
-(id)_speechAssetUpdaterClient;
-(AXSpeechManager *)speechManager;
-(void)setSpeechManager:(AXSpeechManager *)arg1 ;
-(id)_language;
@end
