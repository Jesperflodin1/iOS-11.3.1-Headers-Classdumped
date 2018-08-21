/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <VideosExtras/VideosExtrasOptionallyInteractiveAnimationController.h>

@class VideosExtrasBorderedImageView, NSString;

@interface VideosExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, VideosExtrasOptionallyInteractiveAnimationController> {

	BOOL _interactive;
	BOOL _shouldUseSpringAnimation;
	unsigned long long _itemIndex;
	double _initialPinchScale;
	VideosExtrasBorderedImageView* _zoomingImageView;
	CGPoint _initialPinchCenter;

}

@property (assign,nonatomic) CGPoint initialPinchCenter;                                    //@synthesize initialPinchCenter=_initialPinchCenter - In the implementation block
@property (assign,nonatomic) double initialPinchScale;                                      //@synthesize initialPinchScale=_initialPinchScale - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                  //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                         //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,retain) VideosExtrasBorderedImageView * zoomingImageView;              //@synthesize zoomingImageView=_zoomingImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSpringAnimation;                                 //@synthesize shouldUseSpringAnimation=_shouldUseSpringAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInteractive;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(unsigned long long)itemIndex;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(BOOL)shouldUseSpringAnimation;
-(void)setZoomingImageView:(VideosExtrasBorderedImageView *)arg1 ;
-(void)setInitialPinchCenter:(CGPoint)arg1 ;
-(void)setInitialPinchScale:(double)arg1 ;
-(double)initialPinchScale;
-(CGPoint)initialPinchCenter;
-(VideosExtrasBorderedImageView *)zoomingImageView;
-(double)_destinationScale;
-(float)_desiredSpeedForNonInteractiveAnimationWithDuration:(double)arg1 deferredTransform:(CGAffineTransform)arg2 finalTransform:(CGAffineTransform)arg3 ;
-(double)_maximumDistanceTravelledForPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 currentTransform:(CGAffineTransform)arg3 finalTransform:(CGAffineTransform)arg4 ;
-(id)initWithItemIndex:(unsigned long long)arg1 forInteractiveTransition:(BOOL)arg2 ;
-(void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)arg1 ;
-(void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)arg1 ;
-(void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)arg1 ;
-(void)setShouldUseSpringAnimation:(BOOL)arg1 ;
@end

