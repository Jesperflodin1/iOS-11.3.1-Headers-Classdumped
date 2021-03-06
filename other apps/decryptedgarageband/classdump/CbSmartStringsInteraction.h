//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITouch;

@interface CbSmartStringsInteraction : NSObject
{
    unsigned char _mb3;
    _Bool _isValid;
    int _initialVelocity;
    int _gesture;
    int _bowDirection;
    int _bowedNote;
    unsigned long long _chordIndex;
    unsigned long long _inversionVariant;
    unsigned long long _instrumentIndex;
    long long _stringHit;
    long long _fretHit;
    long long _channel;
    id _owner;
    UITouch *_touch;
}

+ (id)nameForGesture:(int)arg1;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property __weak UITouch *touch; // @synthesize touch=_touch;
@property __weak id owner; // @synthesize owner=_owner;
@property(nonatomic) int bowedNote; // @synthesize bowedNote=_bowedNote;
@property(nonatomic) unsigned char mb3; // @synthesize mb3=_mb3;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(nonatomic) long long fretHit; // @synthesize fretHit=_fretHit;
@property(nonatomic) long long stringHit; // @synthesize stringHit=_stringHit;
@property(nonatomic) unsigned long long instrumentIndex; // @synthesize instrumentIndex=_instrumentIndex;
@property(nonatomic) unsigned long long inversionVariant; // @synthesize inversionVariant=_inversionVariant;
@property(nonatomic) unsigned long long chordIndex; // @synthesize chordIndex=_chordIndex;
@property(nonatomic) int bowDirection; // @synthesize bowDirection=_bowDirection;
@property(nonatomic) int gesture; // @synthesize gesture=_gesture;
@property(nonatomic) int initialVelocity; // @synthesize initialVelocity=_initialVelocity;
- (void).cxx_destruct;
- (id)gestureName;
- (void)reset;
- (id)init;

@end

