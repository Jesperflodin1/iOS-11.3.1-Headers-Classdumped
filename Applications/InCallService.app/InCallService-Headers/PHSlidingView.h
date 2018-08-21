//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PHSlidingButtonDelegateProtocol.h"

@class NSLayoutConstraint, NSString, PHSOSAlertController, PHSlidingButton, SBUIShapeView, UIViewPropertyAnimator;

@interface PHSlidingView : UIView <PHSlidingButtonDelegateProtocol>
{
    _Bool _isSlidingAnimatedSlidingButton;
    _Bool _hasTwoMiddleSliders;
    PHSlidingButton *_animatedSlidingButton;
    PHSlidingButton *_medicalIDSlidingButton;
    PHSlidingButton *_powerOffSlidingButton;
    NSLayoutConstraint *_medicalIDSliderBottomConstraint;
    NSLayoutConstraint *_animatedSliderTopConstraint;
    double _medicalIDSliderBottomConstraintConstant;
    double _animatedSliderTopConstraintConstant;
    UIViewPropertyAnimator *_sliderAnimator;
    CDUnknownBlockType _animatedSlidingButtonCompletionBlock;
    CDUnknownBlockType _medicalIDSlidingButtonCompletionBlock;
    CDUnknownBlockType _interactivelyAnimateSlidingButtonBlock;
    CDUnknownBlockType _sliderTimingBlock;
    SBUIShapeView *_darkeningUnderlayView;
    SBUIShapeView *_darkeningOverlayView;
    PHSOSAlertController *_alertController;
}

@property(retain, nonatomic) PHSOSAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SBUIShapeView *darkeningOverlayView; // @synthesize darkeningOverlayView=_darkeningOverlayView;
@property(retain, nonatomic) SBUIShapeView *darkeningUnderlayView; // @synthesize darkeningUnderlayView=_darkeningUnderlayView;
@property(copy, nonatomic) CDUnknownBlockType sliderTimingBlock; // @synthesize sliderTimingBlock=_sliderTimingBlock;
@property(copy, nonatomic) CDUnknownBlockType interactivelyAnimateSlidingButtonBlock; // @synthesize interactivelyAnimateSlidingButtonBlock=_interactivelyAnimateSlidingButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType medicalIDSlidingButtonCompletionBlock; // @synthesize medicalIDSlidingButtonCompletionBlock=_medicalIDSlidingButtonCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType animatedSlidingButtonCompletionBlock; // @synthesize animatedSlidingButtonCompletionBlock=_animatedSlidingButtonCompletionBlock;
@property(retain, nonatomic) UIViewPropertyAnimator *sliderAnimator; // @synthesize sliderAnimator=_sliderAnimator;
@property(nonatomic) _Bool hasTwoMiddleSliders; // @synthesize hasTwoMiddleSliders=_hasTwoMiddleSliders;
@property(nonatomic) double animatedSliderTopConstraintConstant; // @synthesize animatedSliderTopConstraintConstant=_animatedSliderTopConstraintConstant;
@property(nonatomic) double medicalIDSliderBottomConstraintConstant; // @synthesize medicalIDSliderBottomConstraintConstant=_medicalIDSliderBottomConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *animatedSliderTopConstraint; // @synthesize animatedSliderTopConstraint=_animatedSliderTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *medicalIDSliderBottomConstraint; // @synthesize medicalIDSliderBottomConstraint=_medicalIDSliderBottomConstraint;
@property(retain, nonatomic) PHSlidingButton *powerOffSlidingButton; // @synthesize powerOffSlidingButton=_powerOffSlidingButton;
@property(retain, nonatomic) PHSlidingButton *medicalIDSlidingButton; // @synthesize medicalIDSlidingButton=_medicalIDSlidingButton;
@property(retain, nonatomic) PHSlidingButton *animatedSlidingButton; // @synthesize animatedSlidingButton=_animatedSlidingButton;
@property(nonatomic) _Bool isSlidingAnimatedSlidingButton; // @synthesize isSlidingAnimatedSlidingButton=_isSlidingAnimatedSlidingButton;
- (void).cxx_destruct;
- (void)_powerOff;
- (void)_animatePowerDown;
- (void)_updatePowerOffSliderExclusionPath;
- (void)slidingButton:(id)arg1 didSlideToProportion:(double)arg2;
- (void)didFinishSlideForSlidingButton:(id)arg1;
- (void)willFinishSlideForSlidingButton:(id)arg1;
- (void)updateMiddleViewSliderConstraintConstants;
- (double)distanceBetweenMiddleSliders;
- (void)setUpConstraints;
- (void)updateAnimatedSliderForCountdownNumber:(unsigned long long)arg1 forTotalCount:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAnimatedSliderForCountdownNumber:(unsigned long long)arg1 forTotalCount:(unsigned long long)arg2 afterDelay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)repeatingUpdateAnimatedSliderForCountdownNumber:(unsigned long long)arg1 forModel:(id)arg2;
- (void)invalidateCountdownAndStopSounds;
- (void)interactiveStop;
- (void)interactiveStartWithCountdownModel:(id)arg1;
- (void)showSlidingViewModel:(id)arg1 animatedSliderCompletion:(CDUnknownBlockType)arg2 medicalIDSliderCompletion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
