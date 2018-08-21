/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class AXSwitch, SCATAlertCoordinator;

@interface SCATSwitchDetailsViewController : PSListController {

	AXSwitch* _modelSwitch;
	SCATAlertCoordinator* _switchAlertCoordinator;

}

@property (nonatomic,retain) AXSwitch * modelSwitch;                                     //@synthesize modelSwitch=_modelSwitch - In the implementation block
@property (nonatomic,retain) SCATAlertCoordinator * switchAlertCoordinator;              //@synthesize switchAlertCoordinator=_switchAlertCoordinator - In the implementation block
+(id)switchDetailsViewControllerWithSwitch:(id)arg1 parentController:(id)arg2 ;
-(void)setModelSwitch:(AXSwitch *)arg1 ;
-(AXSwitch *)modelSwitch;
-(void)_setSwitchNameDescription:(id)arg1 specifier:(id)arg2 ;
-(void)setSwitchAlertCoordinator:(SCATAlertCoordinator *)arg1 ;
-(id)_generalGroupSpecifiers;
-(id)_actionGroupSpecifiers;
-(id)_midiGroupSpecifiers;
-(id)_getSwitchNameDescription:(id)arg1 ;
-(id)_getSwitchSourceDescription:(id)arg1 ;
-(id)_getSwitchDefaultActionDescription:(id)arg1 ;
-(id)_getSwitchLongPressActionDescription:(id)arg1 ;
-(id)_getSwitchMIDIChannelDescription:(id)arg1 ;
-(id)_getSwitchMIDIKeyDescription:(id)arg1 ;
-(SCATAlertCoordinator *)switchAlertCoordinator;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

