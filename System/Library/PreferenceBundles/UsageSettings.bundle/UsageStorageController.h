/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSDate, PSSpecifier, NSMutableArray, SUManagerClient, NSString;

@interface UsageStorageController : PSListController {

	NSDate* _storageExpiry;
	double _timeoutLimit;
	BOOL _storageLookupInProgress;
	PSSpecifier* _appsStorageGroup;
	PSSpecifier* _photosSpecifier;
	NSMutableArray* _deferredUsageApps;
	SUManagerClient* _SUManager;
	NSString* _updateName;
	PSSpecifier* _storageUsedSpecifier;
	PSSpecifier* _storageAvailableSpecifier;
	unsigned long long _updateRequiredBytes;
	BOOL _openedFromSoftwareUpdate;
	BOOL _delayUsagePopulation;

}

@property (assign,nonatomic) BOOL openedFromSoftwareUpdate;              //@synthesize openedFromSoftwareUpdate=_openedFromSoftwareUpdate - In the implementation block
@property (assign,nonatomic) BOOL delayUsagePopulation;                  //@synthesize delayUsagePopulation=_delayUsagePopulation - In the implementation block
+(id)systemSizeUsed:(id)arg1 ;
+(id)systemSizeAvailable:(id)arg1 ;
+(id)storageUsedSpecifier;
+(id)storageAvailableSpecifier;
-(BOOL)delayUsagePopulation;
-(BOOL)openedFromSoftwareUpdate;
-(void)sizeChangedForSpecifier:(id)arg1 ;
-(void)removeStorageSpecifier:(id)arg1 ;
-(void)snapshotAndReportDiskSpace;
-(id)tapToRadarURLForAttributes:(id)arg1 ;
-(void)prepareForSnapshot;
-(void)didEnterForeground;
-(void)appDeletionComplete;
-(void)reloadStorageSummary;
-(void)checkForPendingUpdate;
-(void)refreshSoftwareUpdateRequiredSpace;
-(BOOL)storageExpired;
-(id)stringWithAppSizeForSpecifier:(id)arg1 ;
-(Class)usageDetailControllerForBundleID:(id)arg1 ;
-(id)_specifierForApp:(id)arg1 ;
-(BOOL)mediaCache:(id)arg1 hasGroups:(id)arg2 ;
-(id)_specifierForBundle:(id)arg1 ;
-(void)addStorageSpecifiers:(id)arg1 completed:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)didUnlock;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
-(void)setOpenedFromSoftwareUpdate:(BOOL)arg1 ;
-(void)setDelayUsagePopulation:(BOOL)arg1 ;
-(void)reloadSpecifiers;
@end
