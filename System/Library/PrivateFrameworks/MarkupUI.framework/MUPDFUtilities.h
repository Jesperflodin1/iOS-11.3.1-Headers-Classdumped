/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUPDFUtilities : NSObject
+(unsigned long long)normalizedRotationAngleOfPage:(CGPDFPageRef)arg1 ;
+(id)createPDFDateString:(id)arg1 ;
+(id)createDictionaryFromPDFDictionary:(CGPDFDictionaryRef)arg1 ;
+(unsigned long long)indexOfDictionary:(CGPDFDictionaryRef)arg1 inArray:(CGPDFArrayRef)arg2 ;
+(long long)exifOrientationOfPage:(CGPDFPageRef)arg1 ;
+(CGAffineTransform)flattenRotationTransformForPage:(CGPDFPageRef)arg1 outMediaBox:(CGRect*)arg2 outCropBox:(CGRect*)arg3 ;
@end
