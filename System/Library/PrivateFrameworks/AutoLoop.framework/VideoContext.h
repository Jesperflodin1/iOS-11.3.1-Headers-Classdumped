/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class CIContext, VideoWriter, NSDictionary;

@interface VideoContext : NSObject {

	BOOL _colorManagement;
	unsigned pixelFormatFlags;
	unsigned pixelFormat;
	CIContext* ciCtx;
	VideoWriter* writer;
	NSDictionary* pixelAttrs;

}

@property (readonly) NSDictionary * pixelAttrs; 
@property (readonly) unsigned pixelFormat; 
@property (assign) BOOL colorManagement;                     //@synthesize colorManagement=_colorManagement - In the implementation block
@property (readonly) CIContext * ciCtx; 
@property (readonly) VideoWriter * writer; 
@property (readonly) unsigned pixelFormatFlags; 
-(unsigned)pixelFormat;
-(id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned)arg2 colorManagement:(BOOL)arg3 ;
-(int)appendFrame:(id)arg1 frameTime:(SCD_Struct_Pr1)arg2 srcPixBuf:(CVBufferRef)arg3 ;
-(id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned)arg2 ;
-(CVBufferRef)createPixelBuffer:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(CVBufferRef)pixelBufferFromImage:(id)arg1 ;
-(CIContext *)ciCtx;
-(CVBufferRef)createPixelBuffer;
-(CVBufferRef)pixelBufferFromImage:(id)arg1 withAttachFrom:(CVBufferRef)arg2 ;
-(unsigned)pixelFormatFlags;
-(NSDictionary *)pixelAttrs;
-(BOOL)colorManagement;
-(void)setColorManagement:(BOOL)arg1 ;
-(VideoWriter *)writer;
@end

