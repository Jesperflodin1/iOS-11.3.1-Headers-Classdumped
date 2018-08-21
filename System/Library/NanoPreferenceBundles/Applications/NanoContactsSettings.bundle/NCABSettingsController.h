/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoContactsSettings.bundle/NanoContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class PSSpecifier, NPSManager, NPSDomainAccessor;

@interface NCABSettingsController : BPSNotificationAppController {

	PSSpecifier* _contactsSortOrderSpecifier;
	PSSpecifier* _personNameOrderSpecifier;
	NPSManager* _syncManager;
	NPSDomainAccessor* _peoplePickerDomainAccessor;
	NPSDomainAccessor* _foundationDomainAccessor;
	BOOL _activePairedWatchRequiresLegacyKeys;

}
+(void)mapFoundationPreferenceKeysAndValues:(id)arg1 toLegacyDomainAccessor:(id)arg2 withSyncManager:(id)arg3 ;
+(id)peoplePickerKeys;
+(id)foundationKeys;
-(void)synchronizeContactsSettings:(BOOL)arg1 ;
-(id)_getValueForKey:(id)arg1 inDomainAccessor:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 inDomainAccessor:(id)arg3 syncWithClient:(BOOL)arg4 ;
-(id)foundationKeysAndValuesUsingDomainAccessor:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)suppressAlertSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)mirroredApplicationGroupSpecifiers;
-(id)localizedPaneTitle;
-(void)mirrorSettingsChanged:(BOOL)arg1 ;
-(id)contactsSortOrder:(id)arg1 ;
-(void)setContactsSortOrder:(id)arg1 specifier:(id)arg2 ;
-(id)personNameOrder:(id)arg1 ;
-(void)setPersonNameOrder:(id)arg1 specifier:(id)arg2 ;
-(void)_contactStoreDidChange:(id)arg1 ;
-(id)applicationBundleIdentifier;
@end

