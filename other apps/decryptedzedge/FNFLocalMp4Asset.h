//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAsynchronousKeyValueLoading-Protocol.h"
#import "FNFAVAsset-Protocol.h"
#import "FNFAVPlayerItem-Protocol.h"
#import "FNFAssetForPlayer-Protocol.h"
#import "FNFInfoForLoopableAsset-Protocol.h"

@class AVAsset, AVAssetReader, AVAssetReaderOutput, AVAssetReaderTrackOutput, AVAudioMix, NSArray, NSError, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FNFLocalMp4Asset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset>
{
    CDUnknownBlockType _assetLoadedHandler;
    NSURL *_localURL;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _playbackTime;
    CDStruct_1b6d18a9 _startingPlaybackTime;
    struct opaqueCMFormatDescription *_formatDesc;
    struct AudioStreamBasicDescription _asbd;
    NSArray *_loadedTimeRanges;
    unsigned int _timescale;
    unsigned int _audioTimescale;
    _Bool _hasFailed;
    _Bool _parsedHeader;
    NSError *_loadingError;
    _Bool _async;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AVAsset *_videoAsset;
    AVAssetReader *_videoAssetReader;
    AVAssetReaderOutput *_videoAssetReaderTrackOutput;
    struct opaqueCMSampleBuffer *_videoSampleBuffer;
    struct CGSize _naturalSize;
    struct CGAffineTransform _preferredTransform;
    AVAssetReader *_audioAssetReader;
    AVAssetReaderTrackOutput *_audioAssetReaderTrackOutput;
    struct opaqueCMSampleBuffer *_audioSampleBuffer;
    struct OpaqueCMBlockBuffer *_audioBlockBuffer;
    int _numberOfPackets;
    const struct AudioStreamPacketDescription *_inPacketDescriptions;
    struct AudioBuffer _audioBuffer;
    int _currentAudioBufferIndex;
    float _fps;
    _Bool _isOutputDecompressed;
    _Bool _videoBufferEnded;
    struct CGSize _containerDimensions;
}

- (void).cxx_destruct;
- (_Bool)decompressedFramebuffer;
- (CDStruct_1b6d18a9)videoTrackDuration;
- (void)printASBD:(struct AudioStreamBasicDescription)arg1;
- (int)_currentAudioBufferIndex;
- (void)_getAudioPacketDescriptions;
- (void)_releaseAudioBufferIfNeeded;
- (id)debugDetails;
- (void)playbackPauseRequested;
- (void)playbackStarted;
- (id)resourceLoader;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges;
- (unsigned int)audioTimescale;
- (unsigned int)timescale;
- (id)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
@property(copy, nonatomic) AVAudioMix *audioMix;
- (_Bool)isPlaybackBufferFull;
- (_Bool)isPlaybackLikelyToKeepUp;
- (void)addOutput:(id)arg1;
- (id)accessLog;
- (id)tracksWithMediaType:(id)arg1;
- (void)cancelLoading;
@property(readonly, nonatomic) long long status;
- (CDStruct_1b6d18a9)currentTime;
- (void)addErrorToLog:(id)arg1 shouldStopPlayback:(_Bool)arg2;
- (id)asset;
- (id)URLIfExists;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minBufferTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxBufferTime;
- (_Bool)shouldRestartAfterStalling;
- (_Bool)shouldPauseForStallingWithNextCheckCallback:(CDUnknownBlockType)arg1;
- (_Bool)shouldBufferVideoAsSoonAsPossible;
- (void)advanceFrameForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1;
- (_Bool)containsTrack:(long long)arg1;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (_Bool)is30MSFrame:(struct opaqueCMSampleBuffer *)arg1;
- (CDStruct_1b6d18a9)timeAfterSeek;
- (_Bool)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)resetAssetToBeginningIfNeeded;
- (void)requestTimeLoadedUpdate;
- (CDStruct_1b6d18a9)duration;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)updatePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (struct CGSize)naturalSize;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)createAudioReader:(CDStruct_1b6d18a9)arg1;
- (_Bool)createVideoReader:(CDStruct_1b6d18a9)arg1;
- (struct CGAffineTransform)preferredTransform;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithLocalURL:(id)arg1 async:(_Bool)arg2 decompressedOutput:(_Bool)arg3 containerDimensions:(struct CGSize)arg4;
- (id)initWithLocalURL:(id)arg1 decompressedOutput:(_Bool)arg2 containerDimensions:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

