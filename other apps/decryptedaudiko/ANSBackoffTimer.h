//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ANSBackoffTimer : NSObject
{
    unsigned long long _retryCount;
    double _initialValue;
    double _jitterCoefficient;
}

+ (_Bool)jitterCoefficientIsValid:(double)arg1;
@property(readonly, nonatomic) double jitterCoefficient; // @synthesize jitterCoefficient=_jitterCoefficient;
@property(nonatomic) double initialValue; // @synthesize initialValue=_initialValue;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (double)computeDelayForInitialValue:(double)arg1 retryCount:(unsigned long long)arg2;
- (double)generateRandomJitter;
- (double)randomDoubleWithMin:(double)arg1 max:(double)arg2;
- (void)executeBlockAfterNextInterval:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithInitialValue:(double)arg1 jitterCoefficient:(double)arg2;
- (id)initWithInitialValue:(double)arg1;

@end

