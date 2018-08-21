/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPCMediaRemoteMuxerDelegate.h>

@class NSPointerArray, MPCPlayerItem, MPRemoteCommandCenter, AVPlayerLayer, NSString, MPCPlayerItemContainer, MPCMediaRemoteMuxer, NSArray;

@interface MPCPlayer : NSObject <MPCMediaRemoteMuxerDelegate> {

	NSPointerArray* _playbackErrorObservers;
	NSPointerArray* _playbackIntentObservers;
	BOOL _shouldRestorePlaybackState;
	BOOL _restoringPlaybackState;
	BOOL _syncingNowPlayingInfo;
	long long _state;
	MPCPlayerItem* _currentItem;
	MPRemoteCommandCenter* _commandCenter;
	AVPlayerLayer* _videoLayer;
	NSString* _activeRouteName;
	MPCPlayerItemContainer* _currentContainer;
	MPCMediaRemoteMuxer* _mediaRemoteMuxer;
	NSString* _parentAppBundleID;

}

@property (nonatomic,retain) MPRemoteCommandCenter * commandCenter;                                      //@synthesize commandCenter=_commandCenter - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * videoLayer;                                               //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeRouteName;                                          //@synthesize activeRouteName=_activeRouteName - In the implementation block
@property (assign,nonatomic) MPCPlayerItemContainer * currentContainer;                                  //@synthesize currentContainer=_currentContainer - In the implementation block
@property (assign,nonatomic) MPCPlayerItem * currentItem;                                                //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * playbackErrorObservers; 
@property (nonatomic,copy,readonly) NSArray * playbackIntentObservers; 
@property (assign,nonatomic) BOOL shouldRestorePlaybackState;                                            //@synthesize shouldRestorePlaybackState=_shouldRestorePlaybackState - In the implementation block
@property (getter=isRestoringPlaybackState,nonatomic,readonly) BOOL restoringPlaybackState;              //@synthesize restoringPlaybackState=_restoringPlaybackState - In the implementation block
@property (getter=isSyncingNowPlayingInfo,nonatomic,readonly) BOOL syncingNowPlayingInfo;                //@synthesize syncingNowPlayingInfo=_syncingNowPlayingInfo - In the implementation block
@property (assign,nonatomic,__weak) MPCMediaRemoteMuxer * mediaRemoteMuxer;                              //@synthesize mediaRemoteMuxer=_mediaRemoteMuxer - In the implementation block
@property (nonatomic,copy) NSString * parentAppBundleID;                                                 //@synthesize parentAppBundleID=_parentAppBundleID - In the implementation block
@property (assign,nonatomic) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queueRequestOperationClass;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(MPCPlayerItem *)currentItem;
-(void)setCurrentItem:(MPCPlayerItem *)arg1 ;
-(AVPlayerLayer *)videoLayer;
-(void)recordLyricsViewEvent:(id)arg1 ;
-(MPRemoteCommandCenter *)commandCenter;
-(void)setMediaRemoteMuxer:(MPCMediaRemoteMuxer *)arg1 ;
-(NSString *)parentAppBundleID;
-(void)stopSyncingNowPlayingInfo;
-(void)startSyncingNowPlayingInfo;
-(void)updateSupportedCommandsForCommandCenter:(id)arg1 muxer:(id)arg2 action:(SEL)arg3 ;
-(void)performCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCommandCenter:(MPRemoteCommandCenter *)arg1 ;
-(NSArray *)playbackIntentObservers;
-(BOOL)shouldRestorePlaybackState;
-(MPCMediaRemoteMuxer *)mediaRemoteMuxer;
-(NSArray *)playbackErrorObservers;
-(MPCPlayerItemContainer *)currentContainer;
-(void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearPlaybackQueueWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRestoringPlaybackState;
-(void)restorePlaybackStateCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isSyncingNowPlayingInfo;
-(NSString *)activeRouteName;
-(void)setShouldRestorePlaybackState:(BOOL)arg1 ;
-(void)registerPlaybackErrorObserver:(id)arg1 ;
-(void)registerPlaybackIntentObserver:(id)arg1 ;
-(void)unregisterPlaybackErrorObserver:(id)arg1 ;
-(void)unregisterPlaybackIntentObserver:(id)arg1 ;
-(void)setCurrentContainer:(MPCPlayerItemContainer *)arg1 ;
-(void)setParentAppBundleID:(NSString *)arg1 ;
@end

