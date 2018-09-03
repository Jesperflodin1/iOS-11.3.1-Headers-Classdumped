//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ABIAALaunchURLManagerProtocol-Protocol.h"

@class ABPeerButtonTrigger, ABPeerResourceManager, DBPeer, DBPeerMessageExchange, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL, UIImage;

@interface ABPeer : NSObject <ABIAALaunchURLManagerProtocol>
{
    NSURL *_launchURL;
    NSArray *_audioSenderPorts;
    NSArray *_audioFilterPorts;
    NSArray *_audioReceiverPorts;
    NSArray *_MIDISenderPorts;
    NSArray *_MIDIFilterPorts;
    NSArray *_MIDIReceiverPorts;
    _Bool _isConnectedViaInterAppAudio;
    unsigned int _state;
    NSString *_audiobusSDKVersion;
    unsigned long long _numberOfTrialsToFindPeer;
    DBPeerMessageExchange *_pingExchange;
    NSMutableArray *_pingCompletions;
    unsigned int _appIconResourceID;
    UIImage *_icon;
    _Bool _present;
    NSString *_displayName;
    NSArray *_triggersAddedByAudiobus;
    _Bool _pingCancelled;
    _Bool _allowsConnectionsToSelf;
    _Bool _linkAvailable;
    _Bool _linkEnabled;
    _Bool _inForeground;
    _Bool _connected;
    _Bool _hasLaunchProblems;
    _Bool _hasPortErrors;
    _Bool _isHardwareMIDIPeer;
    _Bool _isMIDIHardwareConnected;
    _Bool _showInConnectionPanel;
    _Bool _isVirtualPeer;
    _Bool _isAUXPeer;
    _Bool _isMultitrackAudioHost;
    _Bool _needsKickstart;
    int _terminationState;
    DBPeer *_peer;
    NSString *_name;
    NSString *_uniqueID;
    NSArray *_triggers;
    NSArray *_remoteTriggers;
    NSArray *_nonRemoteTriggers;
    ABPeerButtonTrigger *_playPauseTrigger;
    ABPeerResourceManager *_resourceManager;
    NSMutableDictionary *_userInfo;
    unsigned long long _numberOfFailedLaunches;
    ABPeer *_peerHostingVirtualPeer;
    NSString *_appStoreURL;
}

+ (void)sendPingReplyToPeer:(id)arg1 withTimestamp:(unsigned long long)arg2;
+ (id)localStandInPeerWithName:(id)arg1 launchURL:(id)arg2 displayName:(id)arg3 SDKVersion:(id)arg4;
+ (id)peerWithDBPeer:(id)arg1;
+ (id)keyPathsForValuesAffectingUsingRetransmission;
+ (id)keyPathsForValuesAffectingMinimumRemoteLatency;
+ (id)keyPathsForValuesAffectingInForeground;
+ (id)keyPathsForValuesAffectingPresent;
+ (_Bool)automaticallyNotifiesObserversOfFilterPorts;
+ (_Bool)automaticallyNotifiesObserversOfSenderPorts;
+ (_Bool)automaticallyNotifiesObserversOfReceiverPorts;
+ (_Bool)automaticallyNotifiesObserversOfTriggers;
+ (void)initialize;
@property(nonatomic) int terminationState; // @synthesize terminationState=_terminationState;
@property(nonatomic) _Bool needsKickstart; // @synthesize needsKickstart=_needsKickstart;
@property(retain, nonatomic) NSString *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
@property(nonatomic) _Bool isMultitrackAudioHost; // @synthesize isMultitrackAudioHost=_isMultitrackAudioHost;
@property(nonatomic) _Bool isAUXPeer; // @synthesize isAUXPeer=_isAUXPeer;
@property(nonatomic) __weak ABPeer *peerHostingVirtualPeer; // @synthesize peerHostingVirtualPeer=_peerHostingVirtualPeer;
@property(nonatomic) _Bool isVirtualPeer; // @synthesize isVirtualPeer=_isVirtualPeer;
@property(nonatomic) _Bool showInConnectionPanel; // @synthesize showInConnectionPanel=_showInConnectionPanel;
@property(nonatomic) _Bool isMIDIHardwareConnected; // @synthesize isMIDIHardwareConnected=_isMIDIHardwareConnected;
@property(nonatomic) _Bool isHardwareMIDIPeer; // @synthesize isHardwareMIDIPeer=_isHardwareMIDIPeer;
@property(nonatomic) _Bool hasPortErrors; // @synthesize hasPortErrors=_hasPortErrors;
@property(nonatomic) unsigned long long numberOfFailedLaunches; // @synthesize numberOfFailedLaunches=_numberOfFailedLaunches;
@property(nonatomic) _Bool hasLaunchProblems; // @synthesize hasLaunchProblems=_hasLaunchProblems;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool inForeground; // @synthesize inForeground=_inForeground;
@property(retain, nonatomic) ABPeerResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(nonatomic) _Bool linkEnabled; // @synthesize linkEnabled=_linkEnabled;
@property(nonatomic) _Bool linkAvailable; // @synthesize linkAvailable=_linkAvailable;
@property(nonatomic) _Bool allowsConnectionsToSelf; // @synthesize allowsConnectionsToSelf=_allowsConnectionsToSelf;
@property(retain, nonatomic) ABPeerButtonTrigger *playPauseTrigger; // @synthesize playPauseTrigger=_playPauseTrigger;
@property(retain, nonatomic) NSArray *nonRemoteTriggers; // @synthesize nonRemoteTriggers=_nonRemoteTriggers;
@property(retain, nonatomic) NSArray *remoteTriggers; // @synthesize remoteTriggers=_remoteTriggers;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) DBPeer *peer; // @synthesize peer=_peer;
- (void).cxx_destruct;
- (void)executePingPeerFromEndpoint:(id)arg1;
- (void)cancelPing;
- (void)pingPeer:(CDUnknownBlockType)arg1 fromEndpoint:(id)arg2;
- (_Bool)needsDisableReceivingCoreMIDI;
- (_Bool)needsDisableSendingCoreMIDI;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)sendMessageDictionary:(id)arg1 from:(id)arg2 public:(_Bool)arg3;
- (void)toggleIsFavorite;
- (_Bool)isFavorite;
- (void)setIsFavorite:(_Bool)arg1;
- (void)iaaLaunchURLForPeerDidChange:(id)arg1;
- (void)iaaLaunchURLForPeerWillChange:(id)arg1;
- (void)sendPeerWillTerminateMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestImmediateExitWithMessage:(id)arg1;
- (void)requestExitWithMessage:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)requestExit:(CDUnknownBlockType)arg1;
- (void)announceExitWithMessage:(id)arg1 response:(CDUnknownBlockType)arg2;
- (_Bool)isPartOfMIDIConnectionPipeline;
- (_Bool)isPartOfAudioConnectionPipeline;
@property(readonly, nonatomic) _Bool hasAudiobus2SDK;
@property(retain, nonatomic) NSArray *MIDIReceiverPorts; // @synthesize MIDIReceiverPorts=_MIDIReceiverPorts;
@property(retain, nonatomic) NSArray *MIDIFilterPorts;
@property(retain, nonatomic) NSArray *MIDISenderPorts;
@property(retain, nonatomic) NSArray *audioReceiverPorts;
@property(retain, nonatomic) NSArray *audioFilterPorts;
@property(retain, nonatomic) NSArray *audioSenderPorts; // @synthesize audioSenderPorts=_audioSenderPorts;
- (void)setSenderPorts:(id)arg1;
- (_Bool)isShowInAudiobusRemote;
@property(nonatomic) _Bool needsStateUpdate;
- (void)updatePeerForPorts:(id)arg1;
- (void)parsePropertiesFromDict:(id)arg1;
- (id)propertyDict;
- (void)iconLoaded:(id)arg1;
- (void)loadTriggersFromMetadata:(id)arg1 withKey:(id)arg2 isRemote:(_Bool)arg3 intoArray:(id)arg4;
- (void)updatePortsOfType:(int)arg1 fromMetadata:(id)arg2 withKey:(id)arg3;
- (void)updateValuesFromMetadata:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)copyInterAppAudioLaunchStateToPort:(id)arg1;
- (_Bool)isConnectedViaInterAppAudio;
- (void)updateIsConnectedViaInterAppAudio;
- (void)portErrorStateDidChange:(id)arg1;
- (void)unobserveErrorState:(id)arg1;
- (void)observeErrorState:(id)arg1;
- (void)launchStateDidChange:(id)arg1;
- (void)unobserveLaunchState:(id)arg1;
- (void)observeLaunchState:(id)arg1;
- (void)unobservePorts;
- (void)observePorts;
@property(nonatomic) unsigned int state;
- (void)setTriggersAddedByAudiobus:(id)arg1;
- (id)triggersAddedByAudiobus;
- (id)nonRemoteButtonTriggers;
- (id)remoteButtonTriggers;
- (void)removeTriggersToBeShownInOtherPeersFromArray:(id)arg1;
- (id)buttonTriggers;
- (void)setPresent:(_Bool)arg1;
@property(readonly, nonatomic) _Bool present; // @dynamic present;
@property(readonly, nonatomic) int type; // @dynamic type;
@property(readonly, nonatomic) NSString *deviceName; // @dynamic deviceName;
- (unsigned int)numericUniqueID;
- (void)setAppIconResourceID:(unsigned int)arg1;
- (unsigned int)appIconResourceID;
- (_Bool)usingRetransmission;
- (double)maximumRemoteLatency;
- (double)minimumRemoteLatency;
@property(readonly, nonatomic) int audiobusProtocolVersion; // @dynamic audiobusProtocolVersion;
@property(readonly, nonatomic) long long capabilities; // @dynamic capabilities;
- (void)setAudiobusSDKVersion:(id)arg1;
@property(readonly, nonatomic) NSString *audiobusSDKVersion; // @dynamic audiobusSDKVersion;
@property(readonly, nonatomic) UIImage *icon; // @dynamic icon;
- (void)setIcon:(id)arg1;
@property(readonly, nonatomic) NSURL *iaaLaunchURL;
@property(readonly, nonatomic) NSURL *nonIAALaunchURL;
@property(retain, nonatomic) NSURL *launchURL;
@property(retain, nonatomic) NSString *displayName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)addIAAMIDIReceiverPortsToMIDIReceiverPorts:(id)arg1;
- (_Bool)canReceiveMIDI;
- (id)audiobusOrInterAppAudioMIDIReceiverPorts;
- (id)MIDIPortsIncludingInterAppAudioMIDIReceiverPorts;
- (id)MIDIPorts;
- (id)interAppAudioMIDIReceiverPorts;
- (id)connectedPorts;
- (_Bool)hasSameIAAPortsAsPeer:(id)arg1;
- (id)firstAudioSenderOrFilterPort;
- (id)interAppAudioPorts;
- (id)audioPorts;
- (id)allPorts;
- (void)addPort:(id)arg1;
- (id)firstPortMatchingAudioComponentDescription:(struct AudioComponentDescription)arg1;
- (void)setPorts:(id)arg1 ofType:(int)arg2;
- (id)portsOfType:(int)arg1;
- (id)portWithName:(id)arg1;
- (id)portWithUniqueIdentifier:(unsigned int)arg1;
- (id)portWithNumericIdentifier:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

