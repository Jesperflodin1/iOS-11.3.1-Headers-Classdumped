//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol NSObject><CbMIDIFileImporterDelegate;

@interface CbMIDIFileImporter : NSObject
{
    NSMutableDictionary *midiDataCache;
    NSMutableDictionary *noteOnLookup;
    NSMutableArray *_currentEventQueue;
    id <NSObject><CbMIDIFileImporterDelegate> delegate;
    void *context;
    _Bool useEventQueue;
}

+ (id)sharedMIDIFileImporter;
@property _Bool useEventQueue; // @synthesize useEventQueue;
@property id <NSObject><CbMIDIFileImporterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)clearCache;
- (id)cacheMIDIfile:(id)arg1;
- (int)pushZipInfo:(id)arg1 context:(void *)arg2;
- (int)pushMIDIfile:(id)arg1 context:(void *)arg2;
- (int)pushMIDIFileData:(id)arg1;
- (void)noteOff:(unsigned long long)arg1 channel:(unsigned long long)arg2 mb3:(int)arg3 beat:(double)arg4;
- (void)noteOn:(unsigned long long)arg1 channel:(unsigned long long)arg2 velocity:(unsigned long long)arg3 beat:(double)arg4 mb3:(int)arg5;
- (void)_noteOff:(unsigned long long)arg1 channel:(unsigned long long)arg2 beat:(double)arg3 mb3:(int)arg4 isNoteOffMessage:(_Bool)arg5;
- (id)keyForNote:(unsigned long long)arg1 channel:(unsigned long long)arg2 mb3:(int)arg3;
- (int)pushNoteQueue:(id)arg1;
- (void)addEventToQueue:(struct CbMidiEvent)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)init;

@end
