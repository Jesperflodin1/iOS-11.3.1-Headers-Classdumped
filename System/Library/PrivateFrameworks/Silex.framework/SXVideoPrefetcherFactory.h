/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoPrefetcherFactory.h>

@protocol SXVideoPrefetcherFactory <NSObject>
@required
-(id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;

@end


@protocol SXVideoBufferObserverFactory, SXVideoPrefetchPolicyHandler, SXPlaybackCoordinatorProviding, SXVideoLoadingStateObserverFactory, SXVideoLoadingProgressObserverFactory, SXVideoPlaybackProgressObserverFactory;
@class NSString;

@interface SXVideoPrefetcherFactory : NSObject <SXVideoPrefetcherFactory> {

	id<SXVideoBufferObserverFactory> _bufferObserverFactory;
	id<SXVideoPrefetchPolicyHandler> _prefetchPolicyHandler;
	id<SXPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
	id<SXVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SXVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
	id<SXVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;

}

@property (nonatomic,readonly) id<SXVideoBufferObserverFactory> bufferObserverFactory;                                  //@synthesize bufferObserverFactory=_bufferObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SXVideoPrefetchPolicyHandler> prefetchPolicyHandler;                                  //@synthesize prefetchPolicyHandler=_prefetchPolicyHandler - In the implementation block
@property (nonatomic,readonly) id<SXPlaybackCoordinatorProviding> playbackCoordinatorProvider;                          //@synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider - In the implementation block
@property (nonatomic,readonly) id<SXVideoLoadingStateObserverFactory> loadingStateObserverFactory;                      //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SXVideoLoadingProgressObserverFactory> loadingProgressObserverFactory;                //@synthesize loadingProgressObserverFactory=_loadingProgressObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SXVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;              //@synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXVideoPlaybackProgressObserverFactory>)playbackProgressObserverFactory;
-(id<SXVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id<SXPlaybackCoordinatorProviding>)playbackCoordinatorProvider;
-(id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2 ;
-(id<SXVideoPrefetchPolicyHandler>)prefetchPolicyHandler;
-(id<SXVideoBufferObserverFactory>)bufferObserverFactory;
-(id<SXVideoLoadingProgressObserverFactory>)loadingProgressObserverFactory;
-(id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playbackCoordinatorProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6 ;
@end

