/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFAKPageAdaptorPrivate, PDFPage, AKPageModelController;

@interface PDFAKPageAdaptor : NSObject {

	PDFAKPageAdaptorPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * pdfPage; 
@property (nonatomic,readonly) AKPageModelController * akPageModelController; 
-(void)dealloc;
-(void)teardown;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)initializeExifAndScaleOnAnnotation:(id)arg1 ;
-(PDFPage *)pdfPage;
-(AKPageModelController *)akPageModelController;
-(id)initWithPDFPage:(id)arg1 pageModelController:(id)arg2 ;
-(void)_startObservingPageModel;
-(void)_stopObservingPageModel;
-(void)_annotationsWereRemoved:(id)arg1 ;
-(void)_annotationsWereAdded:(id)arg1 ;
-(id)initWithPDFPage:(id)arg1 ;
-(void)pdfPage:(id)arg1 didAddAnnotation:(id)arg2 ;
-(void)pdfPage:(id)arg1 didRemoveAnnotation:(id)arg2 ;
-(void)pdfPageWasRotated:(id)arg1 ;
-(void)_teardown;
@end

