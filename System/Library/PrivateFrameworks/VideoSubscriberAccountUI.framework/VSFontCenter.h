/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITraitEnvironment;
@class UITraitCollection, UIFont;

@interface VSFontCenter : NSObject {

	id<UITraitEnvironment> _traitEnvironment;
	UITraitCollection* _traitCollection;
	UIFont* _title0Font;
	UIFont* _title1Font;
	UIFont* _title2Font;
	UIFont* _title3Font;
	UIFont* _headlineFont;
	UIFont* _subheadlineFont;
	UIFont* _bodyFont;
	UIFont* _calloutFont;
	UIFont* _footnoteFont;
	UIFont* _caption1Font;
	UIFont* _caption2Font;

}

@property (nonatomic,copy) UIFont * title0Font;                                           //@synthesize title0Font=_title0Font - In the implementation block
@property (nonatomic,copy) UIFont * title1Font;                                           //@synthesize title1Font=_title1Font - In the implementation block
@property (nonatomic,copy) UIFont * title2Font;                                           //@synthesize title2Font=_title2Font - In the implementation block
@property (nonatomic,copy) UIFont * title3Font;                                           //@synthesize title3Font=_title3Font - In the implementation block
@property (nonatomic,copy) UIFont * headlineFont;                                         //@synthesize headlineFont=_headlineFont - In the implementation block
@property (nonatomic,copy) UIFont * subheadlineFont;                                      //@synthesize subheadlineFont=_subheadlineFont - In the implementation block
@property (nonatomic,copy) UIFont * bodyFont;                                             //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,copy) UIFont * calloutFont;                                          //@synthesize calloutFont=_calloutFont - In the implementation block
@property (nonatomic,copy) UIFont * footnoteFont;                                         //@synthesize footnoteFont=_footnoteFont - In the implementation block
@property (nonatomic,copy) UIFont * caption1Font;                                         //@synthesize caption1Font=_caption1Font - In the implementation block
@property (nonatomic,copy) UIFont * caption2Font;                                         //@synthesize caption2Font=_caption2Font - In the implementation block
@property (assign,nonatomic,__weak) id<UITraitEnvironment> traitEnvironment;              //@synthesize traitEnvironment=_traitEnvironment - In the implementation block
@property (nonatomic,copy) UITraitCollection * traitCollection;                           //@synthesize traitCollection=_traitCollection - In the implementation block
-(id)init;
-(UITraitCollection *)traitCollection;
-(void)dealloc;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(UIFont *)footnoteFont;
-(UIFont *)bodyFont;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UIFont *)headlineFont;
-(void)setHeadlineFont:(UIFont *)arg1 ;
-(id<UITraitEnvironment>)traitEnvironment;
-(id)initWithTraitEnvironment:(id)arg1 ;
-(void)_updateFontsWithTraitCollection:(id)arg1 ;
-(void)setTitle0Font:(UIFont *)arg1 ;
-(void)setTitle1Font:(UIFont *)arg1 ;
-(void)setTitle2Font:(UIFont *)arg1 ;
-(void)setTitle3Font:(UIFont *)arg1 ;
-(void)setSubheadlineFont:(UIFont *)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)setCalloutFont:(UIFont *)arg1 ;
-(void)setFootnoteFont:(UIFont *)arg1 ;
-(void)setCaption1Font:(UIFont *)arg1 ;
-(void)setCaption2Font:(UIFont *)arg1 ;
-(void)setTraitEnvironment:(id<UITraitEnvironment>)arg1 ;
-(UIFont *)title0Font;
-(UIFont *)title1Font;
-(UIFont *)title2Font;
-(UIFont *)title3Font;
-(UIFont *)subheadlineFont;
-(UIFont *)calloutFont;
-(UIFont *)caption1Font;
-(UIFont *)caption2Font;
@end
