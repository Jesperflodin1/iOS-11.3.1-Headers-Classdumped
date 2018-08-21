/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Haptics/Haptics-Structs.h>
@class NSObject, AVHapticPlayer, NSTimer;

@interface HPHapticEngine : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AVHapticPlayer* _player;
	NSTimer* _timer;
	double _runTimeout;
	bitset<20> _channelSet;
	BOOL _running;

}

@property (readonly) AVHapticPlayer * player;              //@synthesize player=_player - In the implementation block
@property (assign) BOOL running;                           //@synthesize running=_running - In the implementation block
@property (readonly) double currentTime; 
-(id)init;
-(void)dealloc;
-(void)stop;
-(id)initAndReturnError:(id*)arg1 ;
-(double)currentTime;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(AVHapticPlayer *)player;
-(id)getAvailableChannel;
-(void)releaseChannel:(id)arg1 ;
-(void)dispatchOnMain:(/*^block*/id)arg1 ;
-(void)dispatchOnLocal:(/*^block*/id)arg1 ;
-(void)startIdleTimerWithHandler:(/*^block*/id)arg1 ;
-(void)cancelIdleTimer;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)createPlayerWithPattern:(id)arg1 error:(id*)arg2 ;
@end
