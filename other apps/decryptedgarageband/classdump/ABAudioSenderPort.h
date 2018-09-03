//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABPort.h"

#import "ABLocalPort-Protocol.h"
#import "ABLocalPortPrivate-Protocol.h"
#import "ABRequestListenerDelegate-Protocol.h"

@class ABAudiobusController, ABConnectionGraph, ABConnectionGraphNode, ABFloatConverter, DBLocalEndpoint, NSArray, NSMutableSet, NSString, NSThread, NSURL, UIImage;

@interface ABAudioSenderPort : ABPort <ABLocalPortPrivate, ABRequestListenerDelegate, ABLocalPort>
{
    unsigned int _audioComponentVersion;
    struct OpaqueAudioComponentInstance *_audioUnit;
    struct OpaqueAudioComponentInstance *_monitorAudioUnit;
    // Error parsing type: {?="buffer"^v"length"i"tail"i"head"i"fillCount"Ai"atomic"B}, name: _monitorBuffer
    _Bool _renderNotifySet;
    // Error parsing type: {?="buffer"^v"length"i"tail"i"head"i"fillCount"Ai"atomic"B}, name: _audioUnitSendBuffer
    struct AudioBufferList *_floatBufferList;
    struct AudioBufferList *_sendFloatBufferList;
    struct AudioBufferList *_volumePanBufferList;
    struct OpaqueAudioConverter *_loopbackConverter;
    struct AudioBufferList *_loopbackScratchBufferList;
    _Bool _shouldResetLoopbackBuffer;
    float _userGain[2];
    float _monitorGain;
    float _audioUnitGain;
    struct _opaque_pthread_rwlock_t _lock;
    _Bool _holdingKeepAlive;
    _Bool _recentlyDisconnectedFromAudiobus;
    struct AudioComponentDescription _additionalDescriptions[5];
    _Bool _outputMetering;
    float _peakOutputLevels[2];
    ABConnectionGraph *_graphWithoutIntermediatePorts;
    ABConnectionGraphNode *_graphNodeWithoutIntermediatePorts;
    NSMutableSet *_observedPorts;
    _Bool _isInvalid;
    _Bool _interAppAudioConnected;
    _Bool _audiobusConnected;
    _Bool _muted;
    _Bool _connectedToSelf;
    _Bool _sharingAudioUnitWithConnectedPort;
    _Bool _appHasActiveReceiverPort;
    _Bool _appHasActiveSenderOrFilterPort;
    unsigned char _connectedPortAttributes;
    _Bool _monitoring;
    _Bool _loopbackConnected;
    _Bool _appIsMultitrackAudioHost;
    unsigned int _latency;
    UIImage *_icon;
    struct OpaqueAudioComponentInstance *_userAudioUnit;
    DBLocalEndpoint *_endpoint;
    ABAudiobusController *_audiobusController;
    NSString *_audioComponentName;
    double _volume;
    double _pan;
    ABFloatConverter *_floatConverter;
    ABFloatConverter *_sendFloatConverter;
    double _loopbackSampleRate;
    NSArray *_levelMeteringPeers;
    NSThread *_levelMeteringTransmissionThread;
    NSURL *_interAppAudioHostURL;
    struct AudioComponentDescription _audioComponentDescription;
    struct AudioStreamBasicDescription _clientFormat;
}

+ (id)keyPathsForValuesAffectingDestinations;
+ (id)keyPathsForValuesAffectingMuted;
+ (void)initialize;
@property(nonatomic) _Bool appIsMultitrackAudioHost; // @synthesize appIsMultitrackAudioHost=_appIsMultitrackAudioHost;
@property(retain, nonatomic) NSURL *interAppAudioHostURL; // @synthesize interAppAudioHostURL=_interAppAudioHostURL;
@property(retain, nonatomic) NSThread *levelMeteringTransmissionThread; // @synthesize levelMeteringTransmissionThread=_levelMeteringTransmissionThread;
@property(retain, nonatomic) NSArray *levelMeteringPeers; // @synthesize levelMeteringPeers=_levelMeteringPeers;
@property(nonatomic) double loopbackSampleRate; // @synthesize loopbackSampleRate=_loopbackSampleRate;
@property(nonatomic) _Bool loopbackConnected; // @synthesize loopbackConnected=_loopbackConnected;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(retain, nonatomic) ABFloatConverter *sendFloatConverter; // @synthesize sendFloatConverter=_sendFloatConverter;
@property(retain, nonatomic) ABFloatConverter *floatConverter; // @synthesize floatConverter=_floatConverter;
@property(nonatomic) double pan; // @synthesize pan=_pan;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) unsigned char connectedPortAttributes; // @synthesize connectedPortAttributes=_connectedPortAttributes;
@property(nonatomic) _Bool appHasActiveSenderOrFilterPort; // @synthesize appHasActiveSenderOrFilterPort=_appHasActiveSenderOrFilterPort;
@property(nonatomic) _Bool appHasActiveReceiverPort; // @synthesize appHasActiveReceiverPort=_appHasActiveReceiverPort;
@property(nonatomic) _Bool sharingAudioUnitWithConnectedPort; // @synthesize sharingAudioUnitWithConnectedPort=_sharingAudioUnitWithConnectedPort;
@property(nonatomic) _Bool recentlyDisconnectedFromAudiobus; // @synthesize recentlyDisconnectedFromAudiobus=_recentlyDisconnectedFromAudiobus;
@property(retain, nonatomic) NSString *audioComponentName; // @synthesize audioComponentName=_audioComponentName;
@property(nonatomic) __weak ABAudiobusController *audiobusController; // @synthesize audiobusController=_audiobusController;
@property(retain, nonatomic) DBLocalEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) unsigned int latency; // @synthesize latency=_latency;
@property(nonatomic) _Bool connectedToSelf; // @synthesize connectedToSelf=_connectedToSelf;
@property(nonatomic) struct AudioComponentDescription audioComponentDescription; // @synthesize audioComponentDescription=_audioComponentDescription;
@property(nonatomic) struct AudioStreamBasicDescription clientFormat; // @synthesize clientFormat=_clientFormat;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool audiobusConnected; // @synthesize audiobusConnected=_audiobusConnected;
@property(nonatomic) _Bool interAppAudioConnected; // @synthesize interAppAudioConnected=_interAppAudioConnected;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)updateInterAppAudioHostURL;
- (void)getOutputLevels:(double [2])arg1;
- (void)checkKeepAlive;
- (void)updateUserAudioUnitFormat;
- (void)removeRenderNotify;
- (void)startStopUserAudioUnitWhenNeccessary;
- (void)respondToConnectivityChangeWithPriorAudiobusState:(_Bool)arg1 priorInterAppAudioState:(_Bool)arg2;
- (void)updateMuteStatus;
- (void)processGraphNode;
- (void)audioSessionInterruption:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)wasRemovedFromAudiobusController:(id)arg1;
- (void)wasAddedToAudiobusController:(id)arg1;
- (void)IAAConnectionDidChange:(_Bool)arg1;
- (id)didReceiveRequestWithName:(id)arg1 subName:(id)arg2 data:(id)arg3;
@property(readonly, nonatomic) _Bool userProvidedAudioUnit; // @dynamic userProvidedAudioUnit;
@property(nonatomic) _Bool isHidden;
- (void)setIsMutedByAudiobus:(_Bool)arg1;
- (void)removeLevelMeteringPeer:(id)arg1;
- (void)addLevelMeteringPeer:(id)arg1;
@property(nonatomic) _Bool derivedFromLiveAudioSource; // @dynamic derivedFromLiveAudioSource;
@property(readonly, nonatomic) _Bool connected; // @dynamic connected;
@property(nonatomic) struct OpaqueAudioComponentInstance *audioUnit; // @synthesize audioUnit=_userAudioUnit;
@property(readonly, nonatomic) NSArray *destinations; // @dynamic destinations;
- (void)setGraphNode:(id)arg1;
- (void)registerAdditionalAudioComponentDescription:(struct AudioComponentDescription)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 title:(id)arg2 audioComponentDescription:(struct AudioComponentDescription)arg3 audioUnit:(struct OpaqueAudioComponentInstance *)arg4 audiobusOnly:(_Bool)arg5;
- (id)initWithName:(id)arg1 title:(id)arg2 audioComponentDescription:(struct AudioComponentDescription)arg3 audioUnit:(struct OpaqueAudioComponentInstance *)arg4;
- (id)initWithName:(id)arg1 title:(id)arg2 audioComponentDescription:(struct AudioComponentDescription)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIImage *destinationsIcon; // @dynamic destinationsIcon;
@property(readonly, nonatomic) NSString *destinationsTitle; // @dynamic destinationsTitle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *sources;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end
