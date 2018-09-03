//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGenGFModule.h"

@class CGenGFMatrix, CGenGFPortPatternAndProbs, CGenGFPortString;

@interface CGenGFModule2DMatrix : CGenGFModule
{
    CGenGFPortPatternAndProbs *inputPatterns;
    CGenGFPortString *inputRow;
    CGenGFPortPatternAndProbs *outputPatterns;
    CGenGFPortString *_inputColumnPort;
    CGenGFMatrix *matrix;
}

+ (_Bool)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;
@property(readonly, nonatomic) CGenGFMatrix *matrix; // @synthesize matrix;
- (void).cxx_destruct;
- (_Bool)execute:(id)arg1 arguments:(id)arg2;
- (_Bool)setState:(id)arg1;
- (id)state;
- (_Bool)useColumn;
- (void)setUseColumn:(_Bool)arg1;
- (void)cleanup:(id)arg1;
- (_Bool)setup:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
