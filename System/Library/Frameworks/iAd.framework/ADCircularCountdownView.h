/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, CAShapeLayer;

@interface ADCircularCountdownView : UIView {

	double _animationLineWidth;
	double _animationBackgroundLineWidth;
	UIColor* _animationColor;
	UIColor* _animationBackgroundColor;
	CAShapeLayer* _backgroundLayer;
	CAShapeLayer* _progressLayer;

}

@property (nonatomic,retain) CAShapeLayer * backgroundLayer;                   //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                     //@synthesize progressLayer=_progressLayer - In the implementation block
@property (assign,nonatomic) double countdownProgress; 
@property (assign,nonatomic) double animationLineWidth;                        //@synthesize animationLineWidth=_animationLineWidth - In the implementation block
@property (assign,nonatomic) double animationBackgroundLineWidth;              //@synthesize animationBackgroundLineWidth=_animationBackgroundLineWidth - In the implementation block
@property (nonatomic,retain) UIColor * animationColor;                         //@synthesize animationColor=_animationColor - In the implementation block
@property (nonatomic,retain) UIColor * animationBackgroundColor;               //@synthesize animationBackgroundColor=_animationBackgroundColor - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)startCountdownAnimationWithDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCountdownProgress:(double)arg1 ;
-(double)countdownProgress;
-(void)setAnimationLineWidth:(double)arg1 ;
-(void)setAnimationBackgroundLineWidth:(double)arg1 ;
-(void)setAnimationColor:(UIColor *)arg1 ;
-(void)setAnimationBackgroundColor:(UIColor *)arg1 ;
-(double)animationLineWidth;
-(double)animationBackgroundLineWidth;
-(UIColor *)animationColor;
-(UIColor *)animationBackgroundColor;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)backgroundLayer;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
@end

