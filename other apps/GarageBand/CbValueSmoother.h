//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CbValueSmoother : NSObject
{
    _Bool _queued;
    CDUnknownBlockType _floatSmoother;
    CDUnknownBlockType _integerSmoother;
    NSNumber *_destinationValue;
    NSNumber *_latestValue;
    double _smoothingIntensity;
    double _timeDelta;
    double _floatTolerance;
    double _integerTolerance;
}

@property(nonatomic) _Bool queued; // @synthesize queued=_queued;
@property(nonatomic) double integerTolerance; // @synthesize integerTolerance=_integerTolerance;
@property(nonatomic) double floatTolerance; // @synthesize floatTolerance=_floatTolerance;
@property(nonatomic) double timeDelta; // @synthesize timeDelta=_timeDelta;
@property(nonatomic) double smoothingIntensity; // @synthesize smoothingIntensity=_smoothingIntensity;
@property(retain, nonatomic) NSNumber *latestValue; // @synthesize latestValue=_latestValue;
@property(retain, nonatomic) NSNumber *destinationValue; // @synthesize destinationValue=_destinationValue;
@property(copy, nonatomic) CDUnknownBlockType integerSmoother; // @synthesize integerSmoother=_integerSmoother;
@property(copy, nonatomic) CDUnknownBlockType floatSmoother; // @synthesize floatSmoother=_floatSmoother;
- (void).cxx_destruct;
- (void)endSmoothing;
- (void)update;
- (id)init;

@end

