/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSOperationQueue;

@interface TSDSwatchCache : NSObject {

	NSOperationQueue* mOperationQueue;

}
+(void)applyFakeShadowForPresetsIfNecessary:(id)arg1 documentRoot:(id)arg2 ;
+(CGImageRef)newImageForDarkBackground:(CGImageRef)arg1 atScale:(double)arg2 ofSize:(CGSize)arg3 inset:(CGSize)arg4 ;
+(id)swatchCache;
-(id)imageForShapePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 shapeType:(int)arg4 shapePathSource:(id)arg5 angle:(double)arg6 documentRoot:(id)arg7 renderForWideGamut:(BOOL)arg8 ;
-(id)imageForImagePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 imageInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6 renderForWideGamut:(BOOL)arg7 ;
-(id)imageForMoviePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 movieInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6 renderForWideGamut:(BOOL)arg7 ;
-(CGSize)swatchInsetForShapeStyle:(id)arg1 shapeType:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(CGSize)shapeSwatchInset;
-(CGImageRef)p_newImageWithConnectionLineKnobsForShape:(id)arg1 atScale:(double)arg2 ofSize:(CGSize)arg3 overImage:(CGImageRef)arg4 ;
-(id)p_thumbnailImageDataForImageData:(id)arg1 ;
-(id)p_maskInfoForMovieInfo:(id)arg1 context:(id)arg2 ;
-(void)warmStyle:(id)arg1 withFillProperty:(int)arg2 documentRoot:(id)arg3 ;
-(CGSize)imageSizeForPreset:(id)arg1 swatchSize:(CGSize)arg2 ;
@end

