/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSCLAudioPlayerDelegate;
@class AVAsset, CADisplayLink, AVPlayer, AVPlayerItem, MSCLAudioPlayerStatus;

@interface MSCLAudioPlayer : NSObject {

	AVAsset* _asset;
	id<MSCLAudioPlayerDelegate> _delegate;
	CADisplayLink* _displayLink;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	id _representedObject;
	MSCLAudioPlayerStatus* _status;
	id _timeObserver;
	BOOL _usesCADisplayLink;

}

@property (assign,nonatomic,__weak) id<MSCLAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id representedObject;                                     //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy,readonly) MSCLAudioPlayerStatus * status;                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL usesCADisplayLink;                                   //@synthesize usesCADisplayLink=_usesCADisplayLink - In the implementation block
-(id<MSCLAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<MSCLAudioPlayerDelegate>)arg1 ;
-(void)dealloc;
-(void)stop;
-(MSCLAudioPlayerStatus *)status;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithAsset:(id)arg1 ;
-(void)play;
-(void)pause;
-(void)_displayLinkTick:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)_itemFailedToPlayToEndNotification:(id)arg1 ;
-(void)togglePlayback;
-(void)_destroyPlayer;
-(void)_setPlayerState:(long long)arg1 ;
-(void)_itemPlayedToEndNotification:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)_updateStatusWithCurrentTime:(double)arg1 ;
-(void)_sendStatusDidChange;
-(BOOL)usesCADisplayLink;
-(void)setUsesCADisplayLink:(BOOL)arg1 ;
@end

