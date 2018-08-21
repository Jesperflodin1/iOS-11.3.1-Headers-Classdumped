/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPVolumeControllerSystemDataSource.h>

@class MPKeyValueObserver, AVPlayer;

@interface MPVolumeControllerAVPlayerDataSource : MPVolumeControllerSystemDataSource {

	MPKeyValueObserver* _volumeObserver;
	MPKeyValueObserver* _mutedObserver;
	AVPlayer* _player;

}

@property (nonatomic,readonly) AVPlayer * player;              //@synthesize player=_player - In the implementation block
-(void)reload;
-(void)setVolume:(float)arg1 ;
-(void)setVolumeAudioCategory:(id)arg1 ;
-(void)_tearDown;
-(id)initWithAVPlayer:(id)arg1 ;
-(AVPlayer *)player;
-(void)_setup;
-(void)setMuted:(BOOL)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end
