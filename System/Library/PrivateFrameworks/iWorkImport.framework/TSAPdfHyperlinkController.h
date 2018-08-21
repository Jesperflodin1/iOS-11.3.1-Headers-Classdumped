/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSAPdfHyperlinkController : NSObject {

	NSMutableArray* mHyperlinks;
	NSMutableArray* mDestinations;
	NSMutableArray* mOutlines;

}
-(id)p_hyperlinkRegionsForRep:(id)arg1 context:(CGContextRef)arg2 ;
-(void)addHyperlinksForRep:(id)arg1 context:(CGContextRef)arg2 ;
-(BOOL)ignoreUrl:(id)arg1 ;
-(id)p_chopBezierIntoRects:(id)arg1 ;
-(void)p_combineSimilarElements:(id)arg1 ;
-(BOOL)isDestination:(id)arg1 ;
-(void)p_commitDestinationToPDF:(id)arg1 cgrect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)p_commitUrlToPDF:(id)arg1 cgrect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(id)p_splitIntoSubshapes:(id)arg1 ;
-(id)destinationFromUrl:(id)arg1 ;
-(void)addHyperlinkForRect:(CGRect)arg1 withUrl:(id)arg2 context:(CGContextRef)arg3 ;
-(void)addHyperlinksForContents:(id)arg1 context:(CGContextRef)arg2 ;
-(void)commitHyperlinksToPDF:(CGContextRef)arg1 targetRect:(CGRect)arg2 ;
-(void)commitOutlinesToPDF:(CGContextRef)arg1 ;
-(id)init;
-(void)dealloc;
-(CGRect)canvasRect;
@end

