//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSAttributedString, NSString, UILabel;

@interface HSKeylineLabel : UIView
{
    CALayer *_leadingKeylineLayer;
    CALayer *_trailingKeylineLayer;
    UILabel *_label;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CALayer *trailingKeylineLayer; // @synthesize trailingKeylineLayer=_trailingKeylineLayer;
@property(retain, nonatomic) CALayer *leadingKeylineLayer; // @synthesize leadingKeylineLayer=_leadingKeylineLayer;
- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;

@end
