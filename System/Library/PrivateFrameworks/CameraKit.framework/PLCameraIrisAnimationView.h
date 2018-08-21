/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@interface PLCameraIrisAnimationView : UIView {

	BOOL shouldSetupAnimationInDidMoveToWindow;
	id irisAnimationDelegate;
	SEL irisAnimationDidStopSelector;
	double irisAnimationDuration;
	CGPoint irisAnimationPosition;

}

@property (assign,nonatomic) id irisAnimationDelegate; 
@property (assign,nonatomic) SEL irisAnimationDidStopSelector; 
@property (assign,nonatomic) double irisAnimationDuration; 
@property (assign,nonatomic) CGPoint irisAnimationPosition; 
@property (assign,nonatomic) BOOL shouldSetupAnimationInDidMoveToWindow; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setIrisAnimationDelegate:(id)arg1 ;
-(void)setIrisAnimationDidStopSelector:(SEL)arg1 ;
-(id)irisAnimationDelegate;
-(SEL)irisAnimationDidStopSelector;
-(double)irisAnimationDuration;
-(CGPoint)irisAnimationPosition;
-(void)setupAnimation;
-(BOOL)shouldSetupAnimationInDidMoveToWindow;
-(void)unpauseIrisAnimation;
-(void)pauseIrisAnimation;
-(void)animateIrisOpen;
-(void)setIrisAnimationDuration:(double)arg1 ;
-(void)setIrisAnimationPosition:(CGPoint)arg1 ;
-(void)setShouldSetupAnimationInDidMoveToWindow:(BOOL)arg1 ;
@end

