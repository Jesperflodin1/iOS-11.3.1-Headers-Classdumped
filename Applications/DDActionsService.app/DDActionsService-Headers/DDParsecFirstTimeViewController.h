//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSLayoutConstraint, SearchUIFirstTimeExperienceViewController;

@interface DDParsecFirstTimeViewController : UIViewController
{
    SearchUIFirstTimeExperienceViewController *_firstExperienceViewController;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_widthConstraint;
    _Bool _fullScreen;
}

@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SearchUIFirstTimeExperienceDelegate> delegate;
- (void)updateForCurrentTraitCollection;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
