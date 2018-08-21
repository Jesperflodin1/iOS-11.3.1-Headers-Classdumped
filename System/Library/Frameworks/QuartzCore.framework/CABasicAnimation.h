/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation

@property (assign) BOOL roundsToInteger; 
@property (assign) double startAngle; 
@property (assign) double endAngle; 
@property (retain) id fromValue; 
@property (retain) id toValue; 
@property (retain) id byValue; 
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)roundsToInteger;
-(id)byValue;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(void)setRoundsToInteger:(BOOL)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setEndAngle:(double)arg1 ;
-(double)endAngle;
-(void)CA_prepareRenderValue;
-(void)setByValue:(id)arg1 ;
-(double)_timeFunction:(double)arg1 ;
@end

