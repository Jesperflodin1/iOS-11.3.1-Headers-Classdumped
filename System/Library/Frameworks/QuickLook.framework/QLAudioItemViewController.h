/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLMediaItemViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class QLOverlayPlayButton, UIView, UIScrollView, QLWaveformScrubberView, NSLayoutConstraint, NSString;

@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate> {

	QLOverlayPlayButton* _playButton;
	UIView* _scrubberContainer;
	UIScrollView* _scrubberContainerScrollView;
	QLWaveformScrubberView* _scrubber;
	BOOL _previewIsVisisble;
	BOOL _scrubbing;
	NSLayoutConstraint* _topScrubber;
	double _scrubberVerticalOffset;

}

@property (retain) NSLayoutConstraint * topScrubber;                //@synthesize topScrubber=_topScrubber - In the implementation block
@property (retain) UIView * scrubberContainer;                      //@synthesize scrubberContainer=_scrubberContainer - In the implementation block
@property (assign) BOOL scrubbing;                                  //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign) double scrubberVerticalOffset;                   //@synthesize scrubberVerticalOffset=_scrubberVerticalOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)AV_indicatorBackgroundColor;
+(id)AV_indicatorForegroundColor;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessoryView;
-(void)_tapRecognized:(id)arg1 ;
-(BOOL)scrubbing;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)addScrubberWithDeferral;
-(void)didChangePlayingStatus;
-(void)setPlayControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)timeLabelScrollView;
-(NSLayoutConstraint *)topScrubber;
-(void)setTopScrubber:(NSLayoutConstraint *)arg1 ;
-(double)scrubberVerticalOffset;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(void)setScrubbing:(BOOL)arg1 ;
-(UIView *)scrubberContainer;
-(void)setScrubberContainer:(UIView *)arg1 ;
@end
