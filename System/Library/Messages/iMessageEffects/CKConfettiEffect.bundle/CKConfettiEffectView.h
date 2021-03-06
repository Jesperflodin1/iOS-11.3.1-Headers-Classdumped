/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageEffects/CKConfettiEffect.bundle/CKConfettiEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CKConfettiEffect/CKConfettiEffect-Structs.h>
#import <UIKit/UIView.h>
#import <CKConfettiEffect/CKFullscreenEffectView.h>

@class UIImage, CALayer;

@interface CKConfettiEffectView : UIView <CKFullscreenEffectView> {

	CALayer* _confettiLayer;
	char messageOrientation;
	long long zIndex;
	UIImage* messageImage;
	CGPoint focusPoint;
	CGRect messageRect;

}

@property (assign,nonatomic) long long zIndex; 
@property (assign,nonatomic) CGPoint focusPoint; 
@property (assign,nonatomic) CGRect messageRect; 
@property (assign,nonatomic) char messageOrientation; 
@property (nonatomic,retain) UIImage * messageImage; 
-(UIImage *)messageImage;
-(CGRect)messageRect;
-(void)stopAnimation;
-(void)startAnimation;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(CGPoint)focusPoint;
-(void)setMessageOrientation:(char)arg1 ;
-(void)setMessageImage:(UIImage *)arg1 ;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(void)setMessageRect:(CGRect)arg1 ;
-(char)messageOrientation;
@end

