//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "MPDetailScrubControllerDelegate.h"
#import "MPDetailedScrubbing.h"

@class MPDetailScrubController, NSString, UIImageView;

@interface VMDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>
{
    _Bool _accessibilityConstraintsEnabled;
    _Bool _scrubbing;
    id <VMDetailSliderDelegate> _delegate;
    double _maximumTime;
    double _elapsedTime;
    double _minimumTime;
    UIImageView *_thumbImageView;
    MPDetailScrubController *_detailScrubController;
}

@property(readonly, nonatomic) MPDetailScrubController *detailScrubController; // @synthesize detailScrubController=_detailScrubController;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(readonly, nonatomic) double minimumTime; // @synthesize minimumTime=_minimumTime;
@property(nonatomic, getter=isAccessibilityConstraintsEnabled) _Bool accessibilityConstraintsEnabled; // @synthesize accessibilityConstraintsEnabled=_accessibilityConstraintsEnabled;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) double maximumTime; // @synthesize maximumTime=_maximumTime;
@property(nonatomic) __weak id <VMDetailSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateMinimumTrackImage;
- (void)updateMaximumTrackImage;
- (void)updateTrackImages;
- (void)updateThumbImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (struct CGRect)thumbHitRect;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (id)createThumbView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setElapsedTime:(double)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)setElapsedTime:(double)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
