/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AppWirelessDataUsageManager : NSObject {

	BOOL _showInternalDetails;
	BOOL _cancelled;
	NSArray* _managedBundleIDs;

}

@property (getter=isCancelled) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) NSArray * managedBundleIDs;              //@synthesize managedBundleIDs=_managedBundleIDs - In the implementation block
@property (nonatomic,readonly) BOOL showInternalDetails;                //@synthesize showInternalDetails=_showInternalDetails - In the implementation block
+(id)displayNameForAppProxy:(id)arg1 ;
+(id)displayNameForBundleIdentifier:(id)arg1 ;
+(id)coverBundleIdentifiersForBundleIdentifierDict;
+(id)displayNameForBundleIdentifiers:(id)arg1 ;
+(id)coverDisplayNameForAppProxy:(id)arg1 ;
+(id)dataUsageWorkspace;
+(id)forcedBundleIdentiferForBundleIdentifier:(id)arg1 ;
+(id)omittedBundleIdentifiers;
+(void)retrieveDataUsageWorkspaceInfo:(id)arg1 ;
+(void)setAppCellularDataEnabled:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)appCellularDataEnabledForBundleIdentifier:(id)arg1 modificationAllowed:(BOOL*)arg2 ;
+(void)setAppWirelessDataOption:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)appWirelessDataOptionForBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)managedCellularDataBundleIdentifiers;
-(NSArray *)managedBundleIDs;
-(id)alwaysDisplayedBundleIdentifiers;
-(void)_categorizeApps:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_handleDataUsageInfoChanged;
-(void)_handleSIMStatusReady;
-(void)calculateDataUsageWithWorkspace:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)showInternalDetails;
@end

