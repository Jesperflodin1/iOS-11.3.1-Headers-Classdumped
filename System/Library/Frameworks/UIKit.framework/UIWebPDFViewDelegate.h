/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIWebPDFViewDelegate
@optional
-(id)passwordForPDFView:(id)arg1;
-(void)didDetermineDocumentBounds:(id)arg1;
-(void)pdfView:(id)arg1 zoomToRect:(CGRect)arg2 forPoint:(CGPoint)arg3 considerHeight:(BOOL)arg4;
-(void)resetZoom:(id)arg1;
-(void)handleLinkClick:(id)arg1 inRect:(CGRect)arg2;
-(void)handleLongPressOnLink:(id)arg1 atPoint:(CGPoint)arg2 inRect:(CGRect)arg3 contentRect:(CGRect)arg4;

@end

