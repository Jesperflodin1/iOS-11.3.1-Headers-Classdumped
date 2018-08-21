/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDFill.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSSPreset.h>
#import <TSReading/TSSPresetSource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class TSPData, TSUColor, TSUFlushableCachedImage, NSObject, NSString;

@interface TSDImageFill : TSDFill <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying> {

	TSPData* mImageData;
	TSPData* mOriginalImageData;
	BOOL mInterpretsUntaggedImageDataAsGeneric;
	int mTechnique;
	TSUColor* mTintColor;
	TSUFlushableCachedImage* mStandardSizeTintedImage;
	TSUFlushableCachedImage* mHalfSizeTintedImage;
	TSUFlushableCachedImage* mQuarterSizeTintedImage;
	TSUColor* mReferenceColor;
	CGSize mFillSize;
	BOOL mHasIndicatedInterestInProvider;
	NSObject*<OS_dispatch_queue> mTempRenderLock;
	CGImageRef mTempRenderCopy;
	CGImageRef mSourceOfTempRenderCopy;
	long long mTempRenderCount;

}

@property (assign,nonatomic) int technique; 
@property (nonatomic,retain,readonly) TSPData * imageData; 
@property (nonatomic,retain,readonly) TSPData * originalImageData; 
@property (nonatomic,readonly) BOOL interpretsUntaggedImageDataAsGeneric; 
@property (nonatomic,readonly) CGSize fillSize; 
@property (nonatomic,copy,readonly) TSUColor * tintColor; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) NSString * presetKind; 
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
-(double)scale;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSUColor *)tintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOpaque;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)referenceColor;
-(TSPData *)imageData;
-(SEL)mapThemeAssetSelector;
-(NSString *)presetKind;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(int)fillType;
-(void)p_paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(BOOL)drawsInOneStep;
-(TSPData *)originalImageData;
-(CGSize)renderedImageSizeForObjectSize:(CGSize)arg1 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 forShapeRep:(id)arg2 inContext:(CGContextRef)arg3 ;
-(void)applyToCALayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)canApplyToCALayer;
-(id)p_validatedImageProvider;
-(BOOL)interpretsUntaggedImageDataAsGeneric;
-(id)initWithImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(CGSize)arg4 originalImageData:(id)arg5 ;
-(CGSize)fillSize;
-(void)p_setFillSizeForApplicationData;
-(int)technique;
-(id)p_standardSizeCachedImage;
-(BOOL)p_shouldApplyTintedImage;
-(id)p_quarterSizeCachedImage;
-(id)p_halfSizeCachedImage;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(id)p_cachedImageForSize:(CGSize)arg1 inContext:(CGContextRef)arg2 orLayer:(id)arg3 ;
-(CGRect)p_drawnRectForImageSize:(CGSize)arg1 destRect:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(CGSize)p_sizeOfFillImageForDestRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)p_drawBitmapImage:(CGImageRef)arg1 withOrientation:(long long)arg2 inContext:(CGContextRef)arg3 bounds:(CGRect)arg4 ;
-(void)p_drawPDFWithProvider:(id)arg1 inContext:(CGContextRef)arg2 bounds:(CGRect)arg3 ;
-(CGImageRef)p_newTintedImageWithScale:(double)arg1 ;
-(CGImageRef)p_newStandardSizeImage;
-(CGImageRef)p_newHalfSizeImage;
-(CGImageRef)p_newQuarterSizeImage;
-(id)initWithGenericImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(CGSize)arg4 originalImageData:(id)arg5 ;
-(id)imageDataAtFillSize;
-(BOOL)shouldBeReappliedToCALayer:(id)arg1 ;
-(void)i_flushCaches;
-(void)setTechnique:(int)arg1 ;
@end

