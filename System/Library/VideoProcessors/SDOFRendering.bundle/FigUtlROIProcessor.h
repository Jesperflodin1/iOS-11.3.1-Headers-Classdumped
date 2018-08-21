/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/SDOFRendering.bundle/SDOFRendering
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SDOFRendering/SDOFRendering-Structs.h>
@class FigM2MController;

@interface FigUtlROIProcessor : NSObject {

	int _originalWidth;
	int _originalHeight;
	CGRect _roiInPixels;
	CGRect _originalRectangle;
	int _orientation;
	FigM2MController* _m2m;
	int _width;
	int _height;
	CVBufferRef _pixelBuffer;
	CGRect _roiRectangle;
	SCD_Struct_Fi7 _originalToRoiMatrix;
	SCD_Struct_Fi7 _roiToOriginalMatrix;

}

@property (readonly) SCD_Struct_Fi7 originalToRoiMatrix;              //@synthesize originalToRoiMatrix=_originalToRoiMatrix - In the implementation block
@property (readonly) SCD_Struct_Fi7 roiToOriginalMatrix;              //@synthesize roiToOriginalMatrix=_roiToOriginalMatrix - In the implementation block
@property (readonly) CGRect roiRectangle;                             //@synthesize roiRectangle=_roiRectangle - In the implementation block
@property (readonly) CVBufferRef pixelBuffer;                         //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) int width;                                       //@synthesize width=_width - In the implementation block
@property (readonly) int height;                                      //@synthesize height=_height - In the implementation block
-(id)initWithWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 ;
-(BOOL)processImage:(CVBufferRef)arg1 orientation:(int)arg2 rect:(CGRect)arg3 ;
-(SCD_Struct_Fi7)originalToRoiMatrix;
-(SCD_Struct_Fi7)roiToOriginalMatrix;
-(CGPoint)roiToOriginal:(CGPoint)arg1 ;
-(CGPoint)originalToRoi:(CGPoint)arg1 ;
-(SCD_Struct_Fi7)matrix:(int)arg1 rectangle:(CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4 inverse:(SCD_Struct_Fi7*)arg5 ;
-(CGPoint)originalToRoiPixels:(CGPoint)arg1 ;
-(CGPoint)roiToOriginalPixels:(CGPoint)arg1 ;
-(CGRect)roiRectangle;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(int)height;
-(int)width;
@end
