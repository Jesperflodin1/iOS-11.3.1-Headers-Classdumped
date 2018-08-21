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
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor;

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;

}

@property (nonatomic,readonly) CGColorRef CGColor; 
@property (nonatomic,copy,readonly) TSUColor * color; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double hue; 
@property (nonatomic,readonly) double saturation; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) double luminance; 
+(id)whiteColor;
+(id)grayColor;
+(id)blackColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)clearColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)randomColor;
+(id)colorWithUIColor:(id)arg1 ;
+(id)colorWithColor:(id)arg1 ;
+(id)keyPathsForValuesAffectingCGColor;
+(id)keyPathsForValuesAffectingOpacity;
+(id)keyPathsForValuesAffectingLuminance;
+(id)keyPathsForValuesAffectingHue;
+(id)keyPathsForValuesAffectingSaturation;
+(id)keyPathsForValuesAffectingBrightness;
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(TSUColor *)color;
-(BOOL)isOpaque;
-(id)initWithColor:(id)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(double)brightness;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)referenceColor;
-(id)initWithUIColor:(id)arg1 ;
-(SEL)mapThemeAssetSelector;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)grayscaleColor;
-(id)invertedColor;
-(double)luminance;
-(int)fillType;
-(BOOL)isNearlyWhite;
-(BOOL)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)drawsInOneStep;
-(BOOL)isClear;
-(void)applyToCALayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)canApplyToCALayer;
-(double)saturation;
-(id)UIColor;
-(double)p_hsbComponentWithIndex:(unsigned long long)arg1 ;
-(double)hue;
@end

