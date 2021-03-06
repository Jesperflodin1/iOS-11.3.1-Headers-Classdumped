/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/StoragePlugins/UsagePlugin.bundle/UsagePlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSStoragePlugin.h>
#import <UsagePlugin/PSStorageOptionTipDelegate.h>

@protocol PSStorageReporting;
@class NSString, NSArray, PSStorageOptionTip, PSStorageActionTip, PSUsageBundleApp;

@interface STStorageUsagePlugin : PSStoragePlugin <PSStorageOptionTipDelegate> {

	NSString* _identifier;
	NSArray* _tips;
	PSStorageOptionTip* _offloadAppsTip;
	PSStorageActionTip* _reviewAppsTip;
	PSStorageActionTip* _hlsReviewTip;
	PSStorageActionTip* _tvReviewTip;
	id<PSStorageReporting> _tvReporter;
	PSUsageBundleApp* _tvUsageBundleApp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tvUsageBundleApp;
-(void)setAutoDemoteEnabled:(BOOL)arg1 ;
-(BOOL)isAutoDemoteEnabled;
-(long long)hlsSize:(id*)arg1 ;
-(id)identifier;
-(id)tips;
-(void)enableOptionForTip:(id)arg1 ;
@end

