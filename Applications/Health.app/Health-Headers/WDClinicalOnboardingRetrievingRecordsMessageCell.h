//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UILabel;

@interface WDClinicalOnboardingRetrievingRecordsMessageCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSLayoutConstraint *_bottomLayoutConstraint;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *bottomLayoutConstraint; // @synthesize bottomLayoutConstraint=_bottomLayoutConstraint;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(nonatomic) double bottomPadding;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

