/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>
#import <iWorkImport/KNInspectableAnimation.h>
#import <iWorkImport/TSKModel.h>

@class NSSet, KNTransitionAttributes, NSString, KNAnimationInfo, NSArray, KNAnimationPluginMenu, TSUColor, TSDBezierPathSource;

@interface KNTransition : TSPContainedObject <KNInspectableAnimation, TSKModel> {

	KNTransitionAttributes* _attributes;

}

@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,readonly) BOOL isMagicMove; 
@property (nonatomic,copy) KNTransitionAttributes * attributes; 
@property (nonatomic,readonly) KNAnimationInfo * animationInfo; 
@property (nonatomic,readonly) NSArray * localizedEventTriggerNames; 
@property (nonatomic,readonly) KNAnimationPluginMenu * directionMenu; 
@property (nonatomic,readonly) unsigned long long directionType; 
@property (nonatomic,readonly) BOOL supportsDirection; 
@property (nonatomic,readonly) BOOL supportsDuration; 
@property (nonatomic,readonly) BOOL supportsBounce; 
@property (nonatomic,readonly) BOOL supportsColor; 
@property (nonatomic,readonly) BOOL supportsTwist; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve1; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve2; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve3; 
@property (nonatomic,readonly) BOOL hasAutomaticTrigger; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) unsigned long long direction; 
@property (nonatomic,readonly) BOOL documentIsRTL; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) float customTwist; 
@property (nonatomic,readonly) long long customMosaicSize; 
@property (nonatomic,readonly) long long customMosaicType; 
@property (nonatomic,readonly) BOOL customBounce; 
@property (nonatomic,readonly) BOOL customMotionBlur; 
@property (nonatomic,readonly) long long customTimingCurve; 
@property (nonatomic,readonly) long long randomNumberSeed; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve1; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve2; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve3; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName1; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName2; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName3; 
@property (nonatomic,readonly) BOOL customMagicMoveFadeUnmatchedObjects; 
@property (nonatomic,readonly) long long customTextDelivery; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) BOOL canEditAnimations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)directionTypeForEffect:(id)arg1 ;
+(id)bindingMap;
+(BOOL)hasDirectionOptionForEffect:(id)arg1 ;
+(id)bindingKeyPathForAttributeKey:(id)arg1 ;
+(id)attributeKeyForBindingKeyPath:(id)arg1 ;
-(void)saveToArchive:(TransitionArchive*)arg1 archiver:(id)arg2 ;
-(BOOL)documentIsRTL;
-(id)initWithArchive:(const TransitionArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(unsigned long long)directionType;
-(unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1 ;
-(BOOL)hasAutomaticTrigger;
-(id)initWithOwner:(id)arg1 attributes:(id)arg2 ;
-(BOOL)supportsDuration;
-(BOOL)supportsBounce;
-(BOOL)supportsTwist;
-(BOOL)supportsTimingCurves;
-(BOOL)supportsRandomNumberSeedInspection;
-(BOOL)supportsCustomEffectTimingCurve3;
-(BOOL)supportsCustomEffectTimingCurve2;
-(BOOL)supportsCustomEffectTimingCurve1;
-(BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1 ;
-(NSSet *)inspectableAttributes;
-(BOOL)canEditAnimations;
-(NSArray *)localizedEventTriggerNames;
-(KNAnimationPluginMenu *)directionMenu;
-(float)customTwist;
-(long long)customMosaicSize;
-(long long)customMosaicType;
-(BOOL)customBounce;
-(BOOL)customMotionBlur;
-(long long)customTimingCurve;
-(long long)randomNumberSeed;
-(TSDBezierPathSource *)customEffectTimingCurve1;
-(TSDBezierPathSource *)customEffectTimingCurve2;
-(TSDBezierPathSource *)customEffectTimingCurve3;
-(NSString *)customEffectTimingCurveThemeName1;
-(NSString *)customEffectTimingCurveThemeName2;
-(NSString *)customEffectTimingCurveThemeName3;
-(BOOL)customMagicMoveFadeUnmatchedObjects;
-(long long)customTextDelivery;
-(NSString *)description;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUColor *)color;
-(KNAnimationInfo *)animationInfo;
-(unsigned long long)direction;
-(double)delay;
-(NSString *)effect;
-(KNTransitionAttributes *)attributes;
-(void)setAttributes:(KNTransitionAttributes *)arg1 ;
-(BOOL)supportsColor;
-(BOOL)supportsDirection;
-(id)initWithOwner:(id)arg1 ;
-(BOOL)isMagicMove;
@end

