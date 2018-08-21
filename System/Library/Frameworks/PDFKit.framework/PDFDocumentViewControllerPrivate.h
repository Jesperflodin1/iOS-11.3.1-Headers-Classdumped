/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFView, PDFDocument, PDFRenderingProperties, PDFPageViewController, PDFPageBackgroundManager, UIScrollView;

@interface PDFDocumentViewControllerPrivate : NSObject {

	PDFView* pdfView;
	PDFDocument* document;
	PDFRenderingProperties* renderingProperties;
	PDFPageViewController* activePageView;
	PDFPageBackgroundManager* pageBackgroundManager;
	double minScale;
	double maxScale;
	BOOL displaysRTL;
	UIScrollView* scrollView;
	BOOL showTextSelectionHandles;

}
@end

