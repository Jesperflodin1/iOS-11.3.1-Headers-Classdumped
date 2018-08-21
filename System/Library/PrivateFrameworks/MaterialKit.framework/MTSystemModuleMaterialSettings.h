/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MaterialKit/MTSystemMaterialSettings.h>
#import <libobjc.A.dylib/MTMaterialLuminanceOverlaySettings.h>
#import <libobjc.A.dylib/_MTMaterialVersioning.h>
#import <libobjc.A.dylib/MTZooming.h>

@class UIColor, NSString;

@interface MTSystemModuleMaterialSettings : MTSystemMaterialSettings <MTMaterialLuminanceOverlaySettings, _MTMaterialVersioning, MTZooming> {

	double _baseOverlaySaturation;
	double _baseOverlayBrightness;
	double _baseOverlayTintAlpha;
	double _primaryOverlaySaturation;
	double _primaryOverlayBrightness;
	double _primaryOverlayTintAlpha;
	double _secondaryOverlaySaturation;
	double _secondaryOverlayBrightness;
	double _auxiliaryOverlayBlurRadius;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) UIColor * primaryOverlayTintColor; 
@property (assign,nonatomic) double primaryOverlayTintAlpha;                          //@synthesize primaryOverlayTintAlpha=_primaryOverlayTintAlpha - In the implementation block
@property (nonatomic,copy,readonly) UIColor * secondaryOverlayTintColor; 
@property (assign,nonatomic) double secondaryOverlayTintAlpha; 
@property (nonatomic,copy,readonly) UIColor * baseOverlayColor; 
@property (assign,nonatomic) double baseOverlayTintAlpha;                             //@synthesize baseOverlayTintAlpha=_baseOverlayTintAlpha - In the implementation block
@property (assign,nonatomic) double baseOverlaySaturation;                            //@synthesize baseOverlaySaturation=_baseOverlaySaturation - In the implementation block
@property (assign,nonatomic) double baseOverlayBrightness;                            //@synthesize baseOverlayBrightness=_baseOverlayBrightness - In the implementation block
@property (assign,nonatomic) double primaryOverlaySaturation;                         //@synthesize primaryOverlaySaturation=_primaryOverlaySaturation - In the implementation block
@property (assign,nonatomic) double primaryOverlayBrightness;                         //@synthesize primaryOverlayBrightness=_primaryOverlayBrightness - In the implementation block
@property (assign,nonatomic) double secondaryOverlaySaturation;                       //@synthesize secondaryOverlaySaturation=_secondaryOverlaySaturation - In the implementation block
@property (assign,nonatomic) double secondaryOverlayBrightness;                       //@synthesize secondaryOverlayBrightness=_secondaryOverlayBrightness - In the implementation block
@property (assign,nonatomic) double auxiliaryOverlayBlurRadius;                       //@synthesize auxiliaryOverlayBlurRadius=_auxiliaryOverlayBlurRadius - In the implementation block
@property (nonatomic,readonly) long long materialVersion; 
@property (nonatomic,readonly) double zoom; 
+(id)sharedMaterialSettings;
-(double)zoom;
-(BOOL)usesLuminanceMap;
-(void)setUsesLuminanceMap:(BOOL)arg1 ;
-(UIColor *)primaryOverlayTintColor;
-(double)primaryOverlayTintAlpha;
-(void)setPrimaryOverlayTintAlpha:(double)arg1 ;
-(UIColor *)secondaryOverlayTintColor;
-(double)secondaryOverlayTintAlpha;
-(void)setSecondaryOverlayTintAlpha:(double)arg1 ;
-(long long)materialVersion;
-(Class)vibrantStylingProviderClass;
-(UIColor *)baseOverlayColor;
-(double)baseOverlayTintAlpha;
-(void)setBaseOverlayTintAlpha:(double)arg1 ;
-(double)baseOverlaySaturation;
-(void)setBaseOverlaySaturation:(double)arg1 ;
-(double)baseOverlayBrightness;
-(void)setBaseOverlayBrightness:(double)arg1 ;
-(double)primaryOverlaySaturation;
-(void)setPrimaryOverlaySaturation:(double)arg1 ;
-(double)primaryOverlayBrightness;
-(void)setPrimaryOverlayBrightness:(double)arg1 ;
-(double)secondaryOverlaySaturation;
-(void)setSecondaryOverlaySaturation:(double)arg1 ;
-(double)secondaryOverlayBrightness;
-(void)setSecondaryOverlayBrightness:(double)arg1 ;
-(double)auxiliaryOverlayBlurRadius;
-(void)setAuxiliaryOverlayBlurRadius:(double)arg1 ;
@end

