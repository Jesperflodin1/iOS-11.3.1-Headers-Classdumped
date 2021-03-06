//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DfMidiProgramHandler : NSObject
{
    NSMutableDictionary *m_instruments;
}

+ (void)checkAdvancedInstruments;
+ (void)checkBasicInstruments;
+ (id)instrumentPathForProgram:(long long)arg1;
+ (id)advancedInstrumentForProgram:(long long)arg1;
+ (id)basicInstrumentForProgram:(long long)arg1;
+ (void)initDictionary;
- (void).cxx_destruct;
- (id)dict;
- (id)init;

@end

