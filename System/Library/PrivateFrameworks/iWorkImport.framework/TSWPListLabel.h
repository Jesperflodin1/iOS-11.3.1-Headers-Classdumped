/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDShadow, TSDImageProvider, NSString;

@interface TSWPListLabel : NSObject {

	BOOL _isLabelRTL;
	BOOL _isLabelTateChuYoko;
	int _labelType;
	double _baselineOffset;
	TSDShadow* _shadow;
	double _labelIndent;
	double _labelTypographicExtent;
	TSDImageProvider* _imageProvider;
	const CTLineRef _textLine;
	double _ascent;
	double _descent;
	unsigned long long _listNumber;
	NSString* _labelString;
	CGSize _size;

}

@property (nonatomic,readonly) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (nonatomic,readonly) CGSize size;                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double baselineOffset;                         //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,retain) TSDShadow * shadow;                              //@synthesize shadow=_shadow - In the implementation block
@property (assign,nonatomic) double labelIndent;                              //@synthesize labelIndent=_labelIndent - In the implementation block
@property (assign,nonatomic) double labelTypographicExtent;                   //@synthesize labelTypographicExtent=_labelTypographicExtent - In the implementation block
@property (assign,nonatomic) BOOL isLabelRTL;                                 //@synthesize isLabelRTL=_isLabelRTL - In the implementation block
@property (nonatomic,readonly) TSDImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) CGSize naturalImageSize; 
@property (nonatomic,readonly) const CTLineRef textLine;                      //@synthesize textLine=_textLine - In the implementation block
@property (nonatomic,readonly) double ascent;                                 //@synthesize ascent=_ascent - In the implementation block
@property (nonatomic,readonly) double descent;                                //@synthesize descent=_descent - In the implementation block
@property (nonatomic,readonly) const CTFontRef labelFont; 
@property (nonatomic,readonly) unsigned long long listNumber;                 //@synthesize listNumber=_listNumber - In the implementation block
@property (nonatomic,readonly) BOOL isLabelTateChuYoko;                       //@synthesize isLabelTateChuYoko=_isLabelTateChuYoko - In the implementation block
@property (nonatomic,readonly) NSString * labelString;                        //@synthesize labelString=_labelString - In the implementation block
-(const CTLineRef)textLine;
-(double)labelIndent;
-(BOOL)isLabelRTL;
-(BOOL)isLabelTateChuYoko;
-(BOOL)isEqualToListLabel:(id)arg1 ;
-(unsigned long long)listNumber;
-(id)initWithType:(int)arg1 imageProvider:(id)arg2 size:(CGSize)arg3 baselineOffset:(double)arg4 ;
-(id)initWithType:(int)arg1 labelString:(id)arg2 textLine:(CTLineRef)arg3 listNumber:(unsigned long long)arg4 isTateChuYoko:(BOOL)arg5 baselineOffset:(double)arg6 ;
-(CGSize)naturalImageSize;
-(void)setLabelIndent:(double)arg1 ;
-(double)labelTypographicExtent;
-(void)setLabelTypographicExtent:(double)arg1 ;
-(void)setIsLabelRTL:(BOOL)arg1 ;
-(int)labelType;
-(NSString *)labelString;
-(CGSize)size;
-(double)height;
-(double)baselineOffset;
-(double)width;
-(TSDShadow *)shadow;
-(void)setShadow:(TSDShadow *)arg1 ;
-(const CTFontRef)labelFont;
-(double)ascent;
-(double)descent;
-(TSDImageProvider *)imageProvider;
@end

