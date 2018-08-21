/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NRGResourceCache : NSObject
+(id)iconCacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)createCachePathIfNecessaryWithPairedDeviceStorePath:(id)arg1 ;
+(id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)cacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(id)cacheDirPathForPairedDeviceStorePath:(id)arg1 ;
+(void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 ;
+(id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)invalidatePairedDevice:(id)arg1 ;
@end

