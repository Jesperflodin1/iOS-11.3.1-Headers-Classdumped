/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, NSLock;

@interface PDFViewLayoutPrivate : NSObject {

	id delegate;
	BOOL delegateKnowsMargins;
	BOOL delegateKnowsDisplayMode;
	BOOL delegateKnowsDisplayAsBook;
	BOOL delegateKnowsDisplayBox;
	BOOL delegateKnowsDisplayRTL;
	BOOL delegateKnowsDisplaysDirection;
	BOOL delegateKnowsIsUsingPageViewController;
	PDFDocument* document;
	unsigned long long pageCount;
	NSLock* pageLayoutLock;
	CGRect* pageLayoutBounds;
	CGSize singlePageContinuousSize;
	CGSize twoUpContinousSize;
	long long cachedContinuousSizeDisplayDirection;

}
@end

