//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTitledBuddyViewController.h"

#import "WDUserActivityResponder.h"

@class WDProfile, _HKMedicalIDData;

@interface WDBuddyFlowOrganDonationViewController : HKTitledBuddyViewController <WDUserActivityResponder>
{
    WDProfile *_profile;
    _HKMedicalIDData *_medicalIDData;
}

- (void).cxx_destruct;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)bottomAnchoredButtons;
- (void)linkButtonTapped:(id)arg1;
- (id)linkButtonTitle;
- (id)bodyString;
- (id)titleString;
- (id)titleImage;
- (void)_advanceToNextStep;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)notNowButtonTapped:(id)arg1;
- (void)alreadyButtonTapped:(id)arg1;
- (void)signupButtonTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 medicalIDData:(id)arg2;

@end
