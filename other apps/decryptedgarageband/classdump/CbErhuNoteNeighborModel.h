//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CbErhuNoteNeighborModel : NSObject
{
    int _note;
    int _upperNeighbor;
    int _lowerNeighbor;
}

@property(readonly, nonatomic) int lowerNeighbor; // @synthesize lowerNeighbor=_lowerNeighbor;
@property(readonly, nonatomic) int upperNeighbor; // @synthesize upperNeighbor=_upperNeighbor;
@property(readonly, nonatomic) int note; // @synthesize note=_note;
- (id)description;
- (id)initWithNote:(int)arg1 upperNeighbor:(int)arg2 lowerNeighbor:(int)arg3;

@end

