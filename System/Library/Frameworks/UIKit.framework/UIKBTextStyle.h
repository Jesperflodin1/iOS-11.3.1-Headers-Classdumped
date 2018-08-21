/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIKBTextStyle : NSObject <NSCopying> {

	BOOL _ignoreTextMarginOnKey;
	int _anchorCorner;
	NSString* _fontName;
	double _fontSize;
	double _imageScale;
	double _minFontSize;
	double _kerning;
	double _textOpacity;
	NSString* _textColor;
	NSString* _etchColor;
	long long _alignment;
	double _pathWeight;
	double _fontWeight;
	long long _selector;
	CGPoint _textOffset;
	CGPoint _etchOffset;

}

@property (nonatomic,retain) NSString * fontName;                     //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                         //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double imageScale;                       //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,nonatomic) double minFontSize;                      //@synthesize minFontSize=_minFontSize - In the implementation block
@property (assign,nonatomic) double kerning;                          //@synthesize kerning=_kerning - In the implementation block
@property (assign,nonatomic) double textOpacity;                      //@synthesize textOpacity=_textOpacity - In the implementation block
@property (nonatomic,retain) NSString * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * etchColor;                    //@synthesize etchColor=_etchColor - In the implementation block
@property (assign,nonatomic) long long alignment;                     //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) CGPoint textOffset;                      //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) CGPoint etchOffset;                      //@synthesize etchOffset=_etchOffset - In the implementation block
@property (assign,nonatomic) double pathWeight;                       //@synthesize pathWeight=_pathWeight - In the implementation block
@property (assign,nonatomic) double fontWeight;                       //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) int anchorCorner;                        //@synthesize anchorCorner=_anchorCorner - In the implementation block
@property (assign,nonatomic) long long selector;                      //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL ignoreTextMarginOnKey;              //@synthesize ignoreTextMarginOnKey=_ignoreTextMarginOnKey - In the implementation block
+(id)styleWithFontName:(id)arg1 withFontSize:(double)arg2 ;
+(id)styleWithTextColor:(id)arg1 ;
-(id)init;
-(void)setAlignment:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTextColor:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)alignment;
-(void)setSelector:(long long)arg1 ;
-(long long)selector;
-(NSString *)textColor;
-(NSString *)fontName;
-(void)setMinFontSize:(double)arg1 ;
-(double)minFontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setTextOffset:(CGPoint)arg1 ;
-(void)setIgnoreTextMarginOnKey:(BOOL)arg1 ;
-(void)setPathWeight:(double)arg1 ;
-(CGPoint)textOffset;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontWeight:(double)arg1 ;
-(int)anchorCorner;
-(void)setKerning:(double)arg1 ;
-(void)setTextOpacity:(double)arg1 ;
-(double)fontSize;
-(double)fontWeight;
-(void)setImageScale:(double)arg1 ;
-(void)setAnchorCorner:(int)arg1 ;
-(double)kerning;
-(double)textOpacity;
-(NSString *)etchColor;
-(CGPoint)etchOffset;
-(double)pathWeight;
-(BOOL)ignoreTextMarginOnKey;
-(void)setEtchColor:(NSString *)arg1 ;
-(void)setEtchOffset:(CGPoint)arg1 ;
-(void)overlayWithStyle:(id)arg1 ;
-(double)imageScale;
@end

