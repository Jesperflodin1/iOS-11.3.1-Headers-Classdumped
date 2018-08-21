/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>
#import <iWorkImport/TSSPresetSource.h>
#import <iWorkImport/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray, NSArray, TSUColor;

@interface TSDGradient : TSDFill <TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying> {

	NSMutableArray* mStops;
	unsigned long long mType;
	double mOpacity;
	CGShadingRef mShadingRef;
	BOOL mIsAdvancedGradient;

}

@property (nonatomic,retain,readonly) NSArray * gradientStops; 
@property (nonatomic,readonly) TSUColor * firstColor; 
@property (nonatomic,readonly) TSUColor * lastColor; 
@property (nonatomic,readonly) unsigned long long gradientType; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) CGShadingRef shadingRef; 
@property (nonatomic,readonly) BOOL isAdvancedGradient; 
@property (nonatomic,readonly) BOOL hasAlpha; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(BOOL)useInflections;
+(void)enableInflections;
+(void)disableInflections;
+(BOOL)useQuartzShadings;
+(void)sortStopsArray:(id)arg1 ;
+(id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)linearGradientWithGradientStops:(id)arg1 ;
+(id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)radialGradientWithGradientStops:(id)arg1 ;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(void)p_setOpacity:(double)arg1 ;
-(void)p_setIsAdvancedGradient:(BOOL)arg1 ;
-(id)stopAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(BOOL)isOpaque;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)referenceColor;
-(SEL)mapThemeAssetSelector;
-(id)presetKind;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)newColorAtFraction:(double)arg1 ;
-(id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3 ;
-(id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 ;
-(void)releaseShadingRef;
-(unsigned long long)gradientType;
-(NSArray *)gradientStops;
-(BOOL)isAdvancedGradient;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3 ;
-(TSUColor *)firstColor;
-(BOOL)isAdvancedGradientIgnoringFlag;
-(TSUColor *)lastColor;
-(id)stopBeforeFraction:(double)arg1 ;
-(id)stopAfterFraction:(double)arg1 ;
-(id)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2 ;
-(void)p_insertGradientStop:(id)arg1 ;
-(BOOL)isEqualIgnoringTransform:(id)arg1 ;
-(CGShadingRef)shadingRef;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 atAngle:(double)arg3 ;
-(CGAffineTransform)centeredRadialTransformInRect:(CGRect)arg1 ;
-(BOOL)hasAlpha;
-(int)fillType;
-(CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(void)p_setAlpha:(CGContextRef)arg1 ;
-(CGContextRef)p_beginBitmapWrapperContextInContext:(CGContextRef)arg1 returningIntegralBounds:(CGRect*)arg2 ;
-(void)p_endBitmapWrapperContext:(CGContextRef)arg1 inContext:(CGContextRef)arg2 withIntegralBounds:(CGRect)arg3 ;
-(void)p_setGradientStops:(id)arg1 ;
-(void)p_removeStop:(id)arg1 ;
-(id)p_removeStopAtIndex:(unsigned long long)arg1 ;
-(id)p_insertStopAtFraction:(double)arg1 ;
-(void)p_reverseStopOrder;
-(void)p_evenlyDistributeStops;
-(void)p_setGradientType:(unsigned long long)arg1 ;
-(void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2 ;
-(void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2 ;
-(void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2 ;
-(void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2 ;
@end

