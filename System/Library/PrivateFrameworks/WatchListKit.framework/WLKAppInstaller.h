/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface WLKAppInstaller : NSObject {

	NSObject*<OS_dispatch_queue> _installQueue;
	NSMutableSet* _installSessions;

}
+(id)defaultAppInstaller;
-(id)init;
-(void)installAppForInstallable:(id)arg1 offer:(id)arg2 progressHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)installAppForInstallable:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end
