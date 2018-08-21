/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKAVPlayerControllerDelegate;
@class AVPlayer;

@interface TSKAVPlayerController : NSObject {

	AVPlayer* mPlayer;
	id<TSKAVPlayerControllerDelegate> mDelegate;
	long long mRepeatMode;
	float mVolume;
	float mRateBeforeScrubbing;
	unsigned long long mScrubbingCount;
	BOOL mCanPlay;
	BOOL mPlaying;
	BOOL mFastReversing;
	BOOL mFastForwarding;
	BOOL mIsObservingStatus;
	unsigned long long mAdditionalReferences;
	double _absoluteCurrentTime;

}

@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) id<TSKAVPlayerControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL canPlay; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (nonatomic,readonly) double absoluteDuration; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double absoluteCurrentTime;                                //@synthesize absoluteCurrentTime=_absoluteCurrentTime - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing; 
@property (assign,getter=isFastReversing,nonatomic) BOOL fastReversing; 
@property (assign,getter=isFastForwarding,nonatomic) BOOL fastForwarding; 
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingAbsoluteDuration;
+(BOOL)automaticallyNotifiesObserversOfStartTime;
+(id)keyPathsForValuesAffectingStartTime;
+(BOOL)automaticallyNotifiesObserversOfEndTime;
+(id)keyPathsForValuesAffectingEndTime;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(double)remainingTime;
-(id)init;
-(id<TSKAVPlayerControllerDelegate>)delegate;
-(void)dealloc;
-(double)duration;
-(void)setStartTime:(double)arg1 ;
-(void)teardown;
-(double)startTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVPlayer *)player;
-(BOOL)isScrubbing;
-(void)setPlaying:(BOOL)arg1 ;
-(void)p_startObservingClosedCaptionDisplayEnabled;
-(BOOL)isFastReversing;
-(BOOL)isFastForwarding;
-(void)p_stopObservingClosedCaptionDisplayEnabled;
-(void)p_applyVolumeToPlayerItem;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg1 ;
-(void)setFastReversing:(BOOL)arg1 ;
-(void)setFastForwarding:(BOOL)arg1 ;
-(BOOL)p_canFastReverse;
-(BOOL)p_canFastForward;
-(void)p_closedCaptioningStatusDidChange:(id)arg1 ;
-(void)p_updateClosedCaptionDisplayEnabled;
-(long long)repeatMode;
-(BOOL)canPlay;
-(void)p_playerItemDidPlayToEndTime:(id)arg1 ;
-(void)p_playbackDidFailWithError:(id)arg1 ;
-(void)p_applicationDidResignActive;
-(id)initWithPlayer:(id)arg1 delegate:(id)arg2 ;
-(void)addAdditionalReference;
-(double)absoluteDuration;
-(void)setRepeatMode:(long long)arg1 ;
-(double)absoluteCurrentTime;
-(void)beginScrubbing;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 ;
-(void)endScrubbing;
-(void)seekForwardByOneFrame;
-(void)seekBackwardByOneFrame;
-(void)seekToBeginning;
-(void)seekToEnd;
-(void)setAbsoluteCurrentTime:(double)arg1 ;
@end

