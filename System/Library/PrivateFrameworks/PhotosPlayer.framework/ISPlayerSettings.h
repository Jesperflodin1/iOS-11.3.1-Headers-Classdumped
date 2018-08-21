/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPlayerSettings : ISSettings {

	BOOL _easingEnabled;
	BOOL _scaleDuringPlayback;
	BOOL _loopingEnabled;
	BOOL _crossfadeEnabled;
	BOOL _audioEnabled;
	BOOL _playIsSticky;
	BOOL _longExposureVitality;
	BOOL _playDuringHint;
	BOOL _showStateOverlay;
	BOOL _prerollBeforePlaying;
	BOOL _useDedicatedQueues;
	BOOL _allowFrameBlending;
	BOOL _allowVideoPreRoll;
	BOOL _allowPlayerReuse;
	float _vitalityEaseMinRate;
	double _photoTransitionAdjustment;
	double _minimumPhotoTransitionDuration;
	double _minimumColorAdjustedPhotoTransitionDuration;
	double _vitalityEaseDuration;
	long long _startBehavior;
	double _forceTouchTimeoutInterval;
	double _forceTouchTimeoutMinimumProgress;
	double _forceScrubMinimumPressure;
	double _forceScrubMaximumPressure;
	double _forceScrubRewindFactor;
	double _forceScrubMinRateChange;
	double _forceScrubMinimumRate;
	double _forceScrubMaximumInteractiveRate;
	double _audioRampDuration;

}

@property (assign,nonatomic) double photoTransitionAdjustment;                                //@synthesize photoTransitionAdjustment=_photoTransitionAdjustment - In the implementation block
@property (assign,nonatomic) double minimumPhotoTransitionDuration;                           //@synthesize minimumPhotoTransitionDuration=_minimumPhotoTransitionDuration - In the implementation block
@property (assign,nonatomic) double minimumColorAdjustedPhotoTransitionDuration;              //@synthesize minimumColorAdjustedPhotoTransitionDuration=_minimumColorAdjustedPhotoTransitionDuration - In the implementation block
@property (assign,nonatomic) BOOL easingEnabled;                                              //@synthesize easingEnabled=_easingEnabled - In the implementation block
@property (assign,nonatomic) double vitalityEaseDuration;                                     //@synthesize vitalityEaseDuration=_vitalityEaseDuration - In the implementation block
@property (assign,nonatomic) float vitalityEaseMinRate;                                       //@synthesize vitalityEaseMinRate=_vitalityEaseMinRate - In the implementation block
@property (assign,nonatomic) long long startBehavior;                                         //@synthesize startBehavior=_startBehavior - In the implementation block
@property (assign,nonatomic) BOOL scaleDuringPlayback;                                        //@synthesize scaleDuringPlayback=_scaleDuringPlayback - In the implementation block
@property (assign,nonatomic) BOOL loopingEnabled;                                             //@synthesize loopingEnabled=_loopingEnabled - In the implementation block
@property (assign,nonatomic) BOOL crossfadeEnabled;                                           //@synthesize crossfadeEnabled=_crossfadeEnabled - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                               //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) BOOL playIsSticky;                                               //@synthesize playIsSticky=_playIsSticky - In the implementation block
@property (assign,nonatomic) BOOL longExposureVitality;                                       //@synthesize longExposureVitality=_longExposureVitality - In the implementation block
@property (assign,nonatomic) BOOL playDuringHint;                                             //@synthesize playDuringHint=_playDuringHint - In the implementation block
@property (assign,nonatomic) BOOL showStateOverlay;                                           //@synthesize showStateOverlay=_showStateOverlay - In the implementation block
@property (assign,nonatomic) BOOL prerollBeforePlaying;                                       //@synthesize prerollBeforePlaying=_prerollBeforePlaying - In the implementation block
@property (assign,nonatomic) BOOL useDedicatedQueues;                                         //@synthesize useDedicatedQueues=_useDedicatedQueues - In the implementation block
@property (assign,nonatomic) BOOL allowFrameBlending;                                         //@synthesize allowFrameBlending=_allowFrameBlending - In the implementation block
@property (assign,nonatomic) BOOL allowVideoPreRoll;                                          //@synthesize allowVideoPreRoll=_allowVideoPreRoll - In the implementation block
@property (assign,nonatomic) BOOL allowPlayerReuse;                                           //@synthesize allowPlayerReuse=_allowPlayerReuse - In the implementation block
@property (assign,nonatomic) double forceTouchTimeoutInterval;                                //@synthesize forceTouchTimeoutInterval=_forceTouchTimeoutInterval - In the implementation block
@property (assign,nonatomic) double forceTouchTimeoutMinimumProgress;                         //@synthesize forceTouchTimeoutMinimumProgress=_forceTouchTimeoutMinimumProgress - In the implementation block
@property (assign,nonatomic) double forceScrubMinimumPressure;                                //@synthesize forceScrubMinimumPressure=_forceScrubMinimumPressure - In the implementation block
@property (assign,nonatomic) double forceScrubMaximumPressure;                                //@synthesize forceScrubMaximumPressure=_forceScrubMaximumPressure - In the implementation block
@property (assign,nonatomic) double forceScrubRewindFactor;                                   //@synthesize forceScrubRewindFactor=_forceScrubRewindFactor - In the implementation block
@property (assign,nonatomic) double forceScrubMinRateChange;                                  //@synthesize forceScrubMinRateChange=_forceScrubMinRateChange - In the implementation block
@property (assign,nonatomic) double forceScrubMinimumRate;                                    //@synthesize forceScrubMinimumRate=_forceScrubMinimumRate - In the implementation block
@property (assign,nonatomic) double forceScrubMaximumInteractiveRate;                         //@synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate - In the implementation block
@property (assign,nonatomic) double audioRampDuration;                                        //@synthesize audioRampDuration=_audioRampDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setAllowPlayerReuse:(BOOL)arg1 ;
-(void)setPlayIsSticky:(BOOL)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(void)setVitalityEaseDuration:(double)arg1 ;
-(void)setVitalityEaseMinRate:(float)arg1 ;
-(void)setCrossfadeEnabled:(BOOL)arg1 ;
-(void)setPrerollBeforePlaying:(BOOL)arg1 ;
-(void)setUseDedicatedQueues:(BOOL)arg1 ;
-(void)setAllowFrameBlending:(BOOL)arg1 ;
-(void)setAllowVideoPreRoll:(BOOL)arg1 ;
-(void)setForceTouchTimeoutInterval:(double)arg1 ;
-(void)setShowStateOverlay:(BOOL)arg1 ;
-(void)setForceTouchTimeoutMinimumProgress:(double)arg1 ;
-(void)setForceScrubMinimumPressure:(double)arg1 ;
-(void)setForceScrubMaximumPressure:(double)arg1 ;
-(void)setForceScrubRewindFactor:(double)arg1 ;
-(void)setForceScrubMinRateChange:(double)arg1 ;
-(void)setAudioRampDuration:(double)arg1 ;
-(void)setForceScrubMinimumRate:(double)arg1 ;
-(void)setForceScrubMaximumInteractiveRate:(double)arg1 ;
-(void)setPlayDuringHint:(BOOL)arg1 ;
-(void)setScaleDuringPlayback:(BOOL)arg1 ;
-(void)setEasingEnabled:(BOOL)arg1 ;
-(void)setPhotoTransitionAdjustment:(double)arg1 ;
-(void)setMinimumPhotoTransitionDuration:(double)arg1 ;
-(void)setMinimumColorAdjustedPhotoTransitionDuration:(double)arg1 ;
-(void)setLongExposureVitality:(BOOL)arg1 ;
-(double)photoTransitionAdjustment;
-(double)minimumPhotoTransitionDuration;
-(double)minimumColorAdjustedPhotoTransitionDuration;
-(BOOL)easingEnabled;
-(double)vitalityEaseDuration;
-(float)vitalityEaseMinRate;
-(long long)startBehavior;
-(void)setStartBehavior:(long long)arg1 ;
-(BOOL)scaleDuringPlayback;
-(BOOL)loopingEnabled;
-(BOOL)crossfadeEnabled;
-(BOOL)playIsSticky;
-(BOOL)longExposureVitality;
-(BOOL)playDuringHint;
-(BOOL)showStateOverlay;
-(BOOL)prerollBeforePlaying;
-(BOOL)useDedicatedQueues;
-(BOOL)allowFrameBlending;
-(BOOL)allowVideoPreRoll;
-(BOOL)allowPlayerReuse;
-(double)forceTouchTimeoutInterval;
-(double)forceTouchTimeoutMinimumProgress;
-(double)forceScrubMinimumPressure;
-(double)forceScrubMaximumPressure;
-(double)forceScrubRewindFactor;
-(double)forceScrubMinRateChange;
-(double)forceScrubMinimumRate;
-(double)forceScrubMaximumInteractiveRate;
-(double)audioRampDuration;
-(BOOL)audioEnabled;
@end

