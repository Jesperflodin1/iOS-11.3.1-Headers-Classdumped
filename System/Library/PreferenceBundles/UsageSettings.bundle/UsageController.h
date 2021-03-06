/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CloudStorageGroupController, NSMutableArray, PSSpecifier;

@interface UsageController : PSListController {

	CloudStorageGroupController* _cloudGroup;
	NSMutableArray* _storageSpecifiers;
	PSSpecifier* _storageUsedSpecifier;
	PSSpecifier* _storageAvailableSpecifier;

}
-(id)usageStorageSpecifiers;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
@end

