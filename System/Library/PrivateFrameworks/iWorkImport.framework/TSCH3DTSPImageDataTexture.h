/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexture.h>

@class TSCH3DTSPImageData, TSCH3DTSPMipmapData, NSNumber, TSDColorFill, NSString, TSUOnce, TSPData;

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture {

	TSCH3DTSPImageData* mData;
	TSCH3DTSPMipmapData* mOptimizedMipmapData;
	NSNumber* mCachedHash;
	TSDColorFill* mColorFill;
	NSString* mTextureSetId;
	NSString* mImageName;
	TSUOnce* mCachedHashOnce;

}

@property (nonatomic,readonly) TSCH3DTSPImageData * data; 
@property (nonatomic,readonly) TSPData * imageData; 
+(id)instanceWithArchive:(const Chart3DTSPImageDataTextureArchive*)arg1 unarchiver:(id)arg2 ;
+(id)textureWithImageData:(id)arg1 colorFill:(id)arg2 optimizedMipmapData:(id)arg3 textureSetId:(id)arg4 imageName:(id)arg5 ;
+(id)textureWithImageData:(id)arg1 colorFill:(id)arg2 textureSetId:(id)arg3 imageName:(id)arg4 ;
+(id)textureWithImageData:(id)arg1 optimizedMipmapData:(id)arg2 textureSetId:(id)arg3 imageName:(id)arg4 ;
-(void)saveToArchive:(Chart3DTSPImageDataTextureArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DTSPImageDataTextureArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1 ;
-(id)optimizedMipmapBuffer;
-(id)databufferForDataCache:(id)arg1 ;
-(id)representativeColorBuffer;
-(BOOL)hasCompleteData;
-(id)initWithImageData:(id)arg1 colorFill:(id)arg2 optimizedMipmapData:(id)arg3 textureSetId:(id)arg4 imageName:(id)arg5 ;
-(void)p_setOptimizedMipMapData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSCH3DTSPImageData *)data;
-(TSPData *)imageData;
-(void)setChanged:(BOOL)arg1 ;
@end

