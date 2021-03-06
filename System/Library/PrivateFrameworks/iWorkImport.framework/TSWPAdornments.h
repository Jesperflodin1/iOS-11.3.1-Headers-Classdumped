/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPAdornments : NSObject {

	vector<unsigned long, std::__1::allocator<unsigned long> >* _charIndexes;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _glyphs;
	vector<CGPoint, std::__1::allocator<CGPoint> >* _positions;
	vector<CGRect, std::__1::allocator<CGRect> >* _rects;
	vector<TSWPAttachmentPosition, std::__1::allocator<TSWPAttachmentPosition> >* _attachmentPositions;
	BOOL _shouldRotate;
	int _type;
	int _location;
	double _ascent;
	double _descent;
	double _advance;
	CGColorRef _color;
	CTFontRef _font;
	double _verticalAdjustment;
	CGPoint _textPosition;

}

@property (nonatomic,readonly) int type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long charIndexCount; 
@property (nonatomic,readonly) unsigned long long* charIndexes; 
@property (nonatomic,readonly) unsigned long long glyphCount; 
@property (nonatomic,readonly) unsigned short* glyphs; 
@property (nonatomic,readonly) unsigned long long positionCount; 
@property (nonatomic,readonly) CGPoint* positions; 
@property (nonatomic,readonly) unsigned long long rectCount; 
@property (nonatomic,readonly) CGRect* rects; 
@property (nonatomic,readonly) unsigned long long attachmentPositionCount; 
@property (nonatomic,readonly) SCD_Struct_TS726* attachmentPositions; 
@property (nonatomic,readonly) double ascent;                                           //@synthesize ascent=_ascent - In the implementation block
@property (nonatomic,readonly) double descent;                                          //@synthesize descent=_descent - In the implementation block
@property (nonatomic,readonly) double advance;                                          //@synthesize advance=_advance - In the implementation block
@property (nonatomic,retain) CGColorRef color;                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) CTFontRef font;                                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) int location;                                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double verticalAdjustment;                                 //@synthesize verticalAdjustment=_verticalAdjustment - In the implementation block
@property (assign,nonatomic) CGPoint textPosition;                                      //@synthesize textPosition=_textPosition - In the implementation block
@property (assign,nonatomic) BOOL shouldRotate;                                         //@synthesize shouldRotate=_shouldRotate - In the implementation block
-(void)incrementCharIndexes:(long long)arg1 startingAt:(unsigned long long)arg2 ;
-(unsigned long long)positionCount;
-(unsigned long long)charIndexCount;
-(unsigned long long*)charIndexes;
-(unsigned long long)attachmentPositionCount;
-(SCD_Struct_TS726*)attachmentPositions;
-(BOOL)shouldRotate;
-(id)initWithType:(int)arg1 color:(CGColorRef)arg2 font:(CTFontRef)arg3 ;
-(void)setVerticalAdjustment:(double)arg1 ;
-(void)addAdornmentWithPoint:(CGPoint)arg1 glyph:(unsigned short)arg2 ;
-(void)addAdornmentWithAttachmentPosition:(SCD_Struct_TS726)arg1 ;
-(void)setShouldRotate:(BOOL)arg1 ;
-(void)setAscent:(double)arg1 descent:(double)arg2 advance:(double)arg3 ;
-(void)addAdornmentWithCharIndex:(unsigned long long)arg1 point:(CGPoint)arg2 glyph:(unsigned short)arg3 rect:(CGRect)arg4 ;
-(unsigned long long)rectCount;
-(void)removeAdornmentAt:(unsigned long long)arg1 ;
-(double)verticalAdjustment;
-(int)type;
-(void)setFont:(CTFontRef)arg1 ;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(CTFontRef)font;
-(int)location;
-(void)setLocation:(int)arg1 ;
-(CGRect*)rects;
-(void)setTextPosition:(CGPoint)arg1 ;
-(CGPoint)textPosition;
-(unsigned long long)glyphCount;
-(unsigned short*)glyphs;
-(double)advance;
-(double)ascent;
-(double)descent;
-(CGPoint*)positions;
@end

