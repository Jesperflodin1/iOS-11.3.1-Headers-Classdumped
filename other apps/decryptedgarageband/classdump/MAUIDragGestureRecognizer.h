//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class EcTimer;

@interface MAUIDragGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;
    struct CGPoint _myLocationInView;
    EcTimer *_secondActionTimer;
    _Bool _secondPressTimeElapsed;
    float _secondPressTime;
}

@property(nonatomic) float secondPressTime; // @synthesize secondPressTime=_secondPressTime;
@property(readonly, nonatomic) _Bool secondPressTimeElapsed; // @synthesize secondPressTimeElapsed=_secondPressTimeElapsed;
- (void).cxx_destruct;
- (void)dealloc;
- (void)secondTimerAction:(id)arg1;
- (long long)state;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
