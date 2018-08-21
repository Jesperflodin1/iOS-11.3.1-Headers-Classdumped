/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HapticClient, NSArray;

@interface AVHapticPlayer : NSObject {

	HapticClient* _client;
	BOOL _resourcesAllocated;
	unsigned long long _behavior;
	NSArray* _channelArray;

}

@property (readonly) HapticClient * client;                            //@synthesize client=_client - In the implementation block
@property (readonly) BOOL resourcesAllocated;                          //@synthesize resourcesAllocated=_resourcesAllocated - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) NSArray * channels; 
@property (readonly) double currentMediaTime; 
@property (readonly) double hapticLatency; 
+(BOOL)isSupported;
-(BOOL)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadHapticSequence:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadHapticPattern:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseChannels;
-(void)invalidateChannels;
-(double)hapticLatency;
-(BOOL)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)enableSequenceLooping:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)detachHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(unsigned long long)getBehavior;
-(BOOL)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3 ;
-(BOOL)setSequenceParam:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 param:(unsigned long long)arg4 value:(float)arg5 error:(id*)arg6 ;
-(BOOL)resourcesAllocated;
-(void)dealloc;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(double)currentMediaTime;
-(id)initAndReturnError:(id*)arg1 ;
-(BOOL)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)allocateRenderResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopRunning;
-(void)deallocateRenderResources;
-(void)prewarmWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPrewarm;
-(NSArray *)channels;
-(BOOL)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(HapticClient *)client;
@end

