/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponentAnimationHandler.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate> {

	double _initialAlpha;
	double _initialScale;

}

@property (assign,nonatomic) double initialAlpha;                   //@synthesize initialAlpha=_initialAlpha - In the implementation block
@property (assign,nonatomic) double initialScale;                   //@synthesize initialScale=_initialScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimation;
-(double)initialScale;
-(void)finishAnimation;
-(void)setInitialScale:(double)arg1 ;
-(id)initWithComponent:(id)arg1 withAnimation:(id)arg2 ;
-(double)initialAlpha;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)setInitialAlpha:(double)arg1 ;
@end

