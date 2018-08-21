/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XBLaunchImageProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 firstImageIsReady:(/*^block*/id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(/*^block*/id)createLaunchImageGeneratorWithContext:(id)arg1 ;
-(void)preheatServiceWithTimeout:(double)arg1 ;
-(void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 dataProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

