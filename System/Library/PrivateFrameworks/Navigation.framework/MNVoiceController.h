/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>
#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>
#import <libobjc.A.dylib/MNVoiceEventQueueDelegate.h>

@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;
@class MNNavigationAudioSession, MNVoiceEvent, MNVoiceEventQueue, NSMutableArray, VSSpeechRequest, AVAudioPlayer, NSObject, NSTimer, NSString, NSLocale, NSBundle, NSHashTable, VSSpeechSynthesizer, CARSessionStatus;

@interface MNVoiceController : NSObject <CARSessionObserving, VSSpeechSynthesizerDelegate, AVAudioPlayerDelegate, MNVoiceEventQueueDelegate> {

	MNNavigationAudioSession* _activeNavigationSession;
	MNVoiceEvent* _currentVoiceEvent;
	MNVoiceEventQueue* _eventQueue;
	NSMutableArray* _postAudioSessionActivationBlocks;
	float _currentVolume;
	VSSpeechRequest* _speechRequest;
	AVAudioPlayer* _leftTurnAudioPlayer;
	AVAudioPlayer* _rightTurnAudioPlayer;
	BOOL _shouldBePlayingPrompt;
	NSObject*<OS_dispatch_queue> _audioQueue;
	BOOL _muteOverride;
	NSTimer* _eventProcessingTimer;
	NSTimer* _activationDebugTimer;
	long long _currentLanguageSource;
	NSString* _currentLanguage;
	NSLocale* _currentLocale;
	NSBundle* _spokenBundle;
	NSString* _uiLanguage;
	BOOL _isPersistentConnectionOpen;
	long long _audioSessionState;
	NSHashTable* _observers;
	double _lastSpeechStartTime;
	NSString* _lastSpeech;
	unsigned long long _charactersSpokenCount;
	double _charactersSpokenDuration;
	id<VSSpeechSynthesizerDelegate> _delegate;
	VSSpeechSynthesizer* _synthesizer;
	CARSessionStatus* _carSessionStatus;

}

@property (nonatomic,retain) CARSessionStatus * carSessionStatus;                             //@synthesize carSessionStatus=_carSessionStatus - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechSynthesizerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSSpeechSynthesizer * synthesizer;                               //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;                                 //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,retain) MNVoiceEvent * currentVoiceEvent;                                //@synthesize currentVoiceEvent=_currentVoiceEvent - In the implementation block
@property (nonatomic,readonly) NSString * currentVoiceLanguage; 
@property (nonatomic,readonly) NSLocale * currentVoiceLocale; 
@property (nonatomic,readonly) BOOL speechMuted; 
@property (nonatomic,readonly) BOOL deviceMuted; 
@property (nonatomic,retain) MNNavigationAudioSession * activeNavigationSession;              //@synthesize activeNavigationSession=_activeNavigationSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)localizedStringForKey:(id)arg1 ;
+(id)_uiLanguage;
+(id)defaultVoiceLanguageWithSource:(long long*)arg1 ;
+(id)_deviceVoiceLanguage;
-(id)init;
-(id<VSSpeechSynthesizerDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechSynthesizerDelegate>)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)stop;
-(void)setVolume:(double)arg1 ;
-(void)_defaultsDidChange;
-(void)prepareToAnnounce;
-(BOOL)speechMuted;
-(NSString *)currentVoiceLanguage;
-(void)voiceEventQueue:(id)arg1 wantsToImmediatelyPlayEvent:(id)arg2 ;
-(id)_leftTurnAudioPlayer;
-(id)_rightTurnAudioPlayer;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3 ;
-(VSSpeechRequest *)speechRequest;
-(NSLocale *)currentVoiceLocale;
-(id)_localizedStringForKey:(id)arg1 ;
-(double)durationToSpeak:(id)arg1 ;
-(void)_updateCurrentVoiceLanguage;
-(BOOL)deviceMuted;
-(void)_setGender;
-(void)speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isSpeaking;
-(BOOL)isPlayingAudio;
-(BOOL)_stopCurrentEvent;
-(void)_handleFinishedSpeakingWithStatusCode:(int)arg1 ;
-(void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2 ;
-(void)warmUpTTS;
-(void)_handleFinishedPlayingBeepWithStatusCode:(int)arg1 ;
-(void)_processNextEvent;
-(void)_playEvent:(id)arg1 ;
-(BOOL)_playTextEvent:(id)arg1 ;
-(BOOL)_playBeepEvent:(id)arg1 ;
-(void)_failCurrentEventAndProcessNext;
-(void)_eventProcessingTimerFired:(id)arg1 ;
-(void)_activationDebugTimerFired:(id)arg1 ;
-(void)endAnnounce;
-(void)_performWithActiveAudioSession:(/*^block*/id)arg1 ;
-(void)_activateAudioSession:(/*^block*/id)arg1 ;
-(void)_deactivateAudioSession;
-(void)_setAudioSessionActive:(BOOL)arg1 ;
-(void)setAudioSessionProperties;
-(void)_updateFromAudioRoutes;
-(void)setActiveNavigationSession:(MNNavigationAudioSession *)arg1 ;
-(void)_setMaintainInactivePersistentConnection:(BOOL)arg1 ;
-(void)_setVolumeControlEnabled:(BOOL)arg1 ;
-(void)_audioInterruption:(id)arg1 ;
-(void)_audioRoutesChanged:(id)arg1 ;
-(void)_resetAudioPlayers;
-(MNNavigationAudioSession *)activeNavigationSession;
-(MNVoiceEvent *)currentVoiceEvent;
-(void)setCurrentVoiceEvent:(MNVoiceEvent *)arg1 ;
-(VSSpeechSynthesizer *)synthesizer;
-(void)setSynthesizer:(VSSpeechSynthesizer *)arg1 ;
-(CARSessionStatus *)carSessionStatus;
-(void)setCarSessionStatus:(CARSessionStatus *)arg1 ;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)sessionDidConnect:(id)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)clearAllEvents;
@end
