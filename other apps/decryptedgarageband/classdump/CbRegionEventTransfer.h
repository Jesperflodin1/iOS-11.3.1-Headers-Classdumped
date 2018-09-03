//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DfRegionEventTransfer.h"

#import "CbMIDIFileImporterDelegate-Protocol.h"

@class NSArray, NSSet;

@interface CbRegionEventTransfer : DfRegionEventTransfer <CbMIDIFileImporterDelegate>
{
    long long _beatLength;
    int _lastImportBeatCount;
    NSArray *_noteAdjArray;
    NSArray *_strumNoteArray;
    NSSet *_disabledMb3Set;
}

+ (id)transferForPreviewWithDocument:(id)arg1 track:(id)arg2;
+ (id)transferWithDocument:(id)arg1 forRegion:(id)arg2 track:(id)arg3;
@property(copy, nonatomic) NSSet *disabledMb3Set; // @synthesize disabledMb3Set=_disabledMb3Set;
- (void).cxx_destruct;
- (void)rescaleEventVelocities:(unsigned long long)arg1;
- (long long)lastImportTotalLength:(_Bool)arg1;
- (unsigned short)addEventsFromTransfer:(id)arg1 transpose:(int)arg2 patternNumber:(unsigned short)arg3 sourceTag:(unsigned short)arg4;
- (void)addEventsFromTransfer:(id)arg1 transpose:(int)arg2 eventMetaData:(struct DfRegionEventTransferMetaData *)arg3;
- (void)addEventsFromTransfer:(id)arg1 transpose:(int)arg2 eventMetaData:(struct DfRegionEventTransferMetaData *)arg3 startOffset:(long long)arg4;
- (void)importMIDIStatus:(unsigned char)arg1 MB1:(unsigned char)arg2 MB2:(unsigned char)arg3 MB3:(unsigned char)arg4 toBeat:(double)arg5 context:(void *)arg6;
- (void)importNote:(unsigned long long)arg1 channel:(unsigned long long)arg2 withVelocity:(unsigned long long)arg3 MB3:(unsigned char)arg4 toBeat:(double)arg5 length:(double)arg6 context:(void *)arg7;
- (unsigned char)mb3FromString:(id)arg1;
- (void)_addMidiNote:(unsigned long long)arg1 channel:(unsigned long long)arg2 velocity:(BOOL)arg3 mb3:(BOOL)arg4 beat:(double)arg5 length:(double)arg6 ctx:(struct _CbRegionEventTransferContext *)arg7;
- (void)_addMidiByte:(BOOL)arg1 mb1:(BOOL)arg2 mb2:(BOOL)arg3 mb3:(BOOL)arg4 beat:(double)arg5 ctx:(struct _CbRegionEventTransferContext *)arg6;
- (unsigned short)addEventsWithZipInfo:(id)arg1 transpose:(int)arg2 patternNumber:(unsigned short)arg3 sourceTag:(unsigned short)arg4 flagsType:(int)arg5 chordInfo:(id)arg6;
- (unsigned short)addEventsFromMidiFile:(id)arg1 transpose:(int)arg2 patternNumber:(unsigned short)arg3 sourceTag:(unsigned short)arg4 flagsType:(int)arg5 chordInfo:(id)arg6;
- (unsigned short)addEventsWithZipInfo:(id)arg1 transpose:(int)arg2 patternNumber:(unsigned short)arg3 sourceTag:(unsigned short)arg4 flagsType:(int)arg5;
- (unsigned short)addEventsFromMidiFile:(id)arg1 transpose:(int)arg2 patternNumber:(unsigned short)arg3 sourceTag:(unsigned short)arg4 flagsType:(int)arg5;
- (void)addEventsWithZipInfo:(id)arg1 transpose:(int)arg2 eventMetaData:(struct DfRegionEventTransferMetaData *)arg3 flagsType:(int)arg4;
- (void)addEventsFromMidiFile:(id)arg1 transpose:(int)arg2 eventMetaData:(struct DfRegionEventTransferMetaData *)arg3 flagsType:(int)arg4;
- (void)addEventsWithZipInfo:(id)arg1 transpose:(int)arg2 eventMetaData:(struct DfRegionEventTransferMetaData *)arg3 flagsType:(int)arg4 startOffset:(long long)arg5 chordInfo:(id)arg6;
- (void)addEventsFromMidiFile:(id)arg1 transpose:(int)arg2 eventMetaData:(struct DfRegionEventTransferMetaData *)arg3 flagsType:(int)arg4 startOffset:(long long)arg5 chordInfo:(id)arg6;
- (long long)_beatLength;
- (void)_setBeatLength;

@end

