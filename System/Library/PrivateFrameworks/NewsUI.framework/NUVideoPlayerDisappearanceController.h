/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol SXVideoPlaybackController, SXVideoPlaybackAdvancing, SXVideoQueueProviding;
@class NUVideoAdHistoryEventTracker, UIViewController, NSString;

@interface NUVideoPlayerDisappearanceController : NSObject <NUVideoPlayerEventTracker> {

	NUVideoAdHistoryEventTracker* _adHistoryEventTracker;
	UIViewController* _viewControllerForPresentationFromBannerView;
	id<SXVideoPlaybackController> _playbackController;
	id<SXVideoPlaybackAdvancing> _playbackAdvancer;
	id<SXVideoQueueProviding> _queueProvider;

}

@property (nonatomic,readonly) NUVideoAdHistoryEventTracker * adHistoryEventTracker;                               //@synthesize adHistoryEventTracker=_adHistoryEventTracker - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewControllerForPresentationFromBannerView;              //@synthesize viewControllerForPresentationFromBannerView=_viewControllerForPresentationFromBannerView - In the implementation block
@property (nonatomic,readonly) id<SXVideoPlaybackController> playbackController;                                   //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) id<SXVideoPlaybackAdvancing> playbackAdvancer;                                      //@synthesize playbackAdvancer=_playbackAdvancer - In the implementation block
@property (nonatomic,readonly) id<SXVideoQueueProviding> queueProvider;                                            //@synthesize queueProvider=_queueProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SXVideoQueueProviding>)queueProvider;
-(id<SXVideoPlaybackController>)playbackController;
-(id<SXVideoPlaybackAdvancing>)playbackAdvancer;
-(UIViewController *)viewControllerForPresentationFromBannerView;
-(NUVideoAdHistoryEventTracker *)adHistoryEventTracker;
-(void)videoPlayerDidBecomeInvisible;
-(id)initWithAdHistoryEventTracker:(id)arg1 viewControllerForPresentationFromBannerView:(id)arg2 playbackController:(id)arg3 playbackAdvancer:(id)arg4 queueProvider:(id)arg5 ;
@end

