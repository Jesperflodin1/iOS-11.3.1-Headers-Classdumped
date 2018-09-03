//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@interface MSPitchbendWheel : UIControl
{
    double pitchbendStep;
    double modulationStep;
    double pitchbendValue;
    double modulationValue;
    struct CGRect deadZone;
    struct CGPoint centerPoint;
}

@property(nonatomic) double modulationValue; // @synthesize modulationValue;
@property(nonatomic) double pitchbendValue; // @synthesize pitchbendValue;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

