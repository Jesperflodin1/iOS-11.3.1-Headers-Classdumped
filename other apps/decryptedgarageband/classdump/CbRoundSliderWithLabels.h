//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAUIRoundSlider.h"

@class NSMutableArray, UIColor, UILabel;

@interface CbRoundSliderWithLabels : MAUIRoundSlider
{
    _Bool _autoplayAllCaps;
    _Bool _offAllCaps;
    UILabel *_titleLabel;
    UILabel *_offLabel;
    UILabel *_oneLabel;
    UILabel *_twoLabel;
    UILabel *_threeLabel;
    UILabel *_fourLabel;
    NSMutableArray *_labelsArray;
}

@property(retain, nonatomic) NSMutableArray *labelsArray; // @synthesize labelsArray=_labelsArray;
@property(nonatomic) _Bool offAllCaps; // @synthesize offAllCaps=_offAllCaps;
@property(nonatomic) _Bool autoplayAllCaps; // @synthesize autoplayAllCaps=_autoplayAllCaps;
@property(retain, nonatomic) UILabel *fourLabel; // @synthesize fourLabel=_fourLabel;
@property(retain, nonatomic) UILabel *threeLabel; // @synthesize threeLabel=_threeLabel;
@property(retain, nonatomic) UILabel *twoLabel; // @synthesize twoLabel=_twoLabel;
@property(retain, nonatomic) UILabel *oneLabel; // @synthesize oneLabel=_oneLabel;
@property(retain, nonatomic) UILabel *offLabel; // @synthesize offLabel=_offLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (void)setAssetSet:(id)arg1;
- (id)_titleCaseOffString;
- (id)_allCapsOffString;
- (id)_titleCaseAutoplayString;
- (id)_allCapsAutoplayString;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) UIColor *dropShadowColor;
@property(nonatomic) UIColor *textColor;

@end
