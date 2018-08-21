/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProgressUI/ProgressUI-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CAContext, CALayer, NSString;

@interface PUIProgressWindow : NSObject <CALayerDelegate> {

	BOOL _weCreatedTheContext;
	CAContext* _context;
	int _deviceClass;
	CGSize _displaySize;
	CGSize _framebufferSize;
	CGSize _layerPositioningSize;
	float _displayScale;
	float _displayOrientation;
	BOOL _sideways;
	BOOL _renderWithIOSurface;
	id _framebufferListenerToken;
	float _currentProgress;
	CGImageRef _appleLogo;
	double _progressXDelta;
	double _progressYDelta;
	double _progressWidth;
	BOOL _forceInverted;
	BOOL _white;
	BOOL _showsProgressBar;
	CALayer* _progressLayer;
	IOSurfaceRef _ioSurface;
	CALayer* _ioSurfaceLayer;
	CALayer* _layer;

}

@property (nonatomic,readonly) CALayer * layer;                     //@synthesize layer=_layer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_usesPreBoardAppearance;
+(void)setUsesPreBoardAppearance;
-(id)init;
-(CALayer *)layer;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2 forceInverted:(BOOL)arg3 ;
-(id)initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3 ;
-(void)_collectDisplayInfo;
-(void)_createLayer;
-(void)_updateLayerForFramebufferSize:(CGSize)arg1 ;
-(void)_layoutScreen;
-(void)_updateIOSurface;
-(unsigned long long)_nanoDeviceType;
-(CGImageRef)_createImageWithName:(const char*)arg1 scale:(int)arg2 displayHeight:(int)arg3 ;
-(BOOL)_isNano;
-(void)_drawProgressLayerInContext:(CGContextRef)arg1 ;
-(const char*)_productSuffix;
-(const char*)_appleTVProductSuffix;
-(id)initWithForceInverted:(BOOL)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 context:(id)arg2 ;
-(int)_nanoMaterial;
-(id)initWithProgressBarVisibility:(BOOL)arg1 createContext:(BOOL)arg2 contextLevel:(float)arg3 appearance:(long long)arg4 ;
-(void)_createContext;
-(void)setProgressValue:(float)arg1 ;
@end

