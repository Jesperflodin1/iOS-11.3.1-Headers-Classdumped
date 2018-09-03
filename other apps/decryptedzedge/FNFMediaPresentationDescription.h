//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FNFMediaPresentationDescription : NSObject
{
    _Bool _isDynamic;
    _Bool _isFragmented;
    unsigned int _durationMS;
    long long _videoType;
    double _publishFrameTimeMS;
    NSArray *_videoTracks;
    NSArray *_audioTracks;
}

+ (id)urlFromBase:(id)arg1 suffix:(id)arg2;
+ (id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 segmentsFromEndToStartForLive:(unsigned int)arg3 error:(id *)arg4;
@property(readonly, copy, nonatomic) NSArray *audioTracks; // @synthesize audioTracks=_audioTracks;
@property(readonly, copy, nonatomic) NSArray *videoTracks; // @synthesize videoTracks=_videoTracks;
@property(readonly, nonatomic) double publishFrameTimeMS; // @synthesize publishFrameTimeMS=_publishFrameTimeMS;
@property(readonly, nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) unsigned int durationMS; // @synthesize durationMS=_durationMS;
@property(readonly, nonatomic) _Bool isFragmented; // @synthesize isFragmented=_isFragmented;
@property(readonly, nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
- (void).cxx_destruct;
- (id)initWithAudioTracks:(id)arg1 videoTracks:(id)arg2 isDynamic:(_Bool)arg3 isFragmented:(_Bool)arg4 durationMS:(unsigned int)arg5 videoType:(long long)arg6 publishFrameTime:(unsigned long long)arg7;

@end

