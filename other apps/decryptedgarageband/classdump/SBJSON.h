//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBJsonBase.h"

#import "SBJsonParser-Protocol.h"
#import "SBJsonWriter-Protocol.h"

@class SBJsonParser, SBJsonWriter;

@interface SBJSON : SBJsonBase <SBJsonParser, SBJsonWriter>
{
    SBJsonParser *jsonParser;
    SBJsonWriter *jsonWriter;
}

@property _Bool sortKeys;
@property _Bool humanReadable;
- (void)setMaxDepth:(unsigned long long)arg1;
- (unsigned long long)maxDepth;
- (id)objectWithString:(id)arg1 error:(id *)arg2;
- (id)fragmentWithString:(id)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1 allowScalar:(_Bool)arg2 error:(id *)arg3;
- (id)objectWithString:(id)arg1;
- (id)stringWithObject:(id)arg1 error:(id *)arg2;
- (id)stringWithFragment:(id)arg1 error:(id *)arg2;
- (id)stringWithObject:(id)arg1 allowScalar:(_Bool)arg2 error:(id *)arg3;
- (id)stringWithObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

