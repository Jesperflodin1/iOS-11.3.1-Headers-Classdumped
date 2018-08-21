//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAbstractCallParticipantLabelView.h"

@class NSLayoutConstraint, UIActivityIndicatorView, UIButton, UILabel;

@interface PHMultipleCallParticipantLabelView : PHAbstractCallParticipantLabelView
{
    NSLayoutConstraint *_participantMarqueeLabelRightConstraint;
    UILabel *_statusLabel;
    NSLayoutConstraint *_statusLabelRightConstraint;
    UIActivityIndicatorView *_progressSpinner;
    UIButton *_conferenceParticipantsButton;
}

@property(retain) UIButton *conferenceParticipantsButton; // @synthesize conferenceParticipantsButton=_conferenceParticipantsButton;
@property(retain) UIActivityIndicatorView *progressSpinner; // @synthesize progressSpinner=_progressSpinner;
@property(retain) NSLayoutConstraint *statusLabelRightConstraint; // @synthesize statusLabelRightConstraint=_statusLabelRightConstraint;
@property(retain) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain) NSLayoutConstraint *participantMarqueeLabelRightConstraint; // @synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint;
- (void).cxx_destruct;
- (void)infoButtonTapped:(id)arg1;
- (void)setShowsInfoButton:(_Bool)arg1;
- (void)setHidesLabel:(_Bool)arg1;
- (double)labelAlphaValueForActivityState:(unsigned short)arg1;
- (void)setActivityState:(unsigned short)arg1 animated:(_Bool)arg2;
- (void)setActivityState:(unsigned short)arg1;
- (void)setTextColor:(id)arg1;
- (void)setShowsActivitySpinner:(_Bool)arg1;
- (void)setLabelDescriptor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
