/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVAudioEngine, AVAudioPlayerNode;

@interface AXMSoundComponent : AXMOutputComponent {

	AVAudioEngine* _engine;
	AVAudioPlayerNode* _soundPlayer;
	id _configChangedObserverToken;

}

@property (nonatomic,retain) AVAudioEngine * engine;                       //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) AVAudioPlayerNode * soundPlayer;              //@synthesize soundPlayer=_soundPlayer - In the implementation block
@property (nonatomic,retain) id configChangedObserverToken;                //@synthesize configChangedObserverToken=_configChangedObserverToken - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(void)dealloc;
-(BOOL)canHandleRequest:(id)arg1 options:(id)arg2 ;
-(void)handleRequest:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSoundPlayer:(AVAudioPlayerNode *)arg1 ;
-(void)setConfigChangedObserverToken:(id)arg1 ;
-(void)_buildEngine;
-(void)_wireEngineConnections;
-(BOOL)_startEngineIfNeeded:(id*)arg1 ;
-(id)configChangedObserverToken;
-(AVAudioPlayerNode *)soundPlayer;
-(void)_logAudioFileInfo:(id)arg1 ;
-(AVAudioEngine *)engine;
-(void)setEngine:(AVAudioEngine *)arg1 ;
@end
