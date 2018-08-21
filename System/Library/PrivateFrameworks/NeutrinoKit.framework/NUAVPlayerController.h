/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUAVPlayerControllerDelegate;
#import <NeutrinoKit/NeutrinoKit-Structs.h>
@class NSMutableArray, AVPlayer, AVAsset, AVVideoComposition, AVAudioMix;

@interface NUAVPlayerController : NSObject {

	struct {
		BOOL registeredPlayer;
	}  _playerControllerKVOFlags;
	NSMutableArray* _playerItemObservations;
	BOOL _loopsVideo;
	BOOL _muted;
	AVPlayer* _player;
	double _updateInterval;
	AVAsset* _videoAsset;
	AVVideoComposition* _videoComposition;
	AVAudioMix* _audioMix;
	id<NUAVPlayerControllerDelegate> _delegate;

}

@property (nonatomic,retain) AVPlayer * player;                                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) double updateInterval;                                         //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,readonly) AVAsset * videoAsset;                                        //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * videoComposition;                       //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,readonly) AVAudioMix * audioMix;                                       //@synthesize audioMix=_audioMix - In the implementation block
@property (assign,nonatomic,__weak) id<NUAVPlayerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL loopsVideo;                                               //@synthesize loopsVideo=_loopsVideo - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                     //@synthesize muted=_muted - In the implementation block
-(id)init;
-(id<NUAVPlayerControllerDelegate>)delegate;
-(void)setDelegate:(id<NUAVPlayerControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(void)play;
-(void)pause;
-(void)_removePlayerItemKVO:(id)arg1 ;
-(void)_removePlayerKVO;
-(void)_addPlayerItemKVO:(id)arg1 ;
-(void)_addPlayerKVO;
-(BOOL)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4 ;
-(void)updateVideoComposition:(id)arg1 ;
-(void)updateAudioMix:(id)arg1 ;
-(void)setLoopsVideo:(BOOL)arg1 ;
-(void)seekForward;
-(void)seekBack;
-(BOOL)loopsVideo;
-(AVPlayer *)player;
-(AVAsset *)videoAsset;
-(AVVideoComposition *)videoComposition;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)_setRate:(float)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(AVAudioMix *)audioMix;
@end

