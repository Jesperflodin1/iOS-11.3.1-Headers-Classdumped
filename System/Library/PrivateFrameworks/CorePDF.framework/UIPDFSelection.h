/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPage;

@interface UIPDFSelection : NSObject {

	UIPDFPage* _page;
	CGPDFSelectionRef _cgSelection;
	BOOL _dirty;
	CFStringRef _string;
	long long _cachedStartIndex;
	long long _cachedEndIndex;
	SCD_Struct_CP17 stringRange;

}

@property (assign,nonatomic) SCD_Struct_CP17 stringRange; 
-(unsigned long long)startIndex;
-(unsigned long long)endIndex;
-(id)init;
-(CGRect)bounds;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(id)string;
-(CGAffineTransform)transform;
-(SCD_Struct_CP17)extent;
-(id)page;
-(unsigned long long)numberOfRectangles;
-(BOOL)getBounds:(CGRect*)arg1 transform:(CGAffineTransform*)arg2 index:(unsigned long long)arg3 ;
-(id)attributedStringAtIndex:(unsigned long long)arg1 ;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_UI6)rectangleAtIndex:(unsigned long long)arg1 scale:(double)arg2 inset:(double)arg3 ;
-(id)initWithPage:(id)arg1 cgSelection:(CGPDFSelectionRef)arg2 ;
-(CGPDFSelectionRef)CGSelection;
-(id)initWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(id)initWithSelection:(id)arg1 ;
-(BOOL)isNonEmpty;
-(id)selectionExtendedToLineBoundaries;
-(id)containingTextLine;
-(BOOL)isWord;
-(id)htmlAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)extendAtStart:(unsigned long long)arg1 ;
-(unsigned long long)extendAtEnd:(unsigned long long)arg1 ;
-(void)copyToPasteboard;
-(double)baseLineAtIndex:(unsigned long long)arg1 ;
-(void)extendToParagraph;
-(id)initWithPage:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)setStringRange:(SCD_Struct_CP17)arg1 ;
-(SCD_Struct_CP17)stringRange;
-(id)archive;
@end

