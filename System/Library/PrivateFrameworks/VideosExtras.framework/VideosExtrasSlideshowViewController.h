/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <VideosExtras/VideosExtrasZoomingImageTransitionParticipant.h>

@protocol VideosExtrasSlideshowViewControllerDataSource;
@class VideosExtrasConstrainedArtworkContainerView, UIImage, NSTimer, NSString;

@interface VideosExtrasSlideshowViewController : UIViewController <CAAnimationDelegate, VideosExtrasZoomingImageTransitionParticipant> {

	BOOL _animatingTransition;
	BOOL _viewVisible;
	id<VideosExtrasSlideshowViewControllerDataSource> _dataSource;
	unsigned long long _transitionStyle;
	double _transitionInterval;
	unsigned long long _visibleImageIndex;
	VideosExtrasConstrainedArtworkContainerView* _disappearingImageContainerView;
	VideosExtrasConstrainedArtworkContainerView* _imageContainerView;
	UIImage* _nextImage;
	NSTimer* _transitionTimer;

}

@property (assign,getter=isAnimatingTransition,nonatomic) BOOL animatingTransition;                                     //@synthesize animatingTransition=_animatingTransition - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                                                     //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,retain) VideosExtrasConstrainedArtworkContainerView * disappearingImageContainerView;              //@synthesize disappearingImageContainerView=_disappearingImageContainerView - In the implementation block
@property (nonatomic,retain) VideosExtrasConstrainedArtworkContainerView * imageContainerView;                          //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) UIImage * nextImage;                                                                       //@synthesize nextImage=_nextImage - In the implementation block
@property (nonatomic,retain) NSTimer * transitionTimer;                                                                 //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasSlideshowViewControllerDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long transitionStyle;                                                        //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) double transitionInterval;                                                                 //@synthesize transitionInterval=_transitionInterval - In the implementation block
@property (assign,nonatomic) unsigned long long visibleImageIndex;                                                      //@synthesize visibleImageIndex=_visibleImageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<VideosExtrasSlideshowViewControllerDataSource>)arg1 ;
-(void)dealloc;
-(id<VideosExtrasSlideshowViewControllerDataSource>)dataSource;
-(unsigned long long)transitionStyle;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)transitionInterval;
-(void)setViewVisible:(BOOL)arg1 ;
-(BOOL)isViewVisible;
-(void)_reload;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)_invalidateTransitionTimer;
-(void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
-(void)_loadImageContainerViewIfAppropriateWithImage:(id)arg1 ;
-(void)_transitionDidComplete;
-(VideosExtrasConstrainedArtworkContainerView *)imageContainerView;
-(NSTimer *)transitionTimer;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
-(void)_transitionTimerDidFire:(id)arg1 ;
-(void)_transitionToNextImageIfAppropriate;
-(void)setDisappearingImageContainerView:(VideosExtrasConstrainedArtworkContainerView *)arg1 ;
-(UIImage *)nextImage;
-(VideosExtrasConstrainedArtworkContainerView *)disappearingImageContainerView;
-(void)setAnimatingTransition:(BOOL)arg1 ;
-(unsigned long long)visibleImageIndex;
-(unsigned long long)_numberOfImages;
-(void)setImageContainerView:(VideosExtrasConstrainedArtworkContainerView *)arg1 ;
-(void)setNextImage:(UIImage *)arg1 ;
-(void)_scheduleTransitionTimer;
-(void)_performInstantaneousTransition;
-(void)_performDissolveTransition;
-(void)_performPushTransition;
-(void)_performWipeTransition;
-(void)setVisibleImageIndex:(unsigned long long)arg1 ;
-(void)setTransitionInterval:(double)arg1 ;
-(BOOL)isAnimatingTransition;
@end

