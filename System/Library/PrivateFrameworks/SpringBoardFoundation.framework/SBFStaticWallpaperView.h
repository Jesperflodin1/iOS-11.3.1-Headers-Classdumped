/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class UIImage, SBFColorBoxes, NSString;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	UIImage* _image;
	UIImage* _displayedImage;
	double _overallContrast;
	SBFColorBoxes* _colorBoxes;
	NSString* _cacheGroup;
	UIImage* _sampleImage;

}

@property (setter=_setDisplayedImage:,getter=_displayedImage,nonatomic,retain) UIImage * displayedImage;              //@synthesize displayedImage=_displayedImage - In the implementation block
@property (setter=_setSampleImage:,getter=_sampleImage,nonatomic,retain) UIImage * sampleImage;                       //@synthesize sampleImage=_sampleImage - In the implementation block
@property (nonatomic,retain) SBFColorBoxes * colorBoxes; 
+(BOOL)_allowsRasterization;
+(BOOL)_allowsParallax;
+(BOOL)_canCacheImages;
+(BOOL)_canDownscaleSampleImage;
-(void)setContentView:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(double)contrast;
-(float)_zoomScale;
-(id)initWithFrame:(CGRect)arg1 variant:(long long)arg2 wallpaperSettingsProvider:(id)arg3 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)_computeAverageColor;
-(id)cacheGroup;
-(void)_setUpStaticImageContentView:(id)arg1 ;
-(id)_displayedImage;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 options:(unsigned long long)arg5 wallpaperSettingsProvider:(id)arg6 ;
-(void)_setupContentView;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(double)_contrastInContentViewRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(BOOL)contrastRequiresTreatments;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(BOOL)hasContentOutsideVisibleBounds;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 wallpaperSettingsProvider:(id)arg4 ;
-(id)_repeatingGradientImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_createColorBoxes;
-(void)setColorBoxes:(SBFColorBoxes *)arg1 ;
-(id)_wallpaperImageForAnalysis;
-(void)_setSampleImage:(id)arg1 ;
-(void)_setDisplayedImage:(id)arg1 ;
-(void)_displayImage:(id)arg1 ;
-(id)_imageByDarkeningHighlightsInImage:(id)arg1 ;
-(void)_setupWallpaperImage:(id)arg1 options:(unsigned long long)arg2 ;
-(SBFColorBoxes *)colorBoxes;
-(void)_resetColorBoxes;
-(id)_sampleImage;
-(long long)wallpaperType;
-(id)wallpaperImage;
-(CGSize)_imageSize;
-(id)snapshotImage;
@end

