/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageEffects/CKSpotlightEffect.bundle/CKSpotlightEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage;


@protocol CKFullscreenEffectView
@property (assign,nonatomic) long long zIndex; 
@property (assign,nonatomic) CGPoint focusPoint; 
@property (assign,nonatomic) CGRect messageRect; 
@property (assign,nonatomic) char messageOrientation; 
@property (nonatomic,retain) UIImage * messageImage; 
@required
-(UIImage *)messageImage;
-(CGRect)messageRect;
-(void)stopAnimation;
-(void)startAnimation;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1;
-(CGPoint)focusPoint;
-(void)setMessageOrientation:(char)arg1;
-(void)setMessageImage:(id)arg1;
-(void)setFocusPoint:(CGPoint)arg1;
-(void)setMessageRect:(CGRect)arg1;
-(char)messageOrientation;

@end

