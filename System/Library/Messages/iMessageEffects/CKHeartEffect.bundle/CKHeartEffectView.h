/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageEffects/CKHeartEffect.bundle/CKHeartEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CKHeartEffect/CKHeartEffect-Structs.h>
#import <UIKit/UIView.h>
#import <CKHeartEffect/CKFullscreenEffectView.h>

@class UIImage, CKHeartEffectSCNView, SCNNode;

@interface CKHeartEffectView : UIView <CKFullscreenEffectView> {

	CKHeartEffectSCNView* _heartView;
	SCNNode* _heart;
	BOOL _leftToRight;
	double _startTime;
	char messageOrientation;
	long long zIndex;
	UIImage* messageImage;
	CGPoint focusPoint;
	CGRect _messageRect;

}

@property (assign,nonatomic) long long zIndex; 
@property (assign,nonatomic) CGPoint focusPoint; 
@property (assign,nonatomic) CGRect messageRect;                   //@synthesize messageRect=_messageRect - In the implementation block
@property (assign,nonatomic) char messageOrientation; 
@property (nonatomic,retain) UIImage * messageImage; 
-(SCNVector3)calculateHandlePosition;
-(void)applicationWillEnterForegroundNotification;
-(CGRect)messageRect;
-(UIImage *)messageImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(void)startAnimation;
-(id)_snapshotImage;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(CGPoint)focusPoint;
-(void)applicationDidEnterBackground;
-(void)setMessageOrientation:(char)arg1 ;
-(void)setMessageImage:(UIImage *)arg1 ;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(void)setMessageRect:(CGRect)arg1 ;
-(char)messageOrientation;
@end

