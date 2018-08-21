/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CATextLayer.h>

@interface CASmoothedTextLayer : CATextLayer

@property (assign) unsigned fontSmoothingStyle; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(CGColorSpaceRef)_retainColorSpace;
-(unsigned)fontSmoothingStyle;
-(void)setFontSmoothingStyle:(unsigned)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
@end

