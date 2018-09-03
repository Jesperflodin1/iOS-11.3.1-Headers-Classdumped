//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADVideoRendering-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString;

@interface GADVideoPlayerView : UIView <GADVideoRendering>
{
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    _Bool _playbackOptimizationEnabled;
    _Bool _playbackOptimizationDisabledBySDKCore;
}

- (void).cxx_destruct;
- (void)disableVideoPlaybackOptimization;
- (void)resetVideoPlaybackOptimization;
- (void)enableVideoPlaybackOptimization;
- (void)optimizeVideoForAdVisibility:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUpWithPlayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
