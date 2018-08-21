/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRPlaybackQueueDelegate.h>
#import <libobjc.A.dylib/NMROriginObserver.h>

@protocol OS_dispatch_queue, NMROriginObserverDelegate;
@class NSObject, NMRNowPlayingClient, NMRMediaRemoteUpdater, NMROrigin, NMRNowPlayingState, NMRPlaybackQueue, NSString;

@interface NMROriginMediaRemoteObserver : NSObject <NMRPlaybackQueueDelegate, NMROriginObserver> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _isRegisteredForMediaRemoteNotifications;
	BOOL _isEnforcingApplicationFilter;
	unsigned long long _filteringOptions;
	NMRNowPlayingClient* _nowPlayingClient;
	void* _nowPlayingContentItemRef;
	NMRMediaRemoteUpdater* _nowPlayingInfoUpdater;
	NMRMediaRemoteUpdater* _artworkUpdater;
	NMRMediaRemoteUpdater* _bundleIDUpdater;
	NMRMediaRemoteUpdater* _supportedCommandsUpdater;
	NMRMediaRemoteUpdater* _playbackStateUpdater;
	BOOL _shouldObservePlaybackQueue;
	BOOL _shouldObserveArtwork;
	NMROrigin* _origin;
	NMRNowPlayingState* _nowPlayingState;
	NMRPlaybackQueue* _playbackQueue;
	id<NMROriginObserverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NMROrigin * origin;                                       //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NMRNowPlayingState * nowPlayingState;                     //@synthesize nowPlayingState=_nowPlayingState - In the implementation block
@property (nonatomic,readonly) NMRPlaybackQueue * playbackQueue;                         //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (assign,nonatomic,__weak) id<NMROriginObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldObservePlaybackQueue;                            //@synthesize shouldObservePlaybackQueue=_shouldObservePlaybackQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveArtwork;                                  //@synthesize shouldObserveArtwork=_shouldObserveArtwork - In the implementation block
-(id<NMROriginObserverDelegate>)delegate;
-(void)setDelegate:(id<NMROriginObserverDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NMROrigin *)origin;
-(void)_handlePlaybackQueueDidChangeNotification:(id)arg1 ;
-(void)_handleContentItemsDidChangeNotification:(id)arg1 ;
-(void)_handleContentItemArtworkDidChangeNotification:(id)arg1 ;
-(NMRPlaybackQueue *)playbackQueue;
-(void)endObserving;
-(void)_notifyObserverOfUpdatedNowPlayingInfo;
-(void)_notifyObserverOfUpdatedElapsedTime;
-(void)_notifyObserverOfUpdatedPlaybackState;
-(void)_notifyObserverOfUpdatedSupportedCommands;
-(void)updateNowPlayingStateWithCompletion:(/*^block*/id)arg1 ;
-(NMRNowPlayingState *)nowPlayingState;
-(BOOL)shouldObservePlaybackQueue;
-(void)setShouldObservePlaybackQueue:(BOOL)arg1 ;
-(BOOL)shouldObserveArtwork;
-(void)setShouldObserveArtwork:(BOOL)arg1 ;
-(id)initWithOrigin:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_configureMediaRemoteUpdaters;
-(void)_updateEverything;
-(void)_updateNowPlayingInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateSupportedCommandsWithCompletion:(/*^block*/id)arg1 ;
-(void)_updatePlaybackStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateNowPlayingApplicationInfoWithOptions:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleNowPlayingApplicationDidChangeNotification:(id)arg1 ;
-(void)_handleNowPlayingApplicationPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_handleSupportedCommandsDidChangeNotification:(id)arg1 ;
-(BOOL)_hasEqualIdentifierWithContentItem:(void*)arg1 ;
-(void)_updateNowPlayingContentItem:(void*)arg1 ;
-(void)_updateArtworkWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateIsEnforcingApplicationFilter;
-(void)_notifyObserversOfUpdatedTimestamp;
-(void)_notifyObserverOfUpdatedNowPlayingApplicationBundleID;
-(void)_updateNowPlayingClientWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifyObserversOfUpdatedPlaybackQueue;
-(void)playbackQueueDidChange:(id)arg1 ;
-(void)playbackQueue:(id)arg1 contentItemsDidChange:(id)arg2 ;
-(void)beginObserving;
-(void)_registerForMediaRemoteNotifications;
-(void)_unregisterForMediaRemoteNotifications;
@end

