//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAUIAssetProgressBar.h"

@class NSLayoutConstraint;

@interface MAUIAutolayoutAssetProgressBar : MAUIAssetProgressBar
{
    _Bool _ignoreDoubleValueChanges;
    NSLayoutConstraint *_trackLengthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *trackLengthConstraint; // @synthesize trackLengthConstraint=_trackLengthConstraint;
- (void).cxx_destruct;
- (void)setDoubleValue:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)setupView;

@end

