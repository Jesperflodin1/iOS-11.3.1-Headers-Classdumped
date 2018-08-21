/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, PSListController;

@interface PSUICarrierSpaceServicesController : PSListController {

	NSArray* _appsList;
	PSListController* _phoneSettingsController;

}

@property (nonatomic,retain) NSArray * appsList;                                      //@synthesize appsList=_appsList - In the implementation block
@property (nonatomic,retain) PSListController * phoneSettingsController;              //@synthesize phoneSettingsController=_phoneSettingsController - In the implementation block
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)specifiers;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(void)setPhoneSettingsController:(PSListController *)arg1 ;
-(PSListController *)phoneSettingsController;
-(id)primaryAppSpecifier;
-(BOOL)shouldShowMoreApps;
-(void)moreAppsTapped:(id)arg1 ;
@end
