/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoContactsSettings.bundle/NanoContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray, NPSManager, NPSDomainAccessor;

@interface NCABSettingsShortNameController : PSListController {

	PSSpecifier* _shortNameEnabledSpecifier;
	PSSpecifier* _shortNameFormatsGroup;
	NSMutableArray* _shortNameFormatsSpecifiers;
	NPSManager* _syncManager;
	NPSDomainAccessor* _peoplePickerDomainAccessor;
	NPSDomainAccessor* _foundationDomainAccessor;
	BOOL _activePairedWatchRequiresLegacyKeys;

}
-(void)_setValue:(id)arg1 forKey:(id)arg2 syncWithClient:(BOOL)arg3 ;
-(id)shortNameFormat;
-(void)setShortNameFormat:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_getValueForKey:(id)arg1 ;
-(id)specifiers;
-(void)setShortNameEnabled:(id)arg1 ;
-(id)shortNameEnabled;
-(void)setPreferNicknames:(id)arg1 ;
-(id)preferNicknames;
@end

