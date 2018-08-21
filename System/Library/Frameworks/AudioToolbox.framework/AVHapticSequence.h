/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVHapticPlayer;

@interface AVHapticSequence : NSObject {

	AVHapticPlayer* _player;
	unsigned long long _seqID;
	double _lastStartTime;
	BOOL _loopIsEnabled;
	unsigned long long _channelCount;
	unsigned long long _activeChannel;

}

@property (__weak) AVHapticPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (assign) unsigned long long seqID;                       //@synthesize seqID=_seqID - In the implementation block
@property (assign) double lastStartTime;                           //@synthesize lastStartTime=_lastStartTime - In the implementation block
@property (assign) unsigned long long activeChannel;               //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign) BOOL loopingEnabled; 
@property (readonly) unsigned long long channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
-(void)setSeqID:(unsigned long long)arg1 ;
-(void)setLastStartTime:(double)arg1 ;
-(double)lastStartTime;
-(BOOL)setLoopingEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)getChannelCount;
-(BOOL)prepareToPlayAndReturnError:(id*)arg1 ;
-(BOOL)playAtTime:(double)arg1 offset:(double)arg2 error:(id*)arg3 ;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)setParameter:(unsigned long long)arg1 value:(float)arg2 channel:(unsigned long long)arg3 atTime:(double)arg4 error:(id*)arg5 ;
-(BOOL)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(unsigned long long)seqID;
-(id)init;
-(void)dealloc;
-(AVHapticPlayer *)player;
-(void)setPlayer:(AVHapticPlayer *)arg1 ;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(unsigned long long)channelCount;
-(BOOL)loopingEnabled;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(unsigned long long)activeChannel;
@end

