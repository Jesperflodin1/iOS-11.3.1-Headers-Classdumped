//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSLayoutConstraint, NSString, UIColor, UIImage, UIImageView, UILabel;

@interface WDMedicalRecordCategorySectionHeaderCell : WDMedicalRecordGroupableCell
{
    UIColor *_categoryGradientTopColor;
    UIColor *_categoryGradientBottomColor;
    UILabel *_titleLabel;
    UIImageView *_categoryImageView;
    UIImageView *_backgroundGradientImageView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_titleLabelTopToFirstBaselineConstraint;
    NSLayoutConstraint *_titleLastBaselineConstraint;
    NSLayoutConstraint *_backgroundToCategoryImageLeadingAnchorConstraint;
    NSLayoutConstraint *_categoryImageToTitleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_backgroundToTitleLabelLeadingAnchorConstraint;
}

+ (double)_pillBackgroundViewHeightConstraint;
+ (double)_titleLabelLastBaselineToBottom;
+ (double)_titleLabelTopToFirstBaseline;
+ (id)_titleLabelFont;
@property(retain, nonatomic) NSLayoutConstraint *backgroundToTitleLabelLeadingAnchorConstraint; // @synthesize backgroundToTitleLabelLeadingAnchorConstraint=_backgroundToTitleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *categoryImageToTitleLabelLeadingAnchorConstraint; // @synthesize categoryImageToTitleLabelLeadingAnchorConstraint=_categoryImageToTitleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *backgroundToCategoryImageLeadingAnchorConstraint; // @synthesize backgroundToCategoryImageLeadingAnchorConstraint=_backgroundToCategoryImageLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLastBaselineConstraint; // @synthesize titleLastBaselineConstraint=_titleLastBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopToFirstBaselineConstraint; // @synthesize titleLabelTopToFirstBaselineConstraint=_titleLabelTopToFirstBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UIImageView *backgroundGradientImageView; // @synthesize backgroundGradientImageView=_backgroundGradientImageView;
@property(retain, nonatomic) UIImageView *categoryImageView; // @synthesize categoryImageView=_categoryImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *categoryGradientBottomColor; // @synthesize categoryGradientBottomColor=_categoryGradientBottomColor;
@property(retain, nonatomic) UIColor *categoryGradientTopColor; // @synthesize categoryGradientTopColor=_categoryGradientTopColor;
- (void).cxx_destruct;
- (void)_recomputeGradient;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
@property(retain, nonatomic) UIImage *categoryImage;
- (void)setCategoryGradientTopColor:(id)arg1 bottomColor:(id)arg2;
@property(copy, nonatomic) NSString *title;
- (void)updateConstraints;
- (void)setupSubviews;

@end
