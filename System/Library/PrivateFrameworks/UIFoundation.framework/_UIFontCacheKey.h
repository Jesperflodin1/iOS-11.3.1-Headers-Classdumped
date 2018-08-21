/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFontDescriptor;

@interface _UIFontCacheKey : NSObject <NSCopying> {

	int _traits;
	NSString* _fontName;
	double _pointSize;
	NSString* _textStyle;
	NSString* _contentSizeCategory;
	UIFontDescriptor* _fontDescriptor;
	NSString* _textStyleForScaling;
	double _pointSizeForScaling;
	double _maximumPointSizeAfterScaling;

}

@property (nonatomic,copy) NSString * fontName;                                //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) int traits;                                       //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double pointSize;                                 //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                               //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                     //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,copy) UIFontDescriptor * fontDescriptor;                  //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
@property (nonatomic,copy) NSString * textStyleForScaling;                     //@synthesize textStyleForScaling=_textStyleForScaling - In the implementation block
@property (assign,nonatomic) double pointSizeForScaling;                       //@synthesize pointSizeForScaling=_pointSizeForScaling - In the implementation block
@property (assign,nonatomic) double maximumPointSizeAfterScaling;              //@synthesize maximumPointSizeAfterScaling=_maximumPointSizeAfterScaling - In the implementation block
+(id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3 ;
+(id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2 ;
+(id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 ;
+(id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 ;
-(void)setTraits:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)pointSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(int)traits;
-(void)setFontName:(NSString *)arg1 ;
-(UIFontDescriptor *)fontDescriptor;
-(NSString *)textStyle;
-(void)setTextStyle:(NSString *)arg1 ;
-(void)setTextStyleForScaling:(NSString *)arg1 ;
-(void)setPointSizeForScaling:(double)arg1 ;
-(void)setMaximumPointSizeAfterScaling:(double)arg1 ;
-(NSString *)textStyleForScaling;
-(double)pointSizeForScaling;
-(double)maximumPointSizeAfterScaling;
-(void)setPointSize:(double)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setFontDescriptor:(UIFontDescriptor *)arg1 ;
@end

