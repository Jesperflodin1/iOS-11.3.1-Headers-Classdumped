/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class SXComponentView, SXComponentAnimation;

@interface SXComponentAnimationHandler : NSObject {

	SXComponentView* _component;
	SXComponentAnimation* _animation;
	long long _state;
	double _factor;

}

@property (nonatomic,readonly) SXComponentView * component;                   //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) SXComponentAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double factor;                                 //@synthesize factor=_factor - In the implementation block
-(SXComponentView *)component;
-(BOOL)isEqual:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(SXComponentAnimation *)animation;
-(void)startAnimation;
-(void)finishAnimation;
-(double)factor;
-(id)initWithComponent:(id)arg1 withAnimation:(id)arg2 ;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(BOOL)animationShouldRepeat;
-(id)componentViewToAnimate;
-(double)screenHeightStartOffset;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
@end
