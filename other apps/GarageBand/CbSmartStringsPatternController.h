//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbPatternController.h"

#import "CbMIDIFileImporterDelegate-Protocol.h"

@class CbSmartStringsChordPatternProperties, NSMutableArray, NSMutableSet, NSTimer;
@protocol CbSmartStringsMb3Datasource, NSObject><CbMidiInputProtocol><CbSmartStringsMb3Datasource;

@interface CbSmartStringsPatternController : CbPatternController <CbMIDIFileImporterDelegate>
{
    CbSmartStringsChordPatternProperties *_groovePatternProperties;
    CbSmartStringsChordPatternProperties *_chordPatternProperties;
    NSMutableArray *_instrumentStatusArray;
    NSMutableSet *_mb3sToFilter;
    unsigned long long _numInstruments;
    int _chordTranspose;
    NSTimer *_stopNotesTimer;
    int patternVelocityCeiling;
    int patternVelocityFloor;
    id <CbSmartStringsMb3Datasource> _dataSource;
}

@property __weak id <CbSmartStringsMb3Datasource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long numInstruments; // @synthesize numInstruments=_numInstruments;
- (void).cxx_destruct;
- (void)_velocitySensitivityChanged:(id)arg1;
- (void)reset;
- (void)stop;
- (void)stopNotes;
- (void)stopNotesForRecognizer:(id)arg1;
- (void)importNote:(unsigned long long)arg1 channel:(unsigned long long)arg2 withVelocity:(unsigned long long)arg3 MB3:(unsigned char)arg4 toBeat:(double)arg5 length:(double)arg6 context:(void *)arg7;
- (unsigned char)mb3FromString:(id)arg1;
- (void)_loadHitWithZipInfo:(id)arg1 properties:(id)arg2;
- (void)_loadHitWithFilePath:(id)arg1 properties:(id)arg2;
- (void)_replaceChordWithZipInfo:(id)arg1;
- (void)_replaceChordWithFilePath:(id)arg1;
- (void)_startChordWithZipInfo:(id)arg1 velocity:(unsigned char)arg2;
- (void)_startChordWithFilePath:(id)arg1 velocity:(unsigned char)arg2;
- (id)_zipInfoForChordVariant:(unsigned long long)arg1 chordInfo:(id)arg2 transposeAmt:(int *)arg3;
- (id)_pathForChordVariant:(unsigned long long)arg1 chordInfo:(id)arg2 transposeAmt:(int *)arg3;
- (void)_resetStopNotesTimer;
- (void)_flushStopNotesTimer;
- (void)_commenceStopNotesTimer;
- (void)startNotesForChordInfo:(id)arg1 variantIndex:(unsigned long long)arg2 withVelocity:(unsigned char)arg3 forGesture:(int)arg4 forRecognizer:(id)arg5;
- (void)startBowingForChordInfo:(id)arg1 variantIndex:(unsigned long long)arg2;
- (void)stopGroove;
- (id)_zipInfoForGrooveIndex:(unsigned long long)arg1 chordString:(id)arg2 altIndex:(unsigned long long)arg3 transposeAmt:(int *)arg4;
- (id)_groovePathForGrooveIndex:(unsigned long long)arg1 chordString:(id)arg2 altIndex:(unsigned long long)arg3 transposeAmt:(int *)arg4;
- (void)toggleGrooveForChordInfo:(id)arg1 position:(unsigned long long)arg2 altIndex:(unsigned long long)arg3 stopIfStarted:(_Bool)arg4 startIfStopped:(_Bool)arg5 forGrooveChange:(_Bool)arg6;
- (void)setGrooveIndex:(unsigned long long)arg1;
- (void)_updateInstrumentsToFilter;
- (void)setInstrumentAtPosition:(unsigned long long)arg1 toEnabled:(_Bool)arg2;
- (id)initWithGrooveCategoryName:(id)arg1 grooveSetName:(id)arg2 keyString:(id)arg3 document:(id)arg4 track:(id)arg5;

// Remaining properties
@property(nonatomic) id <NSObject><CbMidiInputProtocol><CbSmartStringsMb3Datasource> midiDelegate; // @dynamic midiDelegate;

@end

