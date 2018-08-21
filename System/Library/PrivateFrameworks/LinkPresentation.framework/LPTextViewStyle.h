/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont, LPPointUnit, LPGlyphStyle, LPPadding;

@interface LPTextViewStyle : NSObject <NSCopying> {

	unsigned _maximumLines;
	UIColor* _color;
	UIFont* _font;
	long long _textAlignment;
	LPPointUnit* _firstLineLeading;
	LPGlyphStyle* _leadingGlyph;
	LPPadding* _padding;

}

@property (nonatomic,retain) UIColor * color;                             //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                               //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) unsigned maximumLines;                       //@synthesize maximumLines=_maximumLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                     //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) LPPointUnit * firstLineLeading;              //@synthesize firstLineLeading=_firstLineLeading - In the implementation block
@property (nonatomic,retain) LPGlyphStyle * leadingGlyph;                 //@synthesize leadingGlyph=_leadingGlyph - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                //@synthesize padding=_padding - In the implementation block
-(id)init;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UIFont *)font;
-(long long)textAlignment;
-(LPPadding *)padding;
-(void)setMaximumLines:(unsigned)arg1 ;
-(unsigned)maximumLines;
-(LPPointUnit *)firstLineLeading;
-(LPGlyphStyle *)leadingGlyph;
-(void)setFirstLineLeading:(LPPointUnit *)arg1 ;
-(void)setLeadingGlyph:(LPGlyphStyle *)arg1 ;
@end
