//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LgGridObserver-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol LgGridController, LgTransientMidiClipObserver;

@interface LgTransientClipsModel : NSObject <LgGridObserver>
{
    struct CSongTron *_song;
    id <LgTransientMidiClipObserver> _observer;
    id <LgGridController> _gridController;
    NSMutableDictionary *_clips;
    struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int>> _instruments;
    _Bool _disableMutualExclusion;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)stopClips:(id)arg1 at:(struct _LgClipTime)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)playClips:(id)arg1 at:(struct _LgClipTime)arg2;
- (_Bool)updateClip:(id)arg1 withMidiSequence:(id)arg2;
- (id)createClipWithMidiSequence:(id)arg1 withInstID:(int)arg2;
- (_Bool)removeClip:(id)arg1;
- (_Bool)removeAllClips;
- (void)_logicStoppedOrPausedClips:(id)arg1;
- (void)dealloc;
- (id)initWithLogicDocument:(struct LGDOCUMENT *)arg1 observer:(id)arg2 disableMutualExclusion:(_Bool)arg3;
- (void)observeClip:(int)arg1 event:(int)arg2 clock:(long long)arg3;
- (void)observeGrid:(int)arg1 event:(unsigned int)arg2 change:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

