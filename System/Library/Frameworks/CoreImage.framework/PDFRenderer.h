/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PDFRenderer : CGRenderer {

	CFDictionaryRef info;
	CFDataRef data;
	CGDataConsumerRef dataConsumer;

}
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(const CFDataRef)pdfdata;
-(id)init;
-(void)dealloc;
-(void)setFileURL:(id)arg1 ;
@end

