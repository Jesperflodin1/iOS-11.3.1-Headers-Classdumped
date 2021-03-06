/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, AFAudioPowerUpdaterDelegate, AFAudioPowerProviding;
@class NSObject;

@interface AFAudioPowerUpdater : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	id<AFAudioPowerUpdaterDelegate> _delegate;
	void* _sharedMemory;
	float _averagePower;
	float _peakPower;
	id<AFAudioPowerProviding> _provider;
	long long _frequency;

}

@property (nonatomic,readonly) id<AFAudioPowerProviding> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) long long frequency;                             //@synthesize frequency=_frequency - In the implementation block
-(void)_timerFired;
-(void)invalidate;
-(void)dealloc;
-(long long)frequency;
-(id<AFAudioPowerProviding>)provider;
-(void)_invalidate;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 frequency:(long long)arg3 delegate:(id)arg4 ;
-(float)_unsafeAveragePower;
-(float)_unsafePeakPower;
-(void)_getPowerWithCompletion:(/*^block*/id)arg1 ;
-(void)_createNewXPCWrapperWithCompletion:(/*^block*/id)arg1 ;
-(void)_updatePowerWithAveragePower:(float)arg1 andPeakPower:(float)arg2 ;
-(void)_writeSharedMemoryWithAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(void)_destroySharedMemory;
-(BOOL)_createSharedMemory;
-(id)_createNewXPCWrapper;
-(id)_createSharedMemoryXPCObject;
-(void)getPowerWithCompletion:(/*^block*/id)arg1 ;
-(void)createNewXPCWrapperWithCompletion:(/*^block*/id)arg1 ;
-(void)beginUpdate;
-(void)endUpdate;
-(void)_beginUpdate;
-(void)_endUpdate;
@end

