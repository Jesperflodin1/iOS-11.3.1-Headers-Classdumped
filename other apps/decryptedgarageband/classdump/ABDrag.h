//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface ABDrag : UIGestureRecognizer
{
    _Bool _started;
    struct CGPoint _originalPoint;
    struct CGPoint _lastPoint;
    struct CGPoint _previousPoint;
    double _firstTouchTime;
    double _previousTouchTime;
    double _lastTouchTime;
    _Bool _recognized;
    NSTimer *_timeoutTimer;
    NSTimer *_recogniseTimer;
    int _direction;
    unsigned long long _numberOfTouches;
    double _minimumDistance;
    double _timeoutDuration;
    double _minimumDuration;
}

@property(nonatomic) double minimumDuration; // @synthesize minimumDuration=_minimumDuration;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(nonatomic) double minimumDistance; // @synthesize minimumDistance=_minimumDistance;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long numberOfTouches; // @synthesize numberOfTouches=_numberOfTouches;
- (void).cxx_destruct;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)firstTouchLocationInView:(id)arg1;
- (struct CGSize)velocityInView:(id)arg1;
- (struct CGSize)offsetInView:(id)arg1;
- (void)reset;
- (_Bool)beginRecognisingGestureWithTouchLocation:(struct CGPoint)arg1 originalTouchLocation:(struct CGPoint)arg2 totalDistance:(double)arg3;
- (void)recogniseTimeout;
- (void)timeout;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

