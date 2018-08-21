/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFAnnotation.h>

@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation {

	double _W;
	unsigned short _S;
	CGPDFArrayRef _D;
	double _SE;
	double _I;

}
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)strokePath:(CGContextRef)arg1 inRect:(CGRect)arg2 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
@end
