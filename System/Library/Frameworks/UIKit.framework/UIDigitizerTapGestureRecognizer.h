/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/_UIDigitizerGestureRecognizerImpDelegate.h>

@class _UIDigitizerGestureRecognizerImp, NSString;

@interface UIDigitizerTapGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate> {

	_UIDigitizerGestureRecognizerImp* _imp;

}

@property (assign,nonatomic) double maximumPressDuration; 
@property (nonatomic,readonly) CGPoint digitizerLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)digitizerLocation;
-(void)touchesBeganSuccessfully:(id)arg1 ;
-(void)pressesEndedSuccessfully:(id)arg1 ;
-(void)pressesNotHeldLongEnough:(id)arg1 ;
-(void)pressesHeldForMinimum:(id)arg1 ;
-(double)maximumPressDuration;
-(void)setMaximumPressDuration:(double)arg1 ;
@end

