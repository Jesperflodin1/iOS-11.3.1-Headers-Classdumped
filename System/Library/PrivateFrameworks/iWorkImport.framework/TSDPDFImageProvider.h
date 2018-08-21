/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDImageProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface TSDPDFImageProvider : TSDImageProvider {

	NSObject*<OS_dispatch_queue> _accessQueue;
	CGPDFDocumentRef _PDFDocument;
	CGSize _naturalSize;
	NSObject*<OS_dispatch_semaphore> _flushableContentLock;
	BOOL _hasFlushableContent;

}

@property (nonatomic,readonly) CGPDFDocumentRef CGPDFDocument; 
@property (nonatomic,readonly) long long pageAngle; 
-(BOOL)i_hasFlushableContent;
-(unsigned long long)i_flushableMemoryEstimate;
-(void)dealloc;
-(BOOL)isValid;
-(void)flush;
-(CGSize)naturalSize;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGPDFDocumentRef)CGPDFDocument;
-(void)i_commonInit;
-(void)p_loadIfNecessary;
-(CGPDFDocumentRef)p_load;
-(long long)pageAngle;
@end

