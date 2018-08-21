/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KNAnimationPluginContext;
@class KNPlaybackSession, KNAnimatedSlideView;

@interface KNAnimationRenderer : NSObject {

	KNPlaybackSession* _session;
	KNAnimatedSlideView* _ASV;
	BOOL _areAnimationsPaused;
	id _plugin;
	Class _pluginClass;
	unsigned long long _direction;
	double _duration;
	id<KNAnimationPluginContext> _pluginContext;

}

@property (nonatomic,readonly) id plugin;                                               //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) Class pluginClass;                                       //@synthesize pluginClass=_pluginClass - In the implementation block
@property (nonatomic,readonly) id<KNAnimationPluginContext> pluginContext;              //@synthesize pluginContext=_pluginContext - In the implementation block
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg1 ;
-(void)setupPluginContext;
-(id<KNAnimationPluginContext>)pluginContext;
-(void)generateTextures;
-(void)renderTextures;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPaused;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)teardown;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(id)plugin;
-(Class)pluginClass;
-(void)stopAnimations;
-(void)pauseAnimations;
@end
