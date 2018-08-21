/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPResponse.h>

@protocol MPCVideoView;
@class MPCPlayerResponseTracklist, MPCMediaRemoteController, MPCPlayerPath, UIView;

@interface MPCPlayerResponse : MPResponse {

	MPCPlayerResponseTracklist* _tracklist;
	long long _state;
	MPCMediaRemoteController* _controller;
	MPCPlayerPath* _playerPath;
	UIView*<MPCVideoView> _videoView;

}

@property (nonatomic,readonly) id<MPCPlayerResponseBuilder> builder; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                            //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) UIView*<MPCVideoView> videoView;                       //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseTracklist * tracklist;              //@synthesize tracklist=_tracklist - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
+(id)builderProtocol;
-(id)description;
-(long long)state;
-(id)stop;
-(MPCMediaRemoteController *)controller;
-(id)play;
-(id)pause;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(UIView*<MPCVideoView>)videoView;
-(void)setVideoView:(UIView*<MPCVideoView>)arg1 ;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(MPCPlayerResponseTracklist *)tracklist;
-(MPCPlayerPath *)playerPath;
-(id)_commandRequestForMediaRemoteCommand:(unsigned)arg1 ;
@end

