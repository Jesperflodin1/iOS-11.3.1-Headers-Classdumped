//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CbStepSequenceRowModelDelegate-Protocol.h"

@class CbStepSequencePropertyNode, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol CbStepSequencerModelDelegate;

@interface CbStepSequencerModel : NSObject <CbStepSequenceRowModelDelegate>
{
    CDStruct_e28e794b _timeSignature;
    NSMutableDictionary *_UUIDToRowIndex;
    _Bool _sequenceHasSoloedRows;
    id <CbStepSequencerModelDelegate> _delegate;
    CbStepSequencePropertyNode *_propertyNode;
    NSMutableArray *_rows;
    unsigned long long _swing;
    unsigned long long _sequenceLength;
}

+ (_Bool)timeSignatureIsEqual:(CDStruct_e28e794b)arg1 otherTimeSignature:(CDStruct_e28e794b)arg2;
+ (_Bool)timeSignatureIsEqual:(CDStruct_e28e794b)arg1 forSequenceData:(id)arg2;
+ (unsigned long long)defaultNumberOfRows;
+ (id)defaultSequenceDataWithTimeSignature:(CDStruct_e28e794b)arg1 noteModels:(id)arg2 delegate:(id)arg3;
+ (id)titleForSwing:(unsigned long long)arg1;
@property(nonatomic) CDStruct_e28e794b timeSignature; // @synthesize timeSignature=_timeSignature;
@property(nonatomic) unsigned long long sequenceLength; // @synthesize sequenceLength=_sequenceLength;
@property(nonatomic) unsigned long long swing; // @synthesize swing=_swing;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) CbStepSequencePropertyNode *propertyNode; // @synthesize propertyNode=_propertyNode;
- (void).cxx_destruct;
- (unsigned long long)defaultSequenceLength;
- (unsigned long long)stepsPerRow:(unsigned long long)arg1;
- (void)updateSequenceHasSoloedRows;
- (_Bool)sequenceHasSoloedRows;
- (void)prepareForPatternAuthoring;
- (id)pages;
- (unsigned long long)numberOfPages;
- (unsigned long long)stepsPerRow;
- (unsigned long long)stepsPerPage;
- (id)sequenceLengthOptions;
- (unsigned long long)indexOfRowWithUUID:(id)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (id)addRowForNoteModel:(id)arg1;
- (short)midiClipSwing;
- (id)titleForSwing;
- (_Bool)isEmpty;
- (id)activeNoteModels;
- (void)setActiveNoteModels:(id)arg1;
@property(retain, nonatomic) NSDictionary *sequenceData;
- (id)initWithTimeSignature:(CDStruct_e28e794b)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

