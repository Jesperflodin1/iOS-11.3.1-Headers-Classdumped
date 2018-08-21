/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVKit/AVKit-Structs.h>
@class AVPlayerItem, NSError, NSArray, AVAsset, AVPlayer, NSObject;

@interface AVPlayerPropertyCache : NSObject {

	BOOL _hasLiveStreamingContent;
	BOOL _allowsExternalPlayback;
	BOOL _appliesMediaSelectionCriteriaAutomatically;
	BOOL _usesExternalPlaybackWhileExternalScreenIsActive;
	BOOL _muted;
	BOOL _externalPlaybackActive;
	BOOL _canUseNetworkResourcesForLiveStreamingWhilePaused;
	BOOL _canPlayFastForward;
	BOOL _canPlayFastReverse;
	BOOL _playbackBufferEmpty;
	BOOL _playbackBufferFull;
	BOOL _playbackLikelyToKeepUp;
	BOOL _hasEnabledAudio;
	BOOL _hasEnabledVideo;
	BOOL _hasVideo;
	BOOL _inspectionSuspended;
	BOOL _streaming;
	BOOL _preparingAssetForInspection;
	float _rate;
	float _volume;
	AVPlayerItem* _currentItemIfReady;
	long long _actionAtItemEnd;
	long long _externalPlaybackType;
	long long _playerStatus;
	long long _timeControlStatus;
	NSError* _playerError;
	long long _playerItemStatus;
	NSArray* _loadedTimeRanges;
	NSArray* _seekableTimeRanges;
	NSError* _playerItemError;
	double _liveUpdateInterval;
	double _seekableTimeRangesLastModifiedTime;
	AVAsset* _currentAssetIfReady;
	NSError* _error;
	NSArray* _tracks;
	AVPlayer* _player;
	AVPlayer* _playerIfReady;
	NSObject*<OS_dispatch_queue> _avPropertyAccessQueue;
	CGSize _presentationSize;
	SCD_Struct_AV10 _forwardPlaybackEndTime;
	SCD_Struct_AV10 _reversePlaybackEndTime;
	SCD_Struct_AV10 _duration;

}

@property (assign,nonatomic) long long actionAtItemEnd;                                                          //@synthesize actionAtItemEnd=_actionAtItemEnd - In the implementation block
@property (assign,nonatomic) BOOL allowsExternalPlayback;                                                        //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (assign,nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically;                                    //@synthesize appliesMediaSelectionCriteriaAutomatically=_appliesMediaSelectionCriteriaAutomatically - In the implementation block
@property (assign,nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;                               //@synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive - In the implementation block
@property (assign,nonatomic) float rate;                                                                         //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float volume;                                                                       //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                          //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) long long externalPlaybackType;                                                     //@synthesize externalPlaybackType=_externalPlaybackType - In the implementation block
@property (assign,nonatomic) long long playerStatus;                                                             //@synthesize playerStatus=_playerStatus - In the implementation block
@property (assign,nonatomic) long long timeControlStatus;                                                        //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (assign,getter=isExternalPlaybackActive,nonatomic) BOOL externalPlaybackActive;                        //@synthesize externalPlaybackActive=_externalPlaybackActive - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV10 forwardPlaybackEndTime;                                             //@synthesize forwardPlaybackEndTime=_forwardPlaybackEndTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV10 reversePlaybackEndTime;                                             //@synthesize reversePlaybackEndTime=_reversePlaybackEndTime - In the implementation block
@property (assign,nonatomic) BOOL canUseNetworkResourcesForLiveStreamingWhilePaused;                             //@synthesize canUseNetworkResourcesForLiveStreamingWhilePaused=_canUseNetworkResourcesForLiveStreamingWhilePaused - In the implementation block
@property (assign,nonatomic) long long playerItemStatus;                                                         //@synthesize playerItemStatus=_playerItemStatus - In the implementation block
@property (assign,nonatomic) BOOL canPlayFastForward;                                                            //@synthesize canPlayFastForward=_canPlayFastForward - In the implementation block
@property (assign,nonatomic) BOOL canPlayFastReverse;                                                            //@synthesize canPlayFastReverse=_canPlayFastReverse - In the implementation block
@property (assign,nonatomic) CGSize presentationSize;                                                            //@synthesize presentationSize=_presentationSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV10 duration;                                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSArray * tracks;                                                                   //@synthesize tracks=_tracks - In the implementation block
@property (nonatomic,retain) NSArray * loadedTimeRanges;                                                         //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (nonatomic,retain) NSArray * seekableTimeRanges;                                                       //@synthesize seekableTimeRanges=_seekableTimeRanges - In the implementation block
@property (assign,getter=isPlaybackBufferEmpty,nonatomic) BOOL playbackBufferEmpty;                              //@synthesize playbackBufferEmpty=_playbackBufferEmpty - In the implementation block
@property (assign,getter=isPlaybackBufferFull,nonatomic) BOOL playbackBufferFull;                                //@synthesize playbackBufferFull=_playbackBufferFull - In the implementation block
@property (assign,getter=isPlaybackLikelyToKeepUp,nonatomic) BOOL playbackLikelyToKeepUp;                        //@synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp - In the implementation block
@property (nonatomic,retain) NSError * playerItemError;                                                          //@synthesize playerItemError=_playerItemError - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledAudio;                                                               //@synthesize hasEnabledAudio=_hasEnabledAudio - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledVideo;                                                               //@synthesize hasEnabledVideo=_hasEnabledVideo - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                                                      //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) double liveUpdateInterval;                                                          //@synthesize liveUpdateInterval=_liveUpdateInterval - In the implementation block
@property (assign,nonatomic) double seekableTimeRangesLastModifiedTime;                                          //@synthesize seekableTimeRangesLastModifiedTime=_seekableTimeRangesLastModifiedTime - In the implementation block
@property (nonatomic,readonly) AVPlayer * player;                                                                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayer * playerIfReady;                                                           //@synthesize playerIfReady=_playerIfReady - In the implementation block
@property (nonatomic,retain) AVPlayerItem * currentItemIfReady;                                                  //@synthesize currentItemIfReady=_currentItemIfReady - In the implementation block
@property (nonatomic,retain) AVAsset * currentAssetIfReady;                                                      //@synthesize currentAssetIfReady=_currentAssetIfReady - In the implementation block
@property (assign,getter=isStreaming,nonatomic) BOOL streaming;                                                  //@synthesize streaming=_streaming - In the implementation block
@property (assign,nonatomic) BOOL hasLiveStreamingContent;                                                       //@synthesize hasLiveStreamingContent=_hasLiveStreamingContent - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> avPropertyAccessQueue;                               //@synthesize avPropertyAccessQueue=_avPropertyAccessQueue - In the implementation block
@property (assign,getter=isPreparingAssetForInspection,nonatomic) BOOL preparingAssetForInspection;              //@synthesize preparingAssetForInspection=_preparingAssetForInspection - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (nonatomic,readonly) NSError * playerError;                                                            //@synthesize playerError=_playerError - In the implementation block
@property (assign,getter=isInspectionSuspended,nonatomic) BOOL inspectionSuspended;                              //@synthesize inspectionSuspended=_inspectionSuspended - In the implementation block
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingHasContent;
+(id)propertiesDependentOnHasLiveStreaming;
+(id)keysForUpdatingHasLiveStreamingContent;
+(id)defaultValuesForProperties;
+(id)playerItemPropertiesWhitelistedForBackgroundAccess;
+(id)playerPropertiesWhitelistedForBackgroundAccess;
+(id)keyPathsToPropertyNames;
+(id)propertyNamesToKeyPaths;
+(id)keyPathsForValuesAffectingReadyToPlay;
+(id)keyPathsForValuesAffectingStatus;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(long long)timeControlStatus;
-(BOOL)appliesMediaSelectionCriteriaAutomatically;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(double)seekableTimeRangesLastModifiedTime;
-(double)liveUpdateInterval;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(void)dealloc;
-(SCD_Struct_AV10)duration;
-(void)setDuration:(SCD_Struct_AV10)arg1 ;
-(long long)status;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)hasContent;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setPresentationSize:(CGSize)arg1 ;
-(CGSize)presentationSize;
-(id)initWithPlayer:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(NSArray *)loadedTimeRanges;
-(NSArray *)seekableTimeRanges;
-(BOOL)allowsExternalPlayback;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(long long)externalPlaybackType;
-(long long)actionAtItemEnd;
-(void)setHasVideo:(BOOL)arg1 ;
-(void)setAppliesMediaSelectionCriteriaAutomatically:(BOOL)arg1 ;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1 ;
-(BOOL)hasVideo;
-(BOOL)isInspectionSuspended;
-(void)setInspectionSuspended:(BOOL)arg1 ;
-(AVAsset *)currentAssetIfReady;
-(BOOL)hasLiveStreamingContent;
-(void)setCurrentAssetIfReady:(AVAsset *)arg1 ;
-(void)_prepareAssetForInspectionIfNeeded;
-(BOOL)_shouldInspectValueForKey:(id)arg1 ;
-(void)_updateHasLiveStreamingContent;
-(AVPlayerItem *)currentItemIfReady;
-(void)setCurrentItemIfReady:(AVPlayerItem *)arg1 ;
-(void)setHasLiveStreamingContent:(BOOL)arg1 ;
-(void)setExternalPlaybackType:(long long)arg1 ;
-(void)setPlayerStatus:(long long)arg1 ;
-(void)setExternalPlaybackActive:(BOOL)arg1 ;
-(NSError *)playerError;
-(long long)playerItemStatus;
-(void)setPlayerItemStatus:(long long)arg1 ;
-(void)setCanPlayFastForward:(BOOL)arg1 ;
-(void)setCanPlayFastReverse:(BOOL)arg1 ;
-(void)setSeekableTimeRanges:(NSArray *)arg1 ;
-(void)setPlaybackBufferEmpty:(BOOL)arg1 ;
-(NSError *)playerItemError;
-(void)setPlayerItemError:(NSError *)arg1 ;
-(void)setHasEnabledAudio:(BOOL)arg1 ;
-(void)setHasEnabledVideo:(BOOL)arg1 ;
-(void)setLiveUpdateInterval:(double)arg1 ;
-(void)setSeekableTimeRangesLastModifiedTime:(double)arg1 ;
-(AVPlayer *)playerIfReady;
-(void)setPlayerIfReady:(AVPlayer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)avPropertyAccessQueue;
-(BOOL)isPreparingAssetForInspection;
-(void)setPreparingAssetForInspection:(BOOL)arg1 ;
-(AVPlayer *)player;
-(NSArray *)tracks;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(BOOL)isPlaybackBufferEmpty;
-(BOOL)isPlaybackBufferFull;
-(BOOL)isPlaybackLikelyToKeepUp;
-(long long)playerStatus;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setTracks:(NSArray *)arg1 ;
-(void)setPlaybackLikelyToKeepUp:(BOOL)arg1 ;
-(void)setPlaybackBufferFull:(BOOL)arg1 ;
-(SCD_Struct_AV10)reversePlaybackEndTime;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV10)arg1 ;
-(SCD_Struct_AV10)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV10)arg1 ;
-(BOOL)canPlayFastReverse;
-(BOOL)canPlayFastForward;
-(BOOL)isStreaming;
-(void)setStreaming:(BOOL)arg1 ;
-(void)setTimeControlStatus:(long long)arg1 ;
-(BOOL)isReadyToPlay;
@end
