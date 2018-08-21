/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class AXSwitch;

@interface SCATSwitchActionsController : PSListController {

	BOOL _selectLongPress;
	BOOL _popToRootSwitchViewControlAfterSelection;
	AXSwitch* _storedSwitch;

}

@property (nonatomic,retain) AXSwitch * storedSwitch;                                    //@synthesize storedSwitch=_storedSwitch - In the implementation block
@property (assign,nonatomic) BOOL selectLongPress;                                       //@synthesize selectLongPress=_selectLongPress - In the implementation block
@property (assign,nonatomic) BOOL popToRootSwitchViewControlAfterSelection;              //@synthesize popToRootSwitchViewControlAfterSelection=_popToRootSwitchViewControlAfterSelection - In the implementation block
-(void)setStoredSwitch:(AXSwitch *)arg1 ;
-(AXSwitch *)storedSwitch;
-(BOOL)selectLongPress;
-(id)_actionSpecifiersWithActions:(id)arg1 ;
-(BOOL)popToRootSwitchViewControlAfterSelection;
-(id)_rootSwitchesController;
-(BOOL)_popToActionTypeController;
-(id)initWithSwitch:(id)arg1 ;
-(void)setSelectLongPress:(BOOL)arg1 ;
-(void)setPopToRootSwitchViewControlAfterSelection:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

