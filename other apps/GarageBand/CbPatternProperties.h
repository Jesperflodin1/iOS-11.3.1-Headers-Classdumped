//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CbCustomChordInfo;

@interface CbPatternProperties : NSObject
{
    unsigned long long _positionIndex;
    unsigned long long _grooveIndex;
    unsigned long long _variantIndex;
    int _location;
    unsigned short _UID;
    CbCustomChordInfo *_chordInfo;
}

@property unsigned short UID; // @synthesize UID=_UID;
@property(copy, nonatomic) CbCustomChordInfo *chordInfo; // @synthesize chordInfo=_chordInfo;
@property int location; // @synthesize location=_location;
@property unsigned long long variantIndex; // @synthesize variantIndex=_variantIndex;
@property unsigned long long grooveIndex; // @synthesize grooveIndex=_grooveIndex;
@property unsigned long long positionIndex; // @synthesize positionIndex=_positionIndex;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (id)init;

@end
