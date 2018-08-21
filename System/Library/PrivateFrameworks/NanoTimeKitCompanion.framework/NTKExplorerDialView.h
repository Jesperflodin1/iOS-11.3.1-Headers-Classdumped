/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer, NSArray;

@interface NTKExplorerDialView : UIView {

	BOOL _editing;
	CALayer* _ringLayer;
	CAReplicatorLayer* _hourReplicatorLayer;
	CALayer* _hourTickLayer;
	CAReplicatorLayer* _minuteReplicatorLayer;
	CAReplicatorLayer* _minuteCollectionLayer;
	CALayer* _minuteTickLayer;
	CAReplicatorLayer* _subdialReplicatorLayer;
	CALayer* _secondTickLayer;
	NSArray* _hourNumerals;
	NSArray* _minuteNumerals;
	unsigned long long _currentDensityTransition;
	unsigned long long _density;

}

@property (assign,nonatomic) unsigned long long density;              //@synthesize density=_density - In the implementation block
@property (nonatomic,readonly) CALayer * subdialLayer; 
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)density;
-(void)setDensity:(unsigned long long)arg1 ;
-(void)cleanupAfterZoom;
-(void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3 ;
-(void)prepareForEditing;
-(void)cleanupAfterEditing;
-(void)_applyDensity:(unsigned long long)arg1 ;
-(void)prepareForZoom;
-(void)applyZoomFraction:(double)arg1 ;
-(CALayer *)subdialLayer;
-(void)_addOrRemoveChildLayers;
-(id)_minuteTickShowAnimation;
-(id)_secondTickBrightenAnimation;
-(id)_numeralShowAnimation;
-(id)_secondTickDimAnimation;
-(id)_hourNumeralHideAnimation;
-(id)_minuteClusterExpandAnimation;
-(id)_minuteTickShrinkAndGrow;
-(id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2 ;
-(id)_minuteTickBreakAnimation;
@end

