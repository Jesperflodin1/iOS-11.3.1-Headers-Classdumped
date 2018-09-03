//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, UIColor, UIImageView, UILabel, UIView;

@interface CbHorizontalGroovePicker : UIControl
{
    _Bool _showDebugSegments;
    UILabel *_titleLabel;
    UILabel *_offLabel;
    UILabel *_oneLabel;
    UILabel *_twoLabel;
    UILabel *_threeLabel;
    UILabel *_fourLabel;
    UIColor *_textColor;
    UIColor *_dropShadowColor;
    NSArray *_segmentWidths;
    NSArray *_imageArray;
    NSArray *_labelInfoArray;
    unsigned long long _value;
    UIColor *_highlightColor;
    UIColor *_normalColor;
    UIImageView *_switchImageView;
    NSMutableArray *_labelsArray;
    UIView *_debugSegmentContainerView;
}

@property(retain, nonatomic) UIView *debugSegmentContainerView; // @synthesize debugSegmentContainerView=_debugSegmentContainerView;
@property(retain, nonatomic) NSMutableArray *labelsArray; // @synthesize labelsArray=_labelsArray;
@property(retain, nonatomic) UIImageView *switchImageView; // @synthesize switchImageView=_switchImageView;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) _Bool showDebugSegments; // @synthesize showDebugSegments=_showDebugSegments;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(copy, nonatomic) NSArray *labelInfoArray; // @synthesize labelInfoArray=_labelInfoArray;
@property(copy, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(copy, nonatomic) NSArray *segmentWidths; // @synthesize segmentWidths=_segmentWidths;
@property(nonatomic) UIColor *dropShadowColor; // @synthesize dropShadowColor=_dropShadowColor;
@property(nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UILabel *fourLabel; // @synthesize fourLabel=_fourLabel;
@property(retain, nonatomic) UILabel *threeLabel; // @synthesize threeLabel=_threeLabel;
@property(retain, nonatomic) UILabel *twoLabel; // @synthesize twoLabel=_twoLabel;
@property(retain, nonatomic) UILabel *oneLabel; // @synthesize oneLabel=_oneLabel;
@property(retain, nonatomic) UILabel *offLabel; // @synthesize offLabel=_offLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_syncLabelColors;
- (void)_syncImage;
- (unsigned long long)_valueForLocation:(struct CGPoint)arg1;
- (id)_titleCaseOffString;
- (id)_allCapsOffString;
- (id)_titleCaseAutoplayString;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_removeDebugSegments;
- (void)_installDebugSegments;
- (void)_handleUpdateForTouch:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

