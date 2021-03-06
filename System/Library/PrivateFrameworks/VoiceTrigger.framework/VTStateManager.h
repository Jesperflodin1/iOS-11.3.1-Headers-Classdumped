/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTGestureMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VTPhraseSpotter, VTPolicy, VTXPCServiceServer, VTGestureMonitor, NSString;

@interface VTStateManager : NSObject <VTGestureMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VTPhraseSpotter* _phraseSpotter;
	/*^block*/id _callbackWithMessageAndTimestamp;
	VTPolicy* _enablePolicy;
	VTXPCServiceServer* _xpcServer;
	BOOL _voiceTriggerIsEnabled;
	BOOL _rtModelDownloaded;
	VTGestureMonitor* _gestureMonitor;
	unsigned long long _wakeGestureHostTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notifyVoiceTrigger;
+(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
+(void)clearVoiceTriggerCount;
+(void)requestAudioCapture:(double)arg1 ;
+(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
+(long long)getVoiceTriggerCount;
+(id)_serviceClient;
+(void)requestPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
+(void)notifyVoiceTriggeredSiriSessionCancelled;
+(void)requestForcedSecondChance;
+(void)requestForcedTriggerEvent;
+(BOOL)isLastTriggerForced;
+(BOOL)isLastTriggerSecondChanceTriggered;
+(id)firstChanceAudioBuffer;
+(id)firstChanceVTEventInfo;
+(id)firstChanceTriggeredDate;
+(void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2 ;
+(id)requestCurrentVoiceTriggerAssetDictionary;
-(void)gestureMonitorDidReceiveWakeGesture:(id)arg1 ;
-(void)gestureMonitorDidReceiveSleepGesture:(id)arg1 ;
-(id)initWithProperty:(id)arg1 callbackWithMessageAndTimestamp:(/*^block*/id)arg2 ;
-(id)initWithProperty:(id)arg1 phraseSpotter:(id)arg2 enablePolicy:(id)arg3 callbackWithMessageAndTimestamp:(/*^block*/id)arg4 ;
-(void)_notifyStateTransitionToState:(long long)arg1 withStartTimestamp:(unsigned long long)arg2 ;
-(void)_initializeXPCService;
-(void)_stateTransitionDidOccur:(BOOL)arg1 ;
-(void)_powerlog:(id)arg1 ;
-(id)initWithProperty:(id)arg1 callbackWithMessage:(/*^block*/id)arg2 ;
-(id)getPhraseSpotter;
-(id)getModel;
@end

