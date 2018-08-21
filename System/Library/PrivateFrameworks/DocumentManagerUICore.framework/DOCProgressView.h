/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKit/UIView.h>

@class NSOperationQueue, UIColor, NSProgress, DOCGhostRingView, DOCDeterminateProgressRingView, DOCIndeterminateProgressRingView;

@interface DOCProgressView : UIView {

	NSOperationQueue* _pendingAnimationQueue;
	BOOL _graduallyIncreasingProgress;
	double _progress;
	BOOL _canShowStopButton;
	UIColor* _inactiveStrokeColor;
	UIColor* _activeStrokeColor;
	NSProgress* _observedProgress;
	DOCGhostRingView* _ghostRingView;
	DOCDeterminateProgressRingView* _determinateProgressRingView;
	DOCIndeterminateProgressRingView* _indeterminateProgressRingView;

}

@property (nonatomic,retain) DOCGhostRingView * ghostRingView;                                              //@synthesize ghostRingView=_ghostRingView - In the implementation block
@property (nonatomic,retain) DOCDeterminateProgressRingView * determinateProgressRingView;                  //@synthesize determinateProgressRingView=_determinateProgressRingView - In the implementation block
@property (nonatomic,retain) DOCIndeterminateProgressRingView * indeterminateProgressRingView;              //@synthesize indeterminateProgressRingView=_indeterminateProgressRingView - In the implementation block
@property (nonatomic,retain) UIColor * inactiveStrokeColor;                                                 //@synthesize inactiveStrokeColor=_inactiveStrokeColor - In the implementation block
@property (nonatomic,retain) UIColor * activeStrokeColor;                                                   //@synthesize activeStrokeColor=_activeStrokeColor - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;                                                 //@synthesize observedProgress=_observedProgress - In the implementation block
@property (assign,nonatomic) BOOL canShowStopButton;                                                        //@synthesize canShowStopButton=_canShowStopButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)_commonInit;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateStatusPropertiesAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addToPendingAnimationQueue:(/*^block*/id)arg1 ;
-(DOCDeterminateProgressRingView *)determinateProgressRingView;
-(DOCGhostRingView *)ghostRingView;
-(DOCIndeterminateProgressRingView *)indeterminateProgressRingView;
-(void)setCanShowStopButton:(BOOL)arg1 ;
-(void)setActiveStrokeColor:(UIColor *)arg1 ;
-(void)setInactiveStrokeColor:(UIColor *)arg1 ;
-(void)beginGraduallyIncreasingProgress;
-(void)fadeoutWithCompletion:(/*^block*/id)arg1 ;
-(void)animateToFullRingAndHideWithCompletion:(/*^block*/id)arg1 ;
-(UIColor *)inactiveStrokeColor;
-(UIColor *)activeStrokeColor;
-(BOOL)canShowStopButton;
-(void)setGhostRingView:(DOCGhostRingView *)arg1 ;
-(void)setDeterminateProgressRingView:(DOCDeterminateProgressRingView *)arg1 ;
-(void)setIndeterminateProgressRingView:(DOCIndeterminateProgressRingView *)arg1 ;
@end

