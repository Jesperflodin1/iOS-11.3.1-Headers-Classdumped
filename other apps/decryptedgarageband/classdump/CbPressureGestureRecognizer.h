//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, NSMutableOrderedSet;

@interface CbPressureGestureRecognizer : UIGestureRecognizer
{
    _Bool _needsPressureCallbackAtTouchesEnded;
    double _curvePressure;
    CDUnknownBlockType _pressureCallBack;
    unsigned long long _computedPressureFunction;
    NSMutableOrderedSet *_allTouches;
    NSMutableArray *_pressures;
    double _maxPressure;
    double _minPressure;
}

+ (unsigned long long)deviceType;
+ (_Bool)isDeviceTypePencil;
+ (_Bool)isDeviceTypeOrb;
+ (_Bool)isDeviceSupported;
@property(nonatomic) _Bool needsPressureCallbackAtTouchesEnded; // @synthesize needsPressureCallbackAtTouchesEnded=_needsPressureCallbackAtTouchesEnded;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(retain, nonatomic) NSMutableArray *pressures; // @synthesize pressures=_pressures;
@property(retain, nonatomic) NSMutableOrderedSet *allTouches; // @synthesize allTouches=_allTouches;
@property(nonatomic) unsigned long long computedPressureFunction; // @synthesize computedPressureFunction=_computedPressureFunction;
@property(copy, nonatomic) CDUnknownBlockType pressureCallBack; // @synthesize pressureCallBack=_pressureCallBack;
@property(nonatomic) double curvePressure; // @synthesize curvePressure=_curvePressure;
- (void).cxx_destruct;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void)reset;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) double minForceThreshold;
- (void)_processTouchesAndSendCallBack;
- (double)_floatFromMinMaxCurve:(double)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
