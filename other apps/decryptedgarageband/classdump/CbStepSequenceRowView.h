//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CbStepSequenceLoopEditLayer, CbStepSequenceNextStepBadgeView, CbStepSequenceRowHeaderButton, NSMutableArray, UIImageView;
@protocol CbStepSequenceRowViewDelegate;

@interface CbStepSequenceRowView : UIView
{
    NSMutableArray *_stepViews;
    CbStepSequenceLoopEditLayer *_sequenceEditLayer;
    unsigned long long _stepCount;
    long long _startIndex;
    long long _endIndex;
    CbStepSequenceRowHeaderButton *_muteButton;
    CbStepSequenceRowHeaderButton *_soloButton;
    UIImageView *_iconImageView;
    UIView *_iconContainer;
    unsigned long long _icon;
    CbStepSequenceNextStepBadgeView *_nextStepBadgeView;
    _Bool _expanded;
    _Bool _layoutAnimated;
    id <CbStepSequenceRowViewDelegate> _delegate;
    double _rowHeight;
    unsigned long long _editMode;
}

+ (double)rowHeaderWidth:(_Bool)arg1 stepsPerRow:(unsigned long long)arg2;
+ (_Bool)isSignificantStep:(unsigned long long)arg1 playbackSpeed:(unsigned long long)arg2 timeSingature:(CDStruct_e28e794b)arg3;
+ (double)rowIconWidth:(unsigned long long)arg1;
+ (double)expandedRowHeaderPadding;
@property(nonatomic) _Bool layoutAnimated; // @synthesize layoutAnimated=_layoutAnimated;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) unsigned long long editMode; // @synthesize editMode=_editMode;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) __weak id <CbStepSequenceRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeSequenceEditLayer;
- (void)createSequenceEditLayerIfNeeded;
- (void)didTapSolo;
- (void)didTapMute;
- (void)twoTouchTapIcon;
- (void)didTapIcon;
- (void)setupNextStepBadge:(unsigned long long)arg1;
- (void)setupRowIcon:(unsigned long long)arg1;
- (void)setupSoloButton;
- (void)setupMuteButton;
- (double)rowHeaderWidth:(_Bool)arg1;
- (double)rowIconWidth;
- (id)coachingTipsViewForRowSettings;
- (id)coachingTipsViewForStepAtIndex:(unsigned long long)arg1;
- (void)setSequenceLoopEditActive:(_Bool)arg1;
- (void)setStepLayoutAnimated:(_Bool)arg1;
- (void)removeSwipeIconGestureRecognizers:(id)arg1;
- (void)addSwipeIconGestureRecognizers:(id)arg1;
- (void)updateRowHeaderExpanded;
- (_Bool)isSoloButton:(id)arg1;
- (void)setSoloed:(_Bool)arg1;
- (_Bool)isMuteButton:(id)arg1;
- (_Bool)isRowIcon:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (id)popoverPassthroughViews;
- (void)performPreviewAnimation;
- (unsigned long long)sequenceEditTypeForTouch:(id)arg1;
- (void)setNextStepMode:(unsigned long long)arg1;
- (void)setPlaybackSpeed:(unsigned long long)arg1;
- (void)setStartIndex:(long long)arg1 endIndex:(long long)arg2;
- (void)setIcon:(unsigned long long)arg1;
- (void)setStep:(unsigned long long)arg1 disabled:(_Bool)arg2;
- (void)setStep:(unsigned long long)arg1 noteRepeats:(unsigned long long)arg2;
- (void)setStep:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)setStep:(unsigned long long)arg1 sliderFill:(double)arg2;
- (void)setStep:(unsigned long long)arg1 highlighted:(_Bool)arg2;
- (void)layoutSequenceEditLayerWithStepsPadding:(double)arg1 stepWidth:(double)arg2;
- (void)layoutStepViewsWithStepsPadding:(double)arg1 stepWidth:(double)arg2;
- (void)layoutSubviews;
- (id)initWithStepCount:(unsigned long long)arg1 rowIcon:(unsigned long long)arg2;

@end

