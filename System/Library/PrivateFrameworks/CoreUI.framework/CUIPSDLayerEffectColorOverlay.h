/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;

}

@property (assign) int blendMode;                 //@synthesize blendMode=_blendMode - In the implementation block
@property (retain) CUIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign) double opacity;                //@synthesize opacity=_opacity - In the implementation block
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(unsigned)effectType;
@end

