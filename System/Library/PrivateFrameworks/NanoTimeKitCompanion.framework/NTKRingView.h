/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringView.h>

@interface NTKRingView : NTKColoringView {

	BOOL _showsRingsBackground;
	double _ringWidth;
	double _radius;
	double _fillFraction;
	double _ringAnimationDelta;
	double _appearanceAnimationProgress;

}

@property (assign,nonatomic) double ringWidth;                                //@synthesize ringWidth=_ringWidth - In the implementation block
@property (assign,nonatomic) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double fillFraction;                             //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic) double ringAnimationDelta;                       //@synthesize ringAnimationDelta=_ringAnimationDelta - In the implementation block
@property (assign,nonatomic) double appearanceAnimationProgress;              //@synthesize appearanceAnimationProgress=_appearanceAnimationProgress - In the implementation block
@property (assign,nonatomic) BOOL showsRingsBackground;                       //@synthesize showsRingsBackground=_showsRingsBackground - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setFillFraction:(double)arg1 ;
-(double)fillFraction;
-(void)setRingWidth:(double)arg1 ;
-(void)setRingAnimationDelta:(double)arg1 ;
-(void)setShowsRingsBackground:(BOOL)arg1 ;
-(void)setAppearanceAnimationProgress:(double)arg1 ;
-(double)ringWidth;
-(double)appearanceAnimationProgress;
-(BOOL)showsRingsBackground;
-(void)_drawBackgroundRings;
-(void)_drawFillFractionRings;
-(void)_drawRingWithRadius:(double)arg1 fillFraction:(double)arg2 alpha:(double)arg3 ;
-(double)ringAnimationDelta;
@end

