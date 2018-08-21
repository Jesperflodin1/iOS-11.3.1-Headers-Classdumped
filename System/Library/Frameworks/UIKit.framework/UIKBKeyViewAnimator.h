/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate> {

	BOOL _disabled;

}

@property (assign,nonatomic) BOOL disabled;                                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldPurgeKeyViews; 
@property (nonatomic,readonly) CGRect primaryGlyphNormalizedExitRect; 
@property (nonatomic,readonly) CGRect secondaryGlyphNormalizedExitRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
+(id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
-(void)endTransitionForKeyView:(id)arg1 ;
-(void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(CGSize)arg2 ;
-(void)reset;
-(BOOL)disabled;
-(Class)_keyViewClassForSpecialtyKey:(id)arg1 ;
-(BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldPurgeKeyViews;
-(Class)keyViewClassForKey:(id)arg1 traits:(id)arg2 ;
-(BOOL)shouldAssertCurrentKeyState:(id)arg1 ;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDisabled:(BOOL)arg1 ;
-(double)delayedDeactivationTimeForKeyView:(id)arg1 ;
-(id)keycapMeshTransformFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
-(CGRect)primaryGlyphNormalizedExitRect;
-(id)keycapNullTransform;
-(id)keycapPrimaryDualStringTransform:(id)arg1 ;
-(id)keycapPrimaryTransform;
-(id)keycapAlternateDualStringTransform:(id)arg1 ;
-(id)keycapAlternateTransform:(id)arg1 ;
-(id)keycapLeftTransform;
-(id)keycapRightTransform;
-(id)keycapPrimaryExitTransform;
-(id)keycapLeftSelectPrimaryTransform;
-(id)keycapLeftSelectLeftTransform;
-(id)keycapLeftSelectRightTransform;
-(id)keycapRightSelectPrimaryTransform;
-(id)keycapRightSelectLeftTransform;
-(id)keycapRightSelectRightTransform;
-(void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(BOOL)arg3 ;
-(void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 ;
-(CGRect)secondaryGlyphNormalizedExitRect;
@end

