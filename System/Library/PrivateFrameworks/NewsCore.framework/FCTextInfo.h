/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCLoadableFont, FCColor;

@interface FCTextInfo : NSObject <NSCopying> {

	FCLoadableFont* _font;
	long long _fontSizeAdjustment;
	double _lineHeightMultiplier;
	FCColor* _color;

}

@property (nonatomic,copy) FCLoadableFont * font;                       //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long fontSizeAdjustment;              //@synthesize fontSizeAdjustment=_fontSizeAdjustment - In the implementation block
@property (assign,nonatomic) double lineHeightMultiplier;               //@synthesize lineHeightMultiplier=_lineHeightMultiplier - In the implementation block
@property (nonatomic,copy) FCColor * color;                             //@synthesize color=_color - In the implementation block
+(id)textInfoFromJSONValues:(id)arg1 ;
-(void)setFont:(FCLoadableFont *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCColor *)color;
-(void)setColor:(FCColor *)arg1 ;
-(FCLoadableFont *)font;
-(void)setLineHeightMultiplier:(double)arg1 ;
-(void)setFontSizeAdjustment:(long long)arg1 ;
-(double)lineHeightMultiplier;
-(long long)fontSizeAdjustment;
-(double)fontSizeWithInitialFontSize:(double)arg1 ;
@end
