/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AudioPasscode/AudioPasscode-Structs.h>
@class AVAudioSession, AVAudioEngine, AVAudioUnit, AUPasscodeEncoder, AVAudioPlayerNode, AVAudioPCMBuffer, NSObject;

@interface APCPlayerEngine : NSObject {

	AVAudioSession* _session;
	AVAudioEngine* _engine;
	AVAudioUnit* _encoderAUNode;
	AUPasscodeEncoder* _encoderAU;
	AVAudioPlayerNode* _player;
	AVAudioPCMBuffer* _assetBuffer;
	BOOL _isRunning;
	float _prePlayVolume;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _stopEngineCompletion;

}

@property (nonatomic,copy) id stopEngineCompletion;                                   //@synthesize stopEngineCompletion=_stopEngineCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)playerWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(id)createAU:(AudioComponentDescription)arg1 ;
-(void)_stopAudioEngineAndSession;
-(id)stopEngineCompletion;
-(void)createEngineAndAttachNodes;
-(void)makeEngineConnections;
-(float)evaluateAsset;
-(void)endPasscodeEmbedding;
-(void)stopEngine:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stopEngineWithFadeOut:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopEngineAfterMinimumLoops:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setStopEngineCompletion:(id)arg1 ;
-(void)setupAudioSession;
-(BOOL)startEngine;
@end

