/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SXComponentTextRules : NSObject <NSCopying> {

	BOOL _shouldHyphenate;
	BOOL _isSelectable;
	BOOL _allowsScrollPositionRestore;
	double _fontResizingTresholdFactor;
	double _fontSizeConstant;
	double _lineHeightConstant;
	double _dropCapConstant;
	long long _textFlow;
	NSString* _fontTextStyle;

}

@property (assign,nonatomic) double fontResizingTresholdFactor;              //@synthesize fontResizingTresholdFactor=_fontResizingTresholdFactor - In the implementation block
@property (assign,nonatomic) double fontSizeConstant;                        //@synthesize fontSizeConstant=_fontSizeConstant - In the implementation block
@property (assign,nonatomic) double lineHeightConstant;                      //@synthesize lineHeightConstant=_lineHeightConstant - In the implementation block
@property (assign,nonatomic) double dropCapConstant;                         //@synthesize dropCapConstant=_dropCapConstant - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                           //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                              //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL allowsScrollPositionRestore;               //@synthesize allowsScrollPositionRestore=_allowsScrollPositionRestore - In the implementation block
@property (assign,nonatomic) long long textFlow;                             //@synthesize textFlow=_textFlow - In the implementation block
@property (nonatomic,copy) NSString * fontTextStyle;                         //@synthesize fontTextStyle=_fontTextStyle - In the implementation block
+(id)smallTextRules;
+(id)defaultTextRules;
+(id)bodyTextRules;
+(id)titleTextRules;
+(id)headingTextRules;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
-(BOOL)allowsScrollPositionRestore;
-(void)setFontTextStyle:(NSString *)arg1 ;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(void)setFontResizingTresholdFactor:(double)arg1 ;
-(void)setFontSizeConstant:(double)arg1 ;
-(void)setAllowsScrollPositionRestore:(BOOL)arg1 ;
-(double)fontResizingTresholdFactor;
-(double)fontSizeConstant;
-(NSString *)fontTextStyle;
-(double)lineHeightConstant;
-(void)setLineHeightConstant:(double)arg1 ;
-(double)dropCapConstant;
-(void)setDropCapConstant:(double)arg1 ;
-(BOOL)shouldHyphenate;
-(void)setTextFlow:(long long)arg1 ;
-(long long)textFlow;
@end

