/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class EAGLContext, TDreamFramebufferManager, NSMutableDictionary, NSArray;

@interface TDreamManager : NSObject {

	EAGLContext* glContext;
	TDreamFramebufferManager* framebufferManager;
	NSMutableDictionary* _contextProgramMap;
	int oldFilterMode;
	int filterMode;
	float BRIGHTNESSPARAM;
	float LOOSEPARAM;
	float SMOOTHPARAM;
	float AUX1INPUT;
	float AUX2INPUT;
	float AUX3INPUT;
	float inputAspectRatio;
	IPImage outputImage;
	IPImage inputImage;
	IPImage maskImage;
	CGSize inputTextureSize;
	CGSize smallUseSize;
	CGSize largeUseSize;
	float vigneteR;
	float vigneteG;
	float vigneteB;
	float vigneteGaux;
	float vigneteBaux;
	float false1R;
	float false1G;
	float false1B;
	float false2R;
	float false2G;
	float false2B;
	NSArray* lookupsEE;
	NSArray* lookupsBN;
	NSArray* lookups;
	float coloresVignetteLookUpsBN[8][3];
	float coloresVignetteLookUpsNORMALES[8][3];
	float coloresVignetteLookUpsEspeciales[8][3];
	float coloresDobles[8][6];
	float coloresVignette[10][3];
	BOOL lookUpTextureNeedUpdate;
	int modeLookUps;
	int lookUpIndex;

}
-(id)init;
-(void)dealloc;
-(void)renderPipeline;
-(id)glContext;
-(void)fillConstants;
-(void)allocatePrograms:(id)arg1 ;
-(id)programsForCurrentContext;
-(void)newLookUpFilterMode;
-(void)setUniformsAndParameters;
-(unsigned)bufferFromCacheNumber:(int)arg1 ;
-(unsigned)textureFromCacheNumber:(int)arg1 ;
-(BOOL)updateParameters:(imageProcessingParams)arg1 ;
-(BOOL)checkIPImage:(const IPImage*)arg1 ;
-(BOOL)checkMaskIPImage:(const IPImage*)arg1 ;
-(long long)processTextureOnTexture:(const IPImage*)arg1 andOutput:(const IPImage*)arg2 andParams:(imageProcessingParams)arg3 withMask:(const IPImage*)arg4 ;
-(void)setBlackFillBasedOnSlider;
-(long long)processTextureOnTexture:(const IPImage*)arg1 andOutput:(const IPImage*)arg2 andParams:(imageProcessingParams)arg3 ;
-(int)largeBufferCount;
-(int)smallBufferCount;
-(void)addImageBufferToPool:(int)arg1 ipImage:(IPImage)arg2 ;
-(unsigned)getOutputBufferName;
-(void)deleteAllFilters;
@end

