/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TIKeyboardSecureCandidateRGBColor;

@interface TIKeyboardSecureCandidateTextTraits : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fontName;
	double _maxFontSize;
	double _minFontSize;
	TIKeyboardSecureCandidateRGBColor* _textColor;
	double _yCoordinate;
	double _baselineOffset;

}

@property (nonatomic,copy) NSString * fontName;                                          //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double maxFontSize;                                         //@synthesize maxFontSize=_maxFontSize - In the implementation block
@property (assign,nonatomic) double minFontSize;                                         //@synthesize minFontSize=_minFontSize - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateRGBColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double yCoordinate;                                         //@synthesize yCoordinate=_yCoordinate - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                      //@synthesize baselineOffset=_baselineOffset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)traitsWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6 ;
-(id)initWithFontName:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3 ;
-(id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6 ;
-(void)setMaxFontSize:(double)arg1 ;
-(void)setYCoordinate:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTextColor:(TIKeyboardSecureCandidateRGBColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TIKeyboardSecureCandidateRGBColor *)textColor;
-(NSString *)fontName;
-(id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setMinFontSize:(double)arg1 ;
-(double)minFontSize;
-(void)setFontName:(NSString *)arg1 ;
-(double)maxFontSize;
-(double)yCoordinate;
@end

