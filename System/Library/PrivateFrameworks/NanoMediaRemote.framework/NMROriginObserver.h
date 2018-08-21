/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NMROrigin, NMRNowPlayingState, NMRPlaybackQueue;


@protocol NMROriginObserver
@property (nonatomic,readonly) NMROrigin * origin; 
@property (nonatomic,readonly) NMRNowPlayingState * nowPlayingState; 
@property (nonatomic,readonly) NMRPlaybackQueue * playbackQueue; 
@property (assign,nonatomic,__weak) id<NMROriginObserverDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldObservePlaybackQueue; 
@property (assign,nonatomic) BOOL shouldObserveArtwork; 
@required
-(id<NMROriginObserverDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NMROrigin *)origin;
-(NMRPlaybackQueue *)playbackQueue;
-(void)endObserving;
-(void)updateNowPlayingStateWithCompletion:(/*^block*/id)arg1;
-(NMRNowPlayingState *)nowPlayingState;
-(BOOL)shouldObservePlaybackQueue;
-(void)setShouldObservePlaybackQueue:(BOOL)arg1;
-(BOOL)shouldObserveArtwork;
-(void)setShouldObserveArtwork:(BOOL)arg1;
-(void)beginObserving;

@end

