/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray, NSString, AVAudioSessionRouteDescription, AVAudioSessionPortDescription;

@interface AVAudioSession : NSObject {

	void* _impl;

}

@property (readonly) BOOL isPrimary; 
@property (readonly) NSArray * availableCategories; 
@property (readonly) NSString * category; 
@property (readonly) unsigned long long categoryOptions; 
@property (readonly) unsigned long long routeSharingPolicy; 
@property (readonly) NSArray * availableModes; 
@property (readonly) NSString * mode; 
@property (getter=isOtherAudioPlaying,readonly) BOOL otherAudioPlaying; 
@property (readonly) BOOL secondaryAudioShouldBeSilencedHint; 
@property (readonly) AVAudioSessionRouteDescription * currentRoute; 
@property (readonly) AVAudioSessionPortDescription * preferredInput; 
@property (readonly) NSArray * availableInputs; 
+(id)primarySession;
+(id)retrieveSessionWithID:(unsigned)arg1 ;
+(id)sharedInstance;
+(id)auxiliarySession;
-(AVAudioSessionImpl*)privateGetImplementation;
-(long long)reporterID;
-(double)outputLatency;
-(BOOL)clearInputPreferences:(id*)arg1 ;
-(BOOL)setIAmTheAssistant:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredSampleRate:(double)arg1 error:(id*)arg2 ;
-(BOOL)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id*)arg2 ;
-(double)inputLatency;
-(double)speechDetectionDeviceSampleRate;
-(void)privateInputIsAvailableChanged:(id)arg1 ;
-(void)privateInterruptionWithInfo:(id)arg1 ;
-(void)privateUpdateInputGain:(id)arg1 ;
-(void)privateUpdateOutputVolume:(id)arg1 ;
-(void)privateUpdatePromptStyle:(id)arg1 ;
-(void)privateUpdateAudioFormats:(id)arg1 ;
-(void)privateHandlePickableRoutesChange;
-(void)privateHandleServerDied;
-(void)privateUpdateInputChannelCount:(id)arg1 ;
-(void)privateUpdateOutputChannelCount:(id)arg1 ;
-(void)privateHandleSecondaryAudioHintChange:(id)arg1 ;
-(void)privateUpdatePiPAvailabilityChange:(id)arg1 ;
-(void)privateHandleRoutingContextChange;
-(void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1 ;
-(void)privateHandleServerConnectionCompletion:(ConnectionResult)arg1 ;
-(BOOL)privateSetPropertyValue:(unsigned)arg1 withBool:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)privateSetOptions:(unsigned long long)arg1 forCategory:(id)arg2 error:(id*)arg3 ;
-(BOOL)privateSetRouteSharingPolicy:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)privateGetDataSources:(BOOL)arg1 ;
-(id)privateGetSelectedDataSource:(BOOL)arg1 ;
-(BOOL)privateSetRoutingContextUID:(id)arg1 error:(id*)arg2 ;
-(id)privateConfigureRouteDescription:(id)arg1 ;
-(id)privateRefreshAvailableInputs;
-(NSArray *)availableCategories;
-(BOOL)deactivateAndSetInterruptionPriority:(long long)arg1 error:(id*)arg2 ;
-(unsigned long long)recordPermission;
-(void)requestRecordPermission:(/*^block*/id)arg1 ;
-(BOOL)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setInputGain:(float)arg1 error:(id*)arg2 ;
-(BOOL)setInputDataSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)setOutputDataSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)isDolbyDigitalEncoderAvailable;
-(BOOL)isEarpieceActiveNoiseCancelationEnabled;
-(BOOL)forceSoundCheck;
-(BOOL)setForceSoundCheck:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)allowAllBuiltInDataSources;
-(void)setAllowAllBuiltInDataSources:(BOOL)arg1 ;
-(BOOL)setBypassRingerSwitchPolicy:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setReporterID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isHardwareFormatFixedToMultiChannel;
-(BOOL)fixHardwareFormatToMultiChannel:(BOOL)arg1 error:(id*)arg2 ;
-(float)inputGain;
-(id)inputDataSources;
-(id)inputDataSource;
-(id)outputDataSource;
-(BOOL)isInputGainSettable;
-(BOOL)isOtherAudioPlaying;
-(BOOL)secondaryAudioShouldBeSilencedHint;
-(double)inputSafetyOffset;
-(double)outputSafetyOffset;
-(id)activeSessionDisplayIDs;
-(unsigned long long)IOBufferFrameSize;
-(long long)interruptionPriority;
-(unsigned long long)preferredIOBufferFrameSize;
-(long long)preferredInputNumberOfChannels;
-(long long)preferredOutputNumberOfChannels;
-(long long)maximumInputNumberOfChannels;
-(long long)maximumOutputNumberOfChannels;
-(BOOL)selectIndependentRoutingContext:(id*)arg1 ;
-(BOOL)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInput:(id)arg1 error:(id*)arg2 ;
-(AVAudioSessionPortDescription *)preferredInput;
-(BOOL)setAudioClockDevice:(id)arg1 error:(id*)arg2 ;
-(id)audioClockDevice;
-(BOOL)setDisallowedPorts:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDefaultChatMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)preferDecoupledIO:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setAggregatedIOPreference:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)decoupledIO;
-(BOOL)setPreferredInputSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredInputSampleRate;
-(BOOL)setPreferredOutputSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredOutputSampleRate;
-(BOOL)setSpeakerThermalGain:(float)arg1 error:(id*)arg2 ;
-(BOOL)setHapticThermalGain:(float)arg1 error:(id*)arg2 ;
-(float)speakerThermalGain;
-(float)hapticThermalGain;
-(void)privateUpdateDataSources:(id)arg1 forInput:(BOOL)arg2 ;
-(void)privateUpdateAudioFormat:(id)arg1 ;
-(long long)inputNumberOfChannels;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(double)preferredIOBufferDuration;
-(double)currentHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(long long)currentHardwareOutputNumberOfChannels;
-(double)outputSampleRate;
-(long long)outputNumberOfChannels;
-(NSArray *)availableInputs;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)retainCount;
-(NSString *)category;
-(NSString *)mode;
-(NSArray *)availableModes;
-(double)sampleRate;
-(id)initWithSessionType:(unsigned)arg1 ;
-(BOOL)lastActivationStoppedNowPlayingApp;
-(BOOL)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(AVAudioSessionRouteDescription *)currentRoute;
-(id)routingContextUID;
-(unsigned long long)routeSharingPolicy;
-(BOOL)silenceOutput:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)audioFormats;
-(unsigned)opaqueSessionID;
-(BOOL)isPiPAvailable;
-(unsigned long long)promptStyle;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(BOOL)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)setInterruptionPriority:(long long)arg1 error:(id*)arg2 ;
-(double)preferredSampleRate;
-(double)IOBufferDuration;
-(unsigned long long)sessionType;
-(double)inputSampleRate;
-(long long)audioFormat;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)outputDataSources;
-(id)initAuxiliarySession;
-(BOOL)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)categoryOptions;
-(float)outputVolume;
-(id)initWithSessionID:(unsigned)arg1 ;
-(BOOL)isPrimary;
-(BOOL)isInputAvailable;
-(BOOL)inputIsAvailable;
@end

