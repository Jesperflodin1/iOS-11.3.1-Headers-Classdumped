/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SXAnimatableVideoViewController.h>

@class UIView, SXVideoView, UIViewController, SXVideoViewControllerConfiguration, SXVideoCollectionViewController, SXVideoPlaybackManager, SXVideoControlsVisibilityManager, UITapGestureRecognizer, SXTimelineManager, SXVideoVolumeManager, SXVideoPrefetchManager;

@interface SXVideoViewController : UIViewController <SXAnimatableVideoViewController> {

	UIViewController* _controlsViewController;
	SXVideoViewControllerConfiguration* _configuration;
	SXVideoCollectionViewController* _collectionViewController;
	SXVideoPlaybackManager* _playbackManager;
	SXVideoControlsVisibilityManager* _controlsVisibilityManager;
	UITapGestureRecognizer* _tapGestureRecognizer;
	SXTimelineManager* _timelineManager;
	SXVideoVolumeManager* _volumeManager;
	SXVideoPrefetchManager* _prefetchManager;

}

@property (nonatomic,readonly) SXVideoCollectionViewController * collectionViewController;                //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,readonly) SXVideoPlaybackManager * playbackManager;                                  //@synthesize playbackManager=_playbackManager - In the implementation block
@property (nonatomic,readonly) SXVideoControlsVisibilityManager * controlsVisibilityManager;              //@synthesize controlsVisibilityManager=_controlsVisibilityManager - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                             //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) SXTimelineManager * timelineManager;                                       //@synthesize timelineManager=_timelineManager - In the implementation block
@property (nonatomic,readonly) SXVideoVolumeManager * volumeManager;                                      //@synthesize volumeManager=_volumeManager - In the implementation block
@property (nonatomic,readonly) SXVideoPrefetchManager * prefetchManager;                                  //@synthesize prefetchManager=_prefetchManager - In the implementation block
@property (nonatomic,readonly) SXVideoViewControllerConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UIView * videoHostView; 
@property (nonatomic,readonly) SXVideoView * videoView; 
@property (nonatomic,readonly) UIViewController * controlsViewController;                                 //@synthesize controlsViewController=_controlsViewController - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SXVideoViewControllerConfiguration *)configuration;
-(SXVideoCollectionViewController *)collectionViewController;
-(SXVideoView *)videoView;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(SXVideoControlsVisibilityManager *)controlsVisibilityManager;
-(UIViewController *)controlsViewController;
-(SXVideoPlaybackManager *)playbackManager;
-(UIView *)videoHostView;
-(id)initWithCollectionViewController:(id)arg1 videoControlsViewController:(id)arg2 videoPlaybackManager:(id)arg3 controlsVisibilityManager:(id)arg4 timelineManager:(id)arg5 volumeManager:(id)arg6 prefetchManager:(id)arg7 tapGestureRecognizer:(id)arg8 ;
-(SXTimelineManager *)timelineManager;
-(SXVideoVolumeManager *)volumeManager;
-(SXVideoPrefetchManager *)prefetchManager;
@end

