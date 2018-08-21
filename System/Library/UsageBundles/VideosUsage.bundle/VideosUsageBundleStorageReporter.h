/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UsageBundles/VideosUsage.bundle/VideosUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUsage/PSStorageReporting.h>

@class NSString;

@interface VideosUsageBundleStorageReporter : NSObject <PSStorageReporting> {

	BOOL _shouldShowVideosiTunesU;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2 ;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(id)dataSourceForCategory:(id)arg1 indexPath:(id)arg2 ;
-(unsigned long long)_sizeForCategoryIdentifier:(id)arg1 ;
-(id)init;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
-(unsigned long long)totalSize;
@end

