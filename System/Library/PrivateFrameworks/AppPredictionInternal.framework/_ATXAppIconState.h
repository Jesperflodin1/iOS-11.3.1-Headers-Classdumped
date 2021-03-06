/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSSet, NSObject;

@interface _ATXAppIconState : NSObject {

	NSDictionary* _appLocation;
	NSSet* _dockedApps;
	NSSet* _folderApps;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)reload;
-(id)allAppsOnSpringboard;
-(id)allDockedApps;
-(id)allFolderApps;
-(BOOL)appOnDockWithBundleId:(id)arg1 ;
-(BOOL)appInFolderWithBundleId:(id)arg1 ;
-(long long)springboardPageNumberForBundleId:(id)arg1 ;
-(long long)springboardPageLocationForBundleId:(id)arg1 ;
-(long long)folderPageNumberForBundleId:(id)arg1 ;
-(void)parseIconState:(id)arg1 ;
-(id)loadIconState;
@end

