/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@interface CTGlyphStorageInterface : NSObject {

	long long _glyphCount;
	unsigned short* _glyphs;
	CGSize* _advances;
	unsigned* _props;
	long long* _stringIndexes;
	long long* _absorbedCounts;
	CGPoint* _origins;

}
-(CTGlyphStorageRef)createCopy:(SCD_Struct_CT0)arg1 ;
-(void)getCustomAdvance:(CGSize*)arg1 forIndex:(long long)arg2 ;
-(void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 forIndex:(long long)arg2 ;
-(void)setProps:(unsigned)arg1 forIndex:(long long)arg2 ;
-(void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2 ;
-(void)setStringIndex:(long long)arg1 forIndex:(long long)arg2 ;
-(void)swapGlyph:(long long)arg1 withIndex:(long long)arg2 ;
-(void)moveGlyphsTo:(long long)arg1 from:(SCD_Struct_CT0)arg2 ;
-(void)insertGlyphs:(SCD_Struct_CT0)arg1 ;
-(void)initGlyphStack:(long long)arg1 ;
-(void)pushGlyph:(long long)arg1 ;
-(void)popGlyph:(long long)arg1 ;
-(void)disposeGlyphStack;
@end

