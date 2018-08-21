/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>
#import <libobjc.A.dylib/MTMaterialSettings.h>
#import <libobjc.A.dylib/MTMaterialSettingsObservable.h>

@class MTVibrantStylingProvider, NSString;

@interface MTSystemMaterialSettings : _UISettings <MTMaterialSettings, MTMaterialSettingsObservable> {

	BOOL _usesLuminanceMap;
	double _blurRadius;
	double _luminanceAlpha;
	double _saturation;
	double _brightness;
	double _tintAlpha;
	MTVibrantStylingProvider* _vibrantStylingProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL usesLuminanceMap;                                                   //@synthesize usesLuminanceMap=_usesLuminanceMap - In the implementation block
@property (assign,nonatomic) double blurRadius;                                                       //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double luminanceAlpha;                                                   //@synthesize luminanceAlpha=_luminanceAlpha - In the implementation block
@property (assign,nonatomic) double saturation;                                                       //@synthesize saturation=_saturation - In the implementation block
@property (assign,nonatomic) double brightness;                                                       //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) double tintAlpha;                                                        //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (nonatomic,__weak,readonly) MTVibrantStylingProvider * vibrantStylingProvider;              //@synthesize vibrantStylingProvider=_vibrantStylingProvider - In the implementation block
+(id)settingsControllerModule;
+(id)sharedMaterialSettings;
+(id)_luminanceRow;
+(id)_backdropRows;
+(id)_lightOverlayRows;
+(id)_luminanceRows;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(void)setDefaultValues;
-(id)archiveValueForKey:(id)arg1 ;
-(void)restoreDefaultValues;
-(void)addKeyObserver:(id)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(double)tintAlpha;
-(void)updateWithSettingsFromArchive:(id)arg1 ;
-(BOOL)usesLuminanceMap;
-(void)setUsesLuminanceMap:(BOOL)arg1 ;
-(double)luminanceAlpha;
-(void)setLuminanceAlpha:(double)arg1 ;
-(void)setTintAlpha:(double)arg1 ;
-(Class)vibrantStylingProviderClass;
-(double)saturation;
-(void)setSaturation:(double)arg1 ;
-(MTVibrantStylingProvider *)vibrantStylingProvider;
@end
