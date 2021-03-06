/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPTextObject : CPChunk {

	CGPoint anchor;
	BOOL metricInfoCalculated;
	float maxFontSize;
	double maxFontLineHeight;

}
-(void)translateObjectYBy:(double)arg1 ;
-(void)clearCachedInfo;
-(double)maxFontLineHeight;
-(float)maxFontSize;
-(void)calculateMetrics;
@end

