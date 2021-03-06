/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CLKVideoPlayerViewDelegate.h>

@protocol CLKMediaAssetViewDelegate;
@class CLKVideoPlayerView, CLKMediaAsset, UIImageView, UIView, AVSynchronizedLayer, CALayer, NSString;

@interface CLKMediaAssetView : UIView <CLKVideoPlayerViewDelegate> {

	CLKVideoPlayerView* _videoPlayerView;
	CLKMediaAsset* _mediaAsset;
	UIImageView* _posterView;
	UIView* _curtainView;
	unsigned _isVideoLoaded : 1;
	unsigned _isPlaying : 1;
	id _timeObserver;
	AVSynchronizedLayer* _syncLayer;
	CALayer* _posterLayer;
	long long _preparedForOperation;
	long long _transitionOperation;
	id<CLKMediaAssetViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CLKMediaAssetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CLKMediaAsset * mediaAsset;                               //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CLKMediaAssetViewDelegate>)delegate;
-(void)setDelegate:(id<CLKMediaAssetViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_reset;
-(BOOL)isPlaying;
-(void)_cancelPlayback;
-(SCD_Struct_CL3)_startTimeForOperation:(long long)arg1 ;
-(SCD_Struct_CL3)_endTimeForOperation:(long long)arg1 ;
-(void)_completePlaybackWithOperation:(long long)arg1 ;
-(void)_transitionFromPosterToVideo;
-(void)showCurtainView;
-(void)hideCurtainView;
-(void)fadeToCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeFromCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)interruptPlayback;
-(void)resumeInterruptedPlayback;
-(void)pauseVideoPlayerViewIfItExists;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)_createVideoPlayerViewIfNeeded;
-(void)videoPlayerViewDidFinishPlayingVideoToEnd:(id)arg1 ;
-(CLKMediaAsset *)mediaAsset;
-(void)changeMediaAsset:(id)arg1 ;
-(void)prepareToPlayWithOperation:(long long)arg1 ;
-(void)playWithOperation:(long long)arg1 ;
-(void)pauseWithOperation:(long long)arg1 ;
@end

