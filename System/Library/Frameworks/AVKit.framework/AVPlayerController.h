/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIResponder.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSArray, NSObject, NSNumber, AVValueTiming, AVPlayer, AVPlayerPropertyCache, NSDictionary, NSDate, NSError;

@interface AVPlayerController : UIResponder {

	BOOL _jKeyDown;
	BOOL _kKeyDown;
	BOOL _lKeyDown;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	long long _savedCaptionAppearanceDisplayType;
	float _rate;
	BOOL _isResumed;
	NSObject*<OS_dispatch_source> _seekTimer;
	double _timeOfLastUpdate;
	NSObject*<OS_dispatch_queue> _seekQueue;
	BOOL _ignoreRateKeyValueChange;
	void* _observationInfo;
	id _updateAtMinMaxTimePeriodicObserverToken;
	id _timebaseEffectiveRateObserver;
	id _timebaseTimeJumpedObserver;
	id _playerItemTimeJumpedObserver;
	id _playerItemDidPlayToEndTimeObserver;
	id _audioSessionInterruptionObserver;
	id _currentLocaleDidChangeObserver;
	BOOL _pictureInPictureInterrupted;
	NSNumber* _rateToRestoreAfterAudioSessionInterruptionEnds;
	BOOL _isPictureInPictureSupported;
	/*^block*/id _retryPlayingImmediatelyBlock;
	BOOL _shouldPlayImmediately;
	BOOL _looping;
	long long _actionAtItemEnd;
	BOOL _pendingSeek;
	SCD_Struct_AV10 _toleranceBefore;
	SCD_Struct_AV10 _toleranceAfter;
	BOOL _isScanningForward;
	BOOL _isScanningBackward;
	unsigned long long _scanningCount;
	double _preScanningRate;
	AVValueTiming* _liveStreamMinTiming;
	AVValueTiming* _liveStreamMaxTiming;
	BOOL _liveStreamEventModePossible;
	long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
	BOOL _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
	BOOL _shouldPlayWhenLikelyToKeepUp;
	BOOL _forceScanning;
	double _rateBeforeForceScanning;
	id _deviceBatteryStateDidChangeObserver;
	BOOL _deviceBatteryMonitoringWasEnabled;
	BOOL _playingOnSecondScreen;
	long long _allowsIdleSleepPreventionCount;
	BOOL _didPreventSleepWhenStartingExternalPlayback;
	BOOL _atMaxTime;
	BOOL _atMinTime;
	BOOL _scrubbing;
	BOOL _seekingInternal;
	BOOL _seeking;
	BOOL _composable;
	BOOL _hasProtectedContent;
	BOOL _compatibleWithAirPlayVideo;
	BOOL _preventingIdleSystemSleep;
	BOOL _preventingIdleDisplaySleep;
	BOOL _disablingAutomaticTermination;
	BOOL _deviceBatteryChargingOrFull;
	AVPlayer* _player;
	AVPlayerPropertyCache* _propertyCache;
	AVValueTiming* _timing;
	AVValueTiming* _minTiming;
	AVValueTiming* _maxTiming;
	double _seekToTime;
	NSDictionary* _metadata;
	NSArray* _contentChapters;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;
	SCD_Struct_AV10 _seekToTimeInternal;

}

@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@property (nonatomic,readonly) AVPlayerPropertyCache * propertyCache;                                                //@synthesize propertyCache=_propertyCache - In the implementation block
@property (assign,getter=isAtMaxTime,nonatomic) BOOL atMaxTime;                                                      //@synthesize atMaxTime=_atMaxTime - In the implementation block
@property (assign,getter=isAtMinTime,nonatomic) BOOL atMinTime;                                                      //@synthesize atMinTime=_atMinTime - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                      //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVValueTiming * timing;                                                                 //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) AVValueTiming * minTiming;                                                              //@synthesize minTiming=_minTiming - In the implementation block
@property (nonatomic,retain) AVValueTiming * maxTiming;                                                              //@synthesize maxTiming=_maxTiming - In the implementation block
@property (getter=isSeekingInternal) BOOL seekingInternal;                                                           //@synthesize seekingInternal=_seekingInternal - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                                          //@synthesize seeking=_seeking - In the implementation block
@property (assign) SCD_Struct_AV10 seekToTimeInternal;                                                               //@synthesize seekToTimeInternal=_seekToTimeInternal - In the implementation block
@property (assign,nonatomic) double seekToTime;                                                                      //@synthesize seekToTime=_seekToTime - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * contentChapters;                                                              //@synthesize contentChapters=_contentChapters - In the implementation block
@property (assign,getter=isComposable,nonatomic) BOOL composable;                                                    //@synthesize composable=_composable - In the implementation block
@property (assign,nonatomic) BOOL hasProtectedContent;                                                               //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (nonatomic,retain) NSArray * availableMetadataFormats;                                                     //@synthesize availableMetadataFormats=_availableMetadataFormats - In the implementation block
@property (assign,getter=isCompatibleWithAirPlayVideo,nonatomic) BOOL compatibleWithAirPlayVideo;                    //@synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo - In the implementation block
@property (assign,nonatomic) double rateBeforeScrubBegan;                                                            //@synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan - In the implementation block
@property (assign,getter=isPreventingIdleSystemSleep,nonatomic) BOOL preventingIdleSystemSleep;                      //@synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep - In the implementation block
@property (assign,getter=isPreventingIdleDisplaySleep,nonatomic) BOOL preventingIdleDisplaySleep;                    //@synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep - In the implementation block
@property (assign,getter=isDisablingAutomaticTermination,nonatomic) BOOL disablingAutomaticTermination;              //@synthesize disablingAutomaticTermination=_disablingAutomaticTermination - In the implementation block
@property (assign,getter=isDeviceBatteryChargingOrFull,nonatomic) BOOL deviceBatteryChargingOrFull;                  //@synthesize deviceBatteryChargingOrFull=_deviceBatteryChargingOrFull - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreventIdleDisplaySleep; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> seekTimer; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(id)keyPathsForValuesAffectingMuted;
+(void)initialize;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingCompletelySeekable;
+(id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingCurrentAssetIfReady;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingStreaming;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingReversePlaybackEndTime;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasVideo;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingHasContentChapters;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingTimeControlStatus;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingCanSeekChapterForward;
+(id)keyPathsForValuesAffectingCanSeekChapterBackward;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+(id)keyPathsForValuesAffectingStatus;
-(void)setObservationInfo:(void*)arg1 ;
-(AVPlayerPropertyCache *)propertyCache;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(long long)timeControlStatus;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(id)audioOptions;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)status;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)hasContent;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isLooping;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void*)observationInfo;
-(NSDictionary *)metadata;
-(BOOL)canPause;
-(id)initWithPlayer:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(BOOL)allowsExternalPlayback;
-(double)maxTime;
-(long long)externalPlaybackType;
-(BOOL)isPictureInPicturePossible;
-(BOOL)hasVideo;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(id)currentLegibleMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)toggleCaptions;
-(void)reloadOptions;
-(void)reloadAudioOptions;
-(void)reloadLegibleOptions;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(id)legibleMediaSelectionOptions;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(void)setSavedCaptionAppearanceDisplayType:(long long)arg1 ;
-(long long)savedCaptionAppearanceDisplayType;
-(id)audioMediaSelectionOptions;
-(id)legibleOptions;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(id)_optionsForGroup:(id)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(BOOL)isPlayingOnSecondScreen;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(BOOL)hasSeekableLiveStreamingContent;
-(id)_queuePlayer;
-(BOOL)isCompletelySeekable;
-(void)startAllowingIdleSleepPrevention;
-(void)stopAllowingIdleSleepPrevention;
-(BOOL)allowsIdleSleepPrevention;
-(BOOL)shouldPreventIdleDisplaySleep;
-(void)_retryPlayImmediatelyIfNeeded;
-(BOOL)canPlayImmediately;
-(NSObject*<OS_dispatch_source>)seekTimer;
-(void)_handleSeekTimerEvent;
-(void)autoplay:(id)arg1 ;
-(BOOL)canTogglePlayback;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)setLooping:(BOOL)arg1 ;
-(void)updateAtMinMaxTime;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(BOOL)isInspectionSuspended;
-(void)setInspectionSuspended:(BOOL)arg1 ;
-(id)currentAssetIfReady;
-(CGSize)contentDimensions;
-(void)_setMinTiming:(id)arg1 maxTiming:(id)arg2 ;
-(double)contentDurationWithinEndTimes;
-(BOOL)hasContentChapters;
-(BOOL)hasLiveStreamingContent;
-(BOOL)hasTrimmableContent;
-(BOOL)hasShareableContent;
-(BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1 ;
-(BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1 ;
-(void)seekToCMTime:(SCD_Struct_AV10)arg1 toleranceBefore:(SCD_Struct_AV10)arg2 toleranceAfter:(SCD_Struct_AV10)arg3 ;
-(void)throttledSeekToTime:(SCD_Struct_AV10)arg1 toleranceBefore:(SCD_Struct_AV10)arg2 toleranceAfter:(SCD_Struct_AV10)arg3 ;
-(void)actuallySeekToTime;
-(void)seekByTimeInterval:(double)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(BOOL)canScanForward;
-(void)scanForward:(id)arg1 ;
-(void)beginScanningForward:(id)arg1 ;
-(void)_updateScanningForwardRate;
-(void)endScanningForward:(id)arg1 ;
-(BOOL)canScanBackward;
-(void)scanBackward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)_updateScanningBackwardRate;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekToBeginning:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(BOOL)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(void)seekOrStepByFrameCount:(long long)arg1 ;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(void)seekToChapter:(id)arg1 ;
-(BOOL)canSeekChapterForward;
-(void)seekChapterForward:(id)arg1 ;
-(BOOL)canSeekChapterBackward;
-(void)seekChapterBackward:(id)arg1 ;
-(void)updateTiming;
-(void)updateMinMaxTiming;
-(BOOL)isPlayingOnExternalScreen;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)_cancelPendingSeeksIfNeeded;
-(id)scanningDelays;
-(BOOL)isAtMaxTime;
-(void)setAtMaxTime:(BOOL)arg1 ;
-(BOOL)isAtMinTime;
-(void)setAtMinTime:(BOOL)arg1 ;
-(AVValueTiming *)minTiming;
-(void)setMinTiming:(AVValueTiming *)arg1 ;
-(AVValueTiming *)maxTiming;
-(void)setMaxTiming:(AVValueTiming *)arg1 ;
-(BOOL)isSeekingInternal;
-(void)setSeekingInternal:(BOOL)arg1 ;
-(BOOL)isSeeking;
-(void)setSeeking:(BOOL)arg1 ;
-(SCD_Struct_AV10)seekToTimeInternal;
-(void)setSeekToTimeInternal:(SCD_Struct_AV10)arg1 ;
-(double)seekToTime;
-(void)setSeekToTime:(double)arg1 ;
-(NSArray *)contentChapters;
-(void)setContentChapters:(NSArray *)arg1 ;
-(void)setComposable:(BOOL)arg1 ;
-(void)setHasProtectedContent:(BOOL)arg1 ;
-(void)setAvailableMetadataFormats:(NSArray *)arg1 ;
-(void)setCompatibleWithAirPlayVideo:(BOOL)arg1 ;
-(double)rateBeforeScrubBegan;
-(void)setRateBeforeScrubBegan:(double)arg1 ;
-(BOOL)isPreventingIdleSystemSleep;
-(void)setPreventingIdleSystemSleep:(BOOL)arg1 ;
-(BOOL)isPreventingIdleDisplaySleep;
-(void)setPreventingIdleDisplaySleep:(BOOL)arg1 ;
-(BOOL)isDisablingAutomaticTermination;
-(void)setDisablingAutomaticTermination:(BOOL)arg1 ;
-(BOOL)isDeviceBatteryChargingOrFull;
-(void)setDeviceBatteryChargingOrFull:(BOOL)arg1 ;
-(void)setRateWithForce:(double)arg1 ;
-(AVPlayer *)player;
-(BOOL)isScrubbing;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(NSError *)error;
-(float)nominalFrameRate;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(NSDate *)currentDate;
-(BOOL)hasMediaSelectionOptions;
-(BOOL)canSeek;
-(SCD_Struct_AV10)reversePlaybackEndTime;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV10)arg1 ;
-(SCD_Struct_AV10)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV10)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(BOOL)canPlay;
-(void)beginScrubbing;
-(void)endScrubbing;
-(BOOL)isStreaming;
-(BOOL)hasProtectedContent;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)pause:(id)arg1 ;
-(NSArray *)availableMetadataFormats;
-(AVValueTiming *)timing;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(void)play:(id)arg1 ;
-(double)contentDuration;
@end

