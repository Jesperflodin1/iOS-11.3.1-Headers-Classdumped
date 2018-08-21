/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class ISRegion;

@interface ISLocaleSetupController : PSSetupController {

	ISRegion* _selectedRegion;

}

@property (nonatomic,retain) ISRegion * selectedRegion;              //@synthesize selectedRegion=_selectedRegion - In the implementation block
-(void)setSelectedRegion:(ISRegion *)arg1 ;
-(void)commitRegion;
-(ISRegion *)selectedRegion;
-(void)handleAlertActionAndChangeLanguage:(BOOL)arg1 ;
-(void)setupController;
@end

