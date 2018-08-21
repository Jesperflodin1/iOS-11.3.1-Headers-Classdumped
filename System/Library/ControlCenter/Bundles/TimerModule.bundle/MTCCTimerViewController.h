/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@protocol MTCCTimerViewControllerDelegate;
@class MTCCTimer, CCUIModuleSliderView, CADisplayLink;

@interface MTCCTimerViewController : CCUIButtonModuleViewController {

	id<MTCCTimerViewControllerDelegate> _delegate;
	MTCCTimer* _internalTimer;
	CCUIModuleSliderView* _sliderView;
	CADisplayLink* _displayLink;

}

@property (nonatomic,copy) MTCCTimer * internalTimer;                                          //@synthesize internalTimer=_internalTimer - In the implementation block
@property (nonatomic,retain) CCUIModuleSliderView * sliderView;                                //@synthesize sliderView=_sliderView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                      //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic,__weak) id<MTCCTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MTCCTimer * timer; 
-(MTCCTimer *)internalTimer;
-(void)setInternalTimer:(MTCCTimer *)arg1 ;
-(void)setTimer:(id)arg1 animated:(BOOL)arg2 ;
-(void)_reloadForCurrentStateAnimated:(BOOL)arg1 ;
-(void)sliderDidBeginEditing:(id)arg1 ;
-(void)sliderValueChanged:(id)arg1 ;
-(double)sliderValueFromRemainingTime:(double)arg1 ;
-(id<MTCCTimerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MTCCTimerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(MTCCTimer *)timer;
-(void)setTimer:(MTCCTimer *)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentWidth;
-(void)setSliderView:(CCUIModuleSliderView *)arg1 ;
-(CCUIModuleSliderView *)sliderView;
-(void)displayLinkTick:(id)arg1 ;
@end
