/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFAKControllerDelegateProtocol;
@class PDFDocument, PDFView, AKController, AKToolbarView;

@interface PDFAKDocumentAdaptorPrivate : NSObject {

	BOOL isTornDown;
	PDFDocument* pdfDocument;
	PDFView* pdfView;
	AKController* akController;
	id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegate;
	AKToolbarView* akToolbarView;
	double modelBaseScaleFactor;

}
@end

