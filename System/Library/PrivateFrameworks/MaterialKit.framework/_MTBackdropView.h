/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface _MTBackdropView : UIView {

	NSString* _luminanceColorMapName;
	BOOL _preservesFiltersAtZero;
	double _zoom;
	UIColor* _colorMatrixColor;
	UIColor* _colorAddColor;

}

@property (assign,setter=_setPreservesFiltersAtZero:,getter=_preservesFiltersAtZero,nonatomic) BOOL preservesFiltersAtZero;              //@synthesize preservesFiltersAtZero=_preservesFiltersAtZero - In the implementation block
@property (assign,nonatomic) double luminanceAlpha; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double saturation; 
@property (assign,nonatomic) double brightness; 
@property (assign,nonatomic) double zoom;                                                                                                //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) double rasterizationScale; 
@property (nonatomic,copy) UIColor * colorMatrixColor;                                                                                   //@synthesize colorMatrixColor=_colorMatrixColor - In the implementation block
@property (nonatomic,copy) UIColor * colorAddColor;                                                                                      //@synthesize colorAddColor=_colorAddColor - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
+(Class)layerClass;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(double)rasterizationScale;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(double)luminanceAlpha;
-(void)setLuminanceAlpha:(double)arg1 ;
-(void)_setPreservesFiltersAtZero:(BOOL)arg1 ;
-(id)_backdropLayer;
-(id)_luminanceColorMapName;
-(void)_setLuminanceColorMapName:(id)arg1 ;
-(void)setColorMatrixColor:(UIColor *)arg1 ;
-(void)setColorAddColor:(UIColor *)arg1 ;
-(void)_setFloatValue:(double)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
-(void)_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
-(void)_configureFilterOfTypeIfNecessary:(id)arg1 ;
-(void)_removeFilterOfTypeIfNecessary:(id)arg1 ;
-(UIColor *)colorMatrixColor;
-(UIColor *)colorAddColor;
-(BOOL)_preservesFiltersAtZero;
-(double)saturation;
-(void)setSaturation:(double)arg1 ;
@end

