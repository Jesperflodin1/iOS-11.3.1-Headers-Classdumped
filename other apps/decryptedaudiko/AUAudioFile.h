//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVURLAsset;

@interface AUAudioFile : NSObject
{
    _Bool _isStopped;
    AVURLAsset *_asset;
    unsigned long long _backgroundUpdateTask;
}

@property(nonatomic) unsigned long long backgroundUpdateTask; // @synthesize backgroundUpdateTask=_backgroundUpdateTask;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(retain, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)endBackgroundUpdateTask;
- (void)beginBackgroundUpdateTask;
- (void)renderWaveForSize:(struct CGSize)arg1 done:(CDUnknownBlockType)arg2 persents:(CDUnknownBlockType)arg3;
- (void)plotLogGraph:(float *)arg1 maximumValue:(float)arg2 sampleCount:(long long)arg3 imageHeight:(float)arg4 done:(CDUnknownBlockType)arg5;
- (void)getWaveFormForViewSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2 persents:(CDUnknownBlockType)arg3;

@end
