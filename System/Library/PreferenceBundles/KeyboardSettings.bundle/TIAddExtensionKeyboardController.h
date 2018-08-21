/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAppListController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSArray, UIAlertView, NSString;

@interface TIAddExtensionKeyboardController : PSAppListController <UIAlertViewDelegate> {

	BOOL _hasShownWarning;
	BOOL _didRequestOpenAccess;
	BOOL _didGrantOpenAccess;
	BOOL _behavesAsModalForAddSheet;
	PSSpecifier* _networkAccessSpecifier;
	NSArray* _moduleSpecifiers;
	PSSpecifier* _specifierForWarning;
	UIAlertView* _networkAccessAlert;

}

@property (nonatomic,retain) NSArray * moduleSpecifiers;                        //@synthesize moduleSpecifiers=_moduleSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifierForWarning;                 //@synthesize specifierForWarning=_specifierForWarning - In the implementation block
@property (nonatomic,retain) UIAlertView * networkAccessAlert;                  //@synthesize networkAccessAlert=_networkAccessAlert - In the implementation block
@property (assign,nonatomic) BOOL behavesAsModalForAddSheet;                    //@synthesize behavesAsModalForAddSheet=_behavesAsModalForAddSheet - In the implementation block
@property (nonatomic,retain) PSSpecifier * networkAccessSpecifier;              //@synthesize networkAccessSpecifier=_networkAccessSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specifiersForExtensionInputMode:(id)arg1 parentSpecifier:(id)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)cancelButtonTapped;
-(void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(void)updateDoneButton;
-(void)doneButtonTapped;
-(id)specifiers;
-(id)newSpecifiers;
-(void)addCheckedInputModes;
-(PSSpecifier *)networkAccessSpecifier;
-(void)updateNetworkPolicyState;
-(void)setNetworkAccessSpecifierForKeyboardInputMode:(id)arg1 ;
-(void)setNetworkAccessSpecifier:(PSSpecifier *)arg1 ;
-(void)toggleInputMode:(id)arg1 specifier:(id)arg2 ;
-(id)fetchInputModeEnabled:(id)arg1 ;
-(void)setModuleSpecifiers:(NSArray *)arg1 ;
-(NSArray *)moduleSpecifiers;
-(BOOL)behavesAsModalForAddSheet;
-(void)trackExtensionsContainedInApp;
-(void)setNetworkAccessAlert:(UIAlertView *)arg1 ;
-(void)setSpecifierForWarning:(PSSpecifier *)arg1 ;
-(UIAlertView *)networkAccessAlert;
-(void)setNetworkPolicyValue:(id)arg1 ;
-(PSSpecifier *)specifierForWarning;
-(void)updateNetworkPolicyStateIfNecessaryForCell:(id)arg1 ;
-(id)selectedInputModes;
-(void)setBehavesAsModalForAddSheet:(BOOL)arg1 ;
@end

