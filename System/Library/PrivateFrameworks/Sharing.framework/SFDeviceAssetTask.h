/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class SFDeviceAssetQuery, NSObject, NSBundle, NSError;

@interface SFDeviceAssetTask : NSObject {

	BOOL _useProcessLocalCache;
	BOOL _fallbackIsCachedResult;
	SFDeviceAssetQuery* _deviceAssetQuery;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _completionHandler;
	NSBundle* _assetBundle;
	NSBundle* _fallbackAssetBundle;
	NSError* _error;

}

@property (nonatomic,readonly) SFDeviceAssetQuery * deviceAssetQuery;                   //@synthesize deviceAssetQuery=_deviceAssetQuery - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) BOOL useProcessLocalCache;                               //@synthesize useProcessLocalCache=_useProcessLocalCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSBundle * assetBundle;                                  //@synthesize assetBundle=_assetBundle - In the implementation block
@property (nonatomic,readonly) NSBundle * fallbackAssetBundle;                          //@synthesize fallbackAssetBundle=_fallbackAssetBundle - In the implementation block
@property (nonatomic,readonly) BOOL fallbackIsCachedResult;                             //@synthesize fallbackIsCachedResult=_fallbackIsCachedResult - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(id)completionHandler;
-(void)complete;
-(NSObject*<OS_dispatch_source>)timer;
-(NSError *)error;
-(SFDeviceAssetQuery *)deviceAssetQuery;
-(id)bundleURLFromAssetURL:(id)arg1 ;
-(BOOL)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(id)bundleAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(NSBundle *)assetBundle;
-(NSBundle *)fallbackAssetBundle;
-(BOOL)fallbackIsCachedResult;
-(void)cancelTimeout;
-(BOOL)processCanAccessURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithDeviceQuery:(id)arg1 dispatchQueue:(id)arg2 useProcessLocalCache:(BOOL)arg3 timeout:(double)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(BOOL)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(BOOL)useProcessLocalCache;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

