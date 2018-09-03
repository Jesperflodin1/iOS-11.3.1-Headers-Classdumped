//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADRequest.h"

@class NSMutableDictionary, NSString;

@interface GADDynamicHeightSearchRequest : GADRequest
{
    NSMutableDictionary *_requestParameters;
    _Bool _adTestEnabled;
    _Bool _clickToCallExtensionEnabled;
    _Bool _locationExtensionEnabled;
    _Bool _plusOnesExtensionEnabled;
    _Bool _sellerRatingsExtensionEnabled;
    _Bool _siteLinksExtensionEnabled;
    _Bool _titleUnderlineHidden;
    _Bool _boldTitleEnabled;
    _Bool _detailedAttributionExtensionEnabled;
    _Bool _longerHeadlinesExtensionEnabled;
    NSString *_query;
    long long _adPage;
    NSString *_channel;
    NSString *_hostLanguage;
    NSString *_locationExtensionTextColor;
    double _locationExtensionFontSize;
    NSString *_CSSWidth;
    long long _numberOfAds;
    NSString *_fontFamily;
    NSString *_attributionFontFamily;
    double _annotationFontSize;
    double _attributionFontSize;
    double _descriptionFontSize;
    double _domainLinkFontSize;
    double _titleFontSize;
    NSString *_adBorderColor;
    NSString *_adSeparatorColor;
    NSString *_annotationTextColor;
    NSString *_attributionTextColor;
    NSString *_backgroundColor;
    NSString *_borderColor;
    NSString *_domainLinkColor;
    NSString *_textColor;
    NSString *_titleLinkColor;
    NSString *_adBorderCSSSelections;
    double _adjustableLineHeight;
    double _attributionBottomSpacing;
    NSString *_borderCSSSelections;
    double _verticalSpacing;
}

@property(nonatomic) _Bool longerHeadlinesExtensionEnabled; // @synthesize longerHeadlinesExtensionEnabled=_longerHeadlinesExtensionEnabled;
@property(nonatomic) _Bool detailedAttributionExtensionEnabled; // @synthesize detailedAttributionExtensionEnabled=_detailedAttributionExtensionEnabled;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) _Bool boldTitleEnabled; // @synthesize boldTitleEnabled=_boldTitleEnabled;
@property(nonatomic) _Bool titleUnderlineHidden; // @synthesize titleUnderlineHidden=_titleUnderlineHidden;
@property(copy, nonatomic) NSString *borderCSSSelections; // @synthesize borderCSSSelections=_borderCSSSelections;
@property(nonatomic) double attributionBottomSpacing; // @synthesize attributionBottomSpacing=_attributionBottomSpacing;
@property(nonatomic) double adjustableLineHeight; // @synthesize adjustableLineHeight=_adjustableLineHeight;
@property(copy, nonatomic) NSString *adBorderCSSSelections; // @synthesize adBorderCSSSelections=_adBorderCSSSelections;
@property(copy, nonatomic) NSString *titleLinkColor; // @synthesize titleLinkColor=_titleLinkColor;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *domainLinkColor; // @synthesize domainLinkColor=_domainLinkColor;
@property(copy, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *attributionTextColor; // @synthesize attributionTextColor=_attributionTextColor;
@property(copy, nonatomic) NSString *annotationTextColor; // @synthesize annotationTextColor=_annotationTextColor;
@property(copy, nonatomic) NSString *adSeparatorColor; // @synthesize adSeparatorColor=_adSeparatorColor;
@property(copy, nonatomic) NSString *adBorderColor; // @synthesize adBorderColor=_adBorderColor;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) double domainLinkFontSize; // @synthesize domainLinkFontSize=_domainLinkFontSize;
@property(nonatomic) double descriptionFontSize; // @synthesize descriptionFontSize=_descriptionFontSize;
@property(nonatomic) double attributionFontSize; // @synthesize attributionFontSize=_attributionFontSize;
@property(nonatomic) double annotationFontSize; // @synthesize annotationFontSize=_annotationFontSize;
@property(copy, nonatomic) NSString *attributionFontFamily; // @synthesize attributionFontFamily=_attributionFontFamily;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) long long numberOfAds; // @synthesize numberOfAds=_numberOfAds;
@property(copy, nonatomic) NSString *CSSWidth; // @synthesize CSSWidth=_CSSWidth;
@property(nonatomic) _Bool siteLinksExtensionEnabled; // @synthesize siteLinksExtensionEnabled=_siteLinksExtensionEnabled;
@property(nonatomic) _Bool sellerRatingsExtensionEnabled; // @synthesize sellerRatingsExtensionEnabled=_sellerRatingsExtensionEnabled;
@property(nonatomic) _Bool plusOnesExtensionEnabled; // @synthesize plusOnesExtensionEnabled=_plusOnesExtensionEnabled;
@property(nonatomic) _Bool locationExtensionEnabled; // @synthesize locationExtensionEnabled=_locationExtensionEnabled;
@property(nonatomic) _Bool clickToCallExtensionEnabled; // @synthesize clickToCallExtensionEnabled=_clickToCallExtensionEnabled;
@property(nonatomic) double locationExtensionFontSize; // @synthesize locationExtensionFontSize=_locationExtensionFontSize;
@property(copy, nonatomic) NSString *locationExtensionTextColor; // @synthesize locationExtensionTextColor=_locationExtensionTextColor;
@property(copy, nonatomic) NSString *hostLanguage; // @synthesize hostLanguage=_hostLanguage;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool adTestEnabled; // @synthesize adTestEnabled=_adTestEnabled;
@property(nonatomic) long long adPage; // @synthesize adPage=_adPage;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)CSADynamicHeightSearchRequestURLWithAdUnitID:(id)arg1;
- (id)dynamicHeightAdURLFragmentsWithAdUnitID:(id)arg1;
- (void)parameterHelperSetValue:(id)arg1 forKey:(id)arg2;
- (void)setAdvancedOptionValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

