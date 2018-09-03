//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeUIXYPadView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MAVeRemixerXYPad, MAVeUIPressureTouchGestureRecognizer, NSString;

@interface MAVeRemixerUIXYPadView : MAVeUIXYPadView <UIGestureRecognizerDelegate>
{
    _Bool _motionModeOn;
    MAVeUIPressureTouchGestureRecognizer *_pressureGestureRecogizer;
}

+ (Class)drawableClass;
@property(readonly, nonatomic) MAVeUIPressureTouchGestureRecognizer *pressureGestureRecogizer; // @synthesize pressureGestureRecogizer=_pressureGestureRecogizer;
@property(nonatomic) _Bool motionModeOn; // @synthesize motionModeOn=_motionModeOn;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleForcePress:(id)arg1;
- (void)xyPadTouchLong:(id)arg1;
@property(readonly, nonatomic) MAVeRemixerXYPad *remixerXYPad;
- (void)setParameterNameYOffset:(struct CGPoint)arg1;
- (void)setParameterNameXOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

