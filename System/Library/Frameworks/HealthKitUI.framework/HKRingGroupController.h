/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKAnimatableObject.h>

@protocol HKRingGroupAnimationStatusDelegate;
@class NSArray;

@interface HKRingGroupController : HKAnimatableObject {

	long long* _iconAnimationFrameNumbers;
	long long _numberOfRings;
	double _ringDiameter;
	double _ringInterspacing;
	double _ringThickness;
	double _ringIconSize;
	double _ringScale;
	double _zRotation;
	double _backingOrigin;
	double _additionalSpacingAtIndex;
	NSArray* _rings;
	id<HKRingGroupAnimationStatusDelegate> _animationStatusDelegate;
	CGPoint _center;

}

@property (nonatomic,retain) NSArray * rings;                                                                    //@synthesize rings=_rings - In the implementation block
@property (assign,nonatomic,__weak) id<HKRingGroupAnimationStatusDelegate> animationStatusDelegate;              //@synthesize animationStatusDelegate=_animationStatusDelegate - In the implementation block
@property (nonatomic,readonly) long long numberOfRings;                                                          //@synthesize numberOfRings=_numberOfRings - In the implementation block
@property (assign,nonatomic) double ringDiameter;                                                                //@synthesize ringDiameter=_ringDiameter - In the implementation block
@property (assign,nonatomic) double ringInterspacing;                                                            //@synthesize ringInterspacing=_ringInterspacing - In the implementation block
@property (assign,nonatomic) double ringThickness;                                                               //@synthesize ringThickness=_ringThickness - In the implementation block
@property (assign,nonatomic) double ringIconSize;                                                                //@synthesize ringIconSize=_ringIconSize - In the implementation block
@property (assign,nonatomic) double ringScale;                                                                   //@synthesize ringScale=_ringScale - In the implementation block
@property (assign,nonatomic) CGPoint center;                                                                     //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double zRotation;                                                                   //@synthesize zRotation=_zRotation - In the implementation block
@property (assign,nonatomic) double backingOrigin;                                                               //@synthesize backingOrigin=_backingOrigin - In the implementation block
@property (assign,nonatomic) double additionalSpacingAtIndex;                                                    //@synthesize additionalSpacingAtIndex=_additionalSpacingAtIndex - In the implementation block
+(double)defaultAnimationDuration;
+(id)animationTimingFunction;
-(id)init;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)dealloc;
-(void)update:(double)arg1 ;
-(BOOL)_setCenter:(CGPoint)arg1 ;
-(void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2 ;
-(void)setIconFirstFrameOrigin:(CGPoint)arg1 frameSize:(CGSize)arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5 ;
-(double)ringInterspacing;
-(void)_markRingGroupAsDirty;
-(id<HKRingGroupAnimationStatusDelegate>)animationStatusDelegate;
-(BOOL)_setRingDiameter:(double)arg1 ;
-(BOOL)_setRingInterspacing:(double)arg1 ;
-(BOOL)_setRingThickness:(double)arg1 ;
-(BOOL)_setRingIconSize:(double)arg1 ;
-(BOOL)_setRingScale:(double)arg1 ;
-(BOOL)_setZRotation:(double)arg1 ;
-(double)diameterForRingAtIndex:(unsigned long long)arg1 ;
-(double)_scaledRingThickness;
-(double)ringIconSize;
-(double)_scaledRingDiameter;
-(double)_scaledRingInterspacing;
-(double)ringScale;
-(double)ringDiameter;
-(BOOL)_setFloatValue:(float)arg1 fromCurrentValue:(float)arg2 forRingPropertyType:(unsigned long long)arg3 ofRingAtIndex:(long long)arg4 animated:(BOOL)arg5 duration:(double)arg6 completion:(/*^block*/id)arg7 ;
-(void)_setFloatValue:(float)arg1 forRingPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)_setFloatValue:(float)arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)_setCGPointValue:(CGPoint)arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(BOOL)arg4 ;
-(void)_updateRingDiameters;
-(void)_updateRingThicknesses;
-(void)_updateRingIconProperties;
-(void)_updateRingZRotations;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(/*^block*/id)arg6 ;
-(double)_ringPercentageAdjustedForProximityToFull:(double)arg1 withRingDiameter:(double)arg2 thickness:(double)arg3 ;
-(double)_adjustedDurationForRingWithIndex:(long long)arg1 startPercentage:(double)arg2 targetPercentage:(double)arg3 defaultDuration:(double)arg4 ;
-(void)_configureIconWithStartingPercentage:(double)arg1 forRingAtIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)_lastRingFrameNumberForRingAtIndex:(unsigned long long)arg1 ;
-(void)_removeAllRingAnimationsForPropertyType:(unsigned long long)arg1 ;
-(void)setRingScale:(double)arg1 ;
-(double)_scaledRingIconSize;
-(void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingIconPosition:(CGPoint)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2 ;
-(void)setIconDotTextureOrigin:(CGPoint)arg1 ofRingAtIndex:(long long)arg2 ;
-(BOOL)ringsAreEmpty;
-(long long)indexOfRingAtPoint:(CGPoint)arg1 ;
-(double)backingOrigin;
-(void)setBackingOrigin:(double)arg1 ;
-(double)additionalSpacingAtIndex;
-(void)setAdditionalSpacingAtIndex:(double)arg1 ;
-(NSArray *)rings;
-(void)setRings:(NSArray *)arg1 ;
-(void)setAnimationStatusDelegate:(id<HKRingGroupAnimationStatusDelegate>)arg1 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(id)initWithNumberOfRings:(long long)arg1 ;
-(void)setRingIconSize:(double)arg1 ;
-(void)setRingDiameter:(double)arg1 ;
-(void)setRingThickness:(double)arg1 ;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3 ;
-(void)setOpacity:(float)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setZRotation:(double)arg1 ;
-(double)ringThickness;
-(double)zRotation;
-(void)setRingInterspacing:(double)arg1 ;
-(long long)numberOfRings;
-(void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
@end

