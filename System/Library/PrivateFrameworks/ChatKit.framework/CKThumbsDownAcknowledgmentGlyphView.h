/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKSimpleAcknowledgementGlyphView.h>

@class CALayer;

@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView {

	CALayer* _animationLayer;
	CALayer* _contentLayer;

}

@property (nonatomic,retain) CALayer * animationLayer;              //@synthesize animationLayer=_animationLayer - In the implementation block
@property (nonatomic,retain) CALayer * contentLayer;                //@synthesize contentLayer=_contentLayer - In the implementation block
-(double)animationDuration;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(void)setGlyphColor:(id)arg1 ;
-(CALayer *)animationLayer;
-(void)setAnimationLayer:(CALayer *)arg1 ;
-(void)setContentLayer:(CALayer *)arg1 ;
-(CALayer *)contentLayer;
@end

