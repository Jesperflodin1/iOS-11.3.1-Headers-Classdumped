/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPVolumeControllerDataSource.h>

@protocol MPVolumeControllerDataSourceDelegate;
@class NSString;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {

	BOOL _debugVolumeWarning;
	id<MPVolumeControllerDataSourceDelegate> _delegate;
	float _volume;
	BOOL _muted;
	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	float _EUVolumeLimit;
	NSString* _volumeAudioCategory;
	NSString* _volumeControlLabel;
	long long _volumeWarningState;

}

@property (nonatomic,copy) NSString * volumeAudioCategory;                                               //@synthesize volumeAudioCategory=_volumeAudioCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel;                                       //@synthesize volumeControlLabel=_volumeControlLabel - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) float volume;                                                               //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                  //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                                                //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) long long volumeWarningState;                                             //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (nonatomic,readonly) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
-(id)init;
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id<MPVolumeControllerDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(BOOL)volumeWarningEnabled;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(NSString *)volumeControlLabel;
-(NSString *)volumeAudioCategory;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)adjustVolumeValue:(float)arg1 ;
-(void)reloadWarning;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(void)_routeVolumeDidChangeNotification:(id)arg1 ;
-(void)_tearDown;
-(float)_volumeApplyingEUVolumePolicyToVolume:(float)arg1 ;
-(void)_reloadEUVolumeLimits;
-(void)_updateRouteLabelForRoute:(id)arg1 ;
-(void)_systemVolumeDidChange:(id)arg1 ;
-(void)_systemMuteDidChange:(id)arg1 ;
-(void)_EUVolumeLimitDidChange:(id)arg1 ;
-(void)_EUVolumeLimitEnforcedDidChange:(id)arg1 ;
-(void)_volumeControlAvailablityNotification:(id)arg1 ;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;
-(void)_routeDidChangeNotification:(id)arg1 ;
-(void)_setup;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
@end

