/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, NTKDotView;

@interface NTKRingsAndDotsView : UIView {

	BOOL _showsDotOnRing;
	BOOL _showsRingsBackground;
	double _dotDiameter;
	double _dotPositionFraction;
	NSArray* _ringColors;
	NSMutableArray* _ringsFillFractions;
	UIColor* _foregroundColor;
	UIColor* _secondaryForegroundColor;
	double _diameter;
	double _ringWidth;
	double _ringGapWidth;
	double _radiusForDotViewRing;
	double _appearanceAnimationProgress;
	NSArray* _ringViews;
	NTKDotView* _dotView;

}

@property (assign,nonatomic) double diameter;                                  //@synthesize diameter=_diameter - In the implementation block
@property (assign,nonatomic) double ringWidth;                                 //@synthesize ringWidth=_ringWidth - In the implementation block
@property (assign,nonatomic) double ringGapWidth;                              //@synthesize ringGapWidth=_ringGapWidth - In the implementation block
@property (assign,nonatomic) double radiusForDotViewRing;                      //@synthesize radiusForDotViewRing=_radiusForDotViewRing - In the implementation block
@property (assign,nonatomic) double appearanceAnimationProgress;               //@synthesize appearanceAnimationProgress=_appearanceAnimationProgress - In the implementation block
@property (assign,nonatomic) BOOL showsRingsBackground;                        //@synthesize showsRingsBackground=_showsRingsBackground - In the implementation block
@property (nonatomic,retain) NSArray * ringViews;                              //@synthesize ringViews=_ringViews - In the implementation block
@property (nonatomic,retain) NTKDotView * dotView;                             //@synthesize dotView=_dotView - In the implementation block
@property (assign,nonatomic) BOOL showsDotOnRing;                              //@synthesize showsDotOnRing=_showsDotOnRing - In the implementation block
@property (assign,nonatomic) double dotDiameter;                               //@synthesize dotDiameter=_dotDiameter - In the implementation block
@property (assign,nonatomic) double dotPositionFraction;                       //@synthesize dotPositionFraction=_dotPositionFraction - In the implementation block
@property (nonatomic,retain) NSArray * ringColors;                             //@synthesize ringColors=_ringColors - In the implementation block
@property (nonatomic,retain) NSMutableArray * ringsFillFractions;              //@synthesize ringsFillFractions=_ringsFillFractions - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                        //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryForegroundColor;               //@synthesize secondaryForegroundColor=_secondaryForegroundColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_update;
-(void)setDotView:(NTKDotView *)arg1 ;
-(NTKDotView *)dotView;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(UIColor *)secondaryForegroundColor;
-(double)dotDiameter;
-(void)setSecondaryForegroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 diameter:(double)arg2 ringWidth:(double)arg3 ringGapWidth:(double)arg4 showsRingsBackground:(BOOL)arg5 ;
-(void)setRingsFillFractions:(NSMutableArray *)arg1 ;
-(void)setDotDiameter:(double)arg1 ;
-(void)setShowsDotOnRing:(BOOL)arg1 ;
-(void)setRingColors:(NSArray *)arg1 ;
-(void)setRingWidth:(double)arg1 ;
-(void)setRingGapWidth:(double)arg1 ;
-(void)_setDiameter:(double)arg1 ;
-(void)setShowsRingsBackground:(BOOL)arg1 ;
-(double)radiusForRingAtIndex:(long long)arg1 ;
-(void)setRadiusForDotViewRing:(double)arg1 ;
-(void)setAppearanceAnimationProgress:(double)arg1 ;
-(double)_dotPositionFractionWithAnimationProgress:(double)arg1 ;
-(void)_positionDotViewWithPositionFraction:(double)arg1 ;
-(void)setDotPositionFraction:(double)arg1 ;
-(void)prepareAppearanceAnimation;
-(void)performAppearanceAnimation;
-(void)cancelAppearanceAnimation;
-(BOOL)showsDotOnRing;
-(double)dotPositionFraction;
-(NSArray *)ringColors;
-(NSMutableArray *)ringsFillFractions;
-(double)ringWidth;
-(double)ringGapWidth;
-(double)radiusForDotViewRing;
-(double)appearanceAnimationProgress;
-(BOOL)showsRingsBackground;
-(NSArray *)ringViews;
-(void)setRingViews:(NSArray *)arg1 ;
@end

