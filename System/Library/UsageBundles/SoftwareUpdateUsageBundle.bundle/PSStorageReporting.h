/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UsageBundles/SoftwareUpdateUsageBundle.bundle/SoftwareUpdateUsageBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSStorageReporting <NSObject>
@optional
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
-(float)sizeForCategory:(id)arg1;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2;

@required
-(id)usageBundleApps;
-(BOOL)allowDeletionForCategory:(id)arg1;

@end

