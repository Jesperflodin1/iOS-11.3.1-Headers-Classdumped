//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface WDReferenceRangeViewConfiguration : NSObject
{
    _Bool _useAccessiblePreferredFont;
    long long _currentValueLabelTextAlignment;
    double _currentValueDotDiameter;
    double _horizontalPadding;
    double _referenceRangeViewHeight;
    UIColor *_currentValueTextColor;
    UIColor *_referenceValueTextColor;
    double _referenceValueYOffset;
    NSString *_currentValueTextStyle;
    Class _labelClass;
}

+ (id)annotationEmbeddedConfiguration;
+ (id)defaultConfiguration;
@property(retain, nonatomic) Class labelClass; // @synthesize labelClass=_labelClass;
@property(retain, nonatomic) NSString *currentValueTextStyle; // @synthesize currentValueTextStyle=_currentValueTextStyle;
@property(nonatomic) double referenceValueYOffset; // @synthesize referenceValueYOffset=_referenceValueYOffset;
@property(retain, nonatomic) UIColor *referenceValueTextColor; // @synthesize referenceValueTextColor=_referenceValueTextColor;
@property(retain, nonatomic) UIColor *currentValueTextColor; // @synthesize currentValueTextColor=_currentValueTextColor;
@property(nonatomic) double referenceRangeViewHeight; // @synthesize referenceRangeViewHeight=_referenceRangeViewHeight;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double currentValueDotDiameter; // @synthesize currentValueDotDiameter=_currentValueDotDiameter;
@property(nonatomic) long long currentValueLabelTextAlignment; // @synthesize currentValueLabelTextAlignment=_currentValueLabelTextAlignment;
@property(nonatomic) _Bool useAccessiblePreferredFont; // @synthesize useAccessiblePreferredFont=_useAccessiblePreferredFont;
- (void).cxx_destruct;

@end
