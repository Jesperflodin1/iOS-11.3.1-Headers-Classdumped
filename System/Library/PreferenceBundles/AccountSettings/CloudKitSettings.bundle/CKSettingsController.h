/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSMutableDictionary, PSTableCell, NSString;

@interface CKSettingsController : PSListController <UINavigationControllerDelegate> {

	NSMutableDictionary* _enabledByAppID;
	PSTableCell* _serviceSectionCell;

}

@property (nonatomic,retain) NSMutableDictionary * enabledByAppID;              //@synthesize enabledByAppID=_enabledByAppID - In the implementation block
@property (nonatomic,retain) PSTableCell * serviceSectionCell;                  //@synthesize serviceSectionCell=_serviceSectionCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudKitNumAppGroups;
-(void)setAppPermissionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appPermissionEnabledForSpecifier:(id)arg1 ;
-(BOOL)_isApplicationHiddenFromSettings:(id)arg1 ;
-(NSMutableDictionary *)enabledByAppID;
-(PSTableCell *)serviceSectionCell;
-(void)setServiceSectionCell:(PSTableCell *)arg1 ;
-(void)setEnabledByAppID:(NSMutableDictionary *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)specifiers;
@end
