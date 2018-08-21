//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTABedtimeSetupStep.h"

@class MTSleepAlarm, NSLayoutConstraint, NSString, UIImageView, UILabel, UIScrollView;

@interface MTABedtimeSetupCompleteViewController : UIViewController <MTABedtimeSetupStep>
{
    id <MTABedtimeSetupDelegate> setupDelegate;
    MTSleepAlarm *sleepAlarm;
    UIScrollView *_scrollView;
    UIImageView *_glyphImageView;
    UIImageView *_graphImageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_footerLabel;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_iconTitleConstraint;
    NSLayoutConstraint *_titleMessageConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *titleMessageConstraint; // @synthesize titleMessageConstraint=_titleMessageConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconTitleConstraint; // @synthesize iconTitleConstraint=_iconTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *graphImageView; // @synthesize graphImageView=_graphImageView;
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MTSleepAlarm *sleepAlarm; // @synthesize sleepAlarm;
@property(nonatomic) __weak id <MTABedtimeSetupDelegate> setupDelegate; // @synthesize setupDelegate;
- (void).cxx_destruct;
- (void)done:(id)arg1;
- (void)handleContentSizeChange:(id)arg1;
- (void)setupConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateTitleBaselineConstraint;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
