/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CPLNetworkWatcherDelegate;
#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
@class NSObject;

@interface CPLNetworkWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SCNetworkReachabilityRef _reachability;
	unsigned _reachabilityFlags;
	unsigned long long _networkState;
	id<CPLNetworkWatcherDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long networkState;                          //@synthesize networkState=_networkState - In the implementation block
@property (assign,nonatomic,__weak) id<CPLNetworkWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_descriptionForNetworkState:(unsigned long long)arg1 ;
-(unsigned long long)networkState;
-(id<CPLNetworkWatcherDelegate>)delegate;
-(void)setDelegate:(id<CPLNetworkWatcherDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)_updateState:(unsigned long long)arg1 ;
-(void)_teardownReachability;
-(void)_reachabilityFlagsDidChange:(unsigned)arg1 ;
-(void)_initialReachabilityTestFailed;
-(void)_setupReachability;
@end

