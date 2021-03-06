/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDSwatchRenderingOperation.h>

@class TSDImageInfo;

@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation {

	TSDImageInfo* mImageInfo;
	BOOL mShouldClipVertically;

}

@property (retain) TSDImageInfo * imageInfo; 
-(TSDImageInfo *)imageInfo;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 ;
-(void)setImageInfo:(TSDImageInfo *)arg1 ;
@end

