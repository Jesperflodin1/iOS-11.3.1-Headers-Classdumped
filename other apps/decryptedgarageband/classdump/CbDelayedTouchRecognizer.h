//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface CbDelayedTouchRecognizer : UIGestureRecognizer
{
    double _timeoutDuration;
    double _xDeltaFailureAmount;
    double _yDeltaFailureAmount;
    NSTimer *_timeoutTimer;
}

@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) double yDeltaFailureAmount; // @synthesize yDeltaFailureAmount=_yDeltaFailureAmount;
@property(nonatomic) double xDeltaFailureAmount; // @synthesize xDeltaFailureAmount=_xDeltaFailureAmount;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
- (void).cxx_destruct;
- (void)_resetTimer;
- (void)_timeout;
- (void)_startTimer;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
