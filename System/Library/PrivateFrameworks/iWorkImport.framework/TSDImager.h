/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class NSArray, TSUColor, TSKDocumentRoot, TSDCanvas, NSSet, NSString;

@interface TSDImager : NSObject <TSDCanvasDelegate> {

	NSArray* mInfos;
	TSUColor* mBackgroundColor;
	CGRect mUnscaledClipRect;
	double mViewScale;
	CGSize mScaledImageSize;
	CGSize mMaximumScaledImageSize;
	BOOL mUseScaledImageSize;
	BOOL mDistortedToMatch;
	BOOL mImageMustHaveEvenDimensions;
	BOOL mShouldReuseBitmapContext;
	TSKDocumentRoot* mDocumentRoot;
	TSDCanvas* mCanvas;
	CGRect mActualScaledClipRect;
	BOOL mDrawingIntoPDF;
	BOOL mIsPrinting;
	BOOL mImageIsRenderingForMovie;
	CGContextRef mReusableBitmapContext;
	CGRect mReusableBounds;
	CGRect mReusableIntegralBounds;
	CGRect mReusableActualScaledClipRect;
	CGSize mReusableScaledImageSize;
	NSSet* mPreviousRenderDatasNeedingDownload;
	/*^block*/id mPostRenderAction;

}

@property (nonatomic,copy) NSSet * previousRenderDatasNeedingDownload; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,retain) NSArray * infos; 
@property (nonatomic,copy) TSUColor * backgroundColor; 
@property (assign,nonatomic) CGRect unscaledClipRect; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGSize scaledImageSize; 
@property (assign,nonatomic) CGSize maximumScaledImageSize; 
@property (assign,nonatomic) BOOL distortedToMatch; 
@property (assign,nonatomic) BOOL imageMustHaveEvenDimensions; 
@property (nonatomic,readonly) CGRect actualScaledClipRect; 
@property (assign,nonatomic) BOOL shouldReuseBitmapContext; 
@property (assign,nonatomic) BOOL isPrinting; 
@property (assign,nonatomic) BOOL imageIsRenderingForMovie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TSDCanvasProxyDelegate> canvasProxyDelegate; 
-(BOOL)imageIsRenderingForMovie;
-(id)initWithDocumentRoot:(id)arg1 renderForWideGamut:(BOOL)arg2 ;
-(void)setInfos:(id)arg1 allowLayoutIfNeeded:(BOOL)arg2 ;
-(void)p_assertHasReadLock;
-(CGSize)p_evenDimensionsWithSize:(CGSize)arg1 ;
-(void)setPreviousRenderDatasNeedingDownload:(NSSet *)arg1 ;
-(NSSet *)previousRenderDatasNeedingDownload;
-(void)setImageIsRenderingForMovie:(BOOL)arg1 ;
-(void)setInfos:(NSArray *)arg1 ;
-(id)init;
-(void)setBackgroundColor:(TSUColor *)arg1 ;
-(TSUColor *)backgroundColor;
-(void)dealloc;
-(TSDCanvas *)canvas;
-(id)pdfData;
-(id)pngData;
-(NSArray *)infos;
-(id)documentRoot;
-(double)viewScale;
-(void)setViewScale:(double)arg1 ;
-(BOOL)isPrinting;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)isPrintingCanvas;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1 ;
-(BOOL)p_configureCanvas;
-(BOOL)shouldReuseBitmapContext;
-(CGImageRef)p_newImageInReusableContext;
-(void)p_drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(void)setPostRenderAction:(/*^block*/id)arg1 ;
-(CGSize)scaledImageSize;
-(void)setScaledImageSize:(CGSize)arg1 ;
-(CGSize)maximumScaledImageSize;
-(void)setMaximumScaledImageSize:(CGSize)arg1 ;
-(CGImageRef)newImage;
-(BOOL)drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(CGRect)unscaledClipRect;
-(void)setUnscaledClipRect:(CGRect)arg1 ;
-(CGRect)actualScaledClipRect;
-(BOOL)distortedToMatch;
-(void)setDistortedToMatch:(BOOL)arg1 ;
-(BOOL)imageMustHaveEvenDimensions;
-(void)setImageMustHaveEvenDimensions:(BOOL)arg1 ;
-(void)setShouldReuseBitmapContext:(BOOL)arg1 ;
-(void)setIsPrinting:(BOOL)arg1 ;
@end

