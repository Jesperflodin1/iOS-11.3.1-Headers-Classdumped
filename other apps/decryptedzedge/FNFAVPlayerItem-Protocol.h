//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioMix, AVPlayerItemAccessLog, AVPlayerItemOutput, NSArray;
@protocol FNFAVAsset;

@protocol FNFAVPlayerItem <NSObject>
@property(copy, nonatomic) AVAudioMix *audioMix;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) long long status;
- (void)requestTimeLoadedUpdate;
- (void)addOutput:(AVPlayerItemOutput *)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (CDStruct_1b6d18a9)duration;
- (_Bool)isPlaybackLikelyToKeepUp;
- (_Bool)isPlaybackBufferFull;
- (id <FNFAVAsset>)asset;
- (AVPlayerItemAccessLog *)accessLog;
@end

