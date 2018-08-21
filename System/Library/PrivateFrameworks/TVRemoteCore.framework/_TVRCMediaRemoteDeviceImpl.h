/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <TVRemoteCore/TVRCVoiceRecorderDelegate.h>
#import <TVRemoteCore/_TVRCMROriginDelegate.h>
#import <TVRemoteCore/_TVRCDeviceImpl.h>

@class TVRCDevice, _TVRCMRTelevisionWrapper, _TVRCMROriginWrapper, NSSet, _TVRCMediaRemoteEventTranslator, TVRCVoiceRecorder, NSMutableArray, TVRCKeyboardController, _TVRCMediaRemoteKeyboardImpl, NSString;

@interface _TVRCMediaRemoteDeviceImpl : NSObject <TVRCVoiceRecorderDelegate, _TVRCMROriginDelegate, _TVRCDeviceImpl> {

	unsigned _voiceDeviceID;
	TVRCDevice* _device;
	_TVRCMRTelevisionWrapper* _television;
	_TVRCMROriginWrapper* _origin;
	NSSet* _mediaButtons;
	NSSet* _volumeButtons;
	unsigned long long _touchDeviceID;
	unsigned long long _gameControllerID;
	long long _gameControllerState;
	_TVRCMediaRemoteEventTranslator* _eventTranslator;
	TVRCVoiceRecorder* _voiceRecorder;
	NSMutableArray* _queuedAudioBuffers;
	TVRCKeyboardController* _keyboardController;
	_TVRCMediaRemoteKeyboardImpl* _keyboardImpl;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                          //@synthesize television=_television - In the implementation block
@property (nonatomic,retain) _TVRCMROriginWrapper * origin;                                  //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) NSSet * mediaButtons;                                             //@synthesize mediaButtons=_mediaButtons - In the implementation block
@property (nonatomic,copy) NSSet * volumeButtons;                                            //@synthesize volumeButtons=_volumeButtons - In the implementation block
@property (assign,nonatomic) unsigned long long touchDeviceID;                               //@synthesize touchDeviceID=_touchDeviceID - In the implementation block
@property (assign,nonatomic) unsigned voiceDeviceID;                                         //@synthesize voiceDeviceID=_voiceDeviceID - In the implementation block
@property (assign,nonatomic) unsigned long long gameControllerID;                            //@synthesize gameControllerID=_gameControllerID - In the implementation block
@property (assign,nonatomic) long long gameControllerState;                                  //@synthesize gameControllerState=_gameControllerState - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteEventTranslator * eventTranslator;              //@synthesize eventTranslator=_eventTranslator - In the implementation block
@property (nonatomic,retain) TVRCVoiceRecorder * voiceRecorder;                              //@synthesize voiceRecorder=_voiceRecorder - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedAudioBuffers;                            //@synthesize queuedAudioBuffers=_queuedAudioBuffers - In the implementation block
@property (nonatomic,retain) TVRCKeyboardController * keyboardController;                    //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteKeyboardImpl * keyboardImpl;                    //@synthesize keyboardImpl=_keyboardImpl - In the implementation block
@property (assign,nonatomic,__weak) TVRCDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implWithTelevision:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(_TVRCMROriginWrapper *)origin;
-(id)identifier;
-(void)setOrigin:(_TVRCMROriginWrapper *)arg1 ;
-(void)connect;
-(id)descriptor;
-(void)disconnect;
-(TVRCKeyboardController *)keyboardController;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(id)initWithTelevision:(id)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(TVRCDevice *)device;
-(void)setDevice:(TVRCDevice *)arg1 ;
-(void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(/*^block*/id)arg2 ;
-(void)voidRecorderDidStop:(id)arg1 ;
-(id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3 ;
-(void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2 ;
-(void)_nameChanged:(id)arg1 ;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)_connectionRequestedPairing:(SCD_Struct_TV2)arg1 continuation:(/*^block*/id)arg2 ;
-(void)_addConnectionStateHandler;
-(unsigned long long)pairingCapability;
-(void)_becameDisconnected:(id)arg1 ;
-(void)_removeConnectionStateHandler;
-(void)_resetAllState;
-(void)_sendEquivalentGameButton:(id)arg1 ;
-(void)_connectionStateChanged:(unsigned)arg1 error:(id)arg2 ;
-(void)_becameConnected;
-(void)_registerTouchDevice;
-(void)_setupVoiceRecorder;
-(void)_beginObservingNowPlaying;
-(void)_setupKeyboardController;
-(void)_setupVolumeControls;
-(void)_registerGameControllerInputModeHandler;
-(void)_removePairingRecords;
-(void)_unregisterGameControllerInputModeHandler;
-(void)_teardownVolumeControls;
-(void)_registerVoiceDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)_voiceRecorderStateChanged:(unsigned)arg1 ;
-(void)_drainAndClearAudioBufferQueue;
-(void)_setupOriginIfNeeded;
-(void)_volumeControlsDidUpdate:(id)arg1 ;
-(void)_reloadVolumeControlAvailability;
-(void)setVolumeButtons:(NSSet *)arg1 ;
-(void)_enableVolumeButtons:(BOOL)arg1 ;
-(id)supportedButtons;
-(void)setMediaButtons:(NSSet *)arg1 ;
-(BOOL)_isSystemVersionSupported;
-(void)_gameControllerInputModeChanged:(unsigned)arg1 ;
-(void)_registerGameControllerID;
-(void)_unregisterGameControllerID;
-(void)origin:(id)arg1 updatedSupportedCommands:(id)arg2 ;
-(TVRCVoiceRecorder *)voiceRecorder;
-(void)setAuthenticationSupported:(BOOL)arg1 ;
-(void)sendTouchEvent:(id)arg1 ;
-(NSSet *)mediaButtons;
-(NSSet *)volumeButtons;
-(unsigned long long)touchDeviceID;
-(void)setTouchDeviceID:(unsigned long long)arg1 ;
-(unsigned)voiceDeviceID;
-(void)setVoiceDeviceID:(unsigned)arg1 ;
-(unsigned long long)gameControllerID;
-(void)setGameControllerID:(unsigned long long)arg1 ;
-(long long)gameControllerState;
-(void)setGameControllerState:(long long)arg1 ;
-(_TVRCMediaRemoteEventTranslator *)eventTranslator;
-(void)setEventTranslator:(_TVRCMediaRemoteEventTranslator *)arg1 ;
-(void)setVoiceRecorder:(TVRCVoiceRecorder *)arg1 ;
-(NSMutableArray *)queuedAudioBuffers;
-(void)setQueuedAudioBuffers:(NSMutableArray *)arg1 ;
-(void)setKeyboardController:(TVRCKeyboardController *)arg1 ;
-(_TVRCMediaRemoteKeyboardImpl *)keyboardImpl;
-(void)setKeyboardImpl:(_TVRCMediaRemoteKeyboardImpl *)arg1 ;
@end

