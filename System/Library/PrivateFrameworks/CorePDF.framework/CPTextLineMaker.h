/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface CPTextLineMaker : NSObject {

	NSMutableArray* textLines;

}
-(void)dealloc;
-(unsigned)makeTextLines:(id)arg1 ;
-(void)splitByGraphic:(id)arg1 with:(CPPDFContext*)arg2 ;
-(void)zOrderSplitLines:(id)arg1 ;
-(id)textLines;
@end

