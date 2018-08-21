/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GameKitServices/GameKitServices-Structs.h>
@class NSObject;

@interface GKSimpleTimer : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject*<OS_dispatch_source> _timerSource;
	id _delegate;
	double _startTime;
	double _interval;
	BOOL _timerSourceSet;

}

@property (assign,nonatomic) id<GKSimpleTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double interval;                               //@synthesize interval=_interval - In the implementation block
-(id)init;
-(void)invalidate;
-(id<GKSimpleTimerDelegate>)delegate;
-(void)setDelegate:(id<GKSimpleTimerDelegate>)arg1 ;
-(void)dealloc;
-(void)setTimer:(double)arg1 ;
-(double)interval;
-(void)fireIn:(double)arg1 fromNow:(double)arg2 ;
@end

