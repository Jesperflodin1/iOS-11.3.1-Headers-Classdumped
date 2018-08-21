/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismPlugins/HIDE_MechPearl.bundle/HIDE_MechPearl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismACM.h>
#import <HIDE_MechPearl/BKMatchPearlOperationDelegate.h>
#import <libobjc.A.dylib/LARemoteUI.h>

@protocol LARemoteUI;
@class BKDevicePearl, BKMatchPearlOperation, BKPresenceDetectOperation, NSNumber, NSMutableArray, CachedMechanismEvent, NSDate, NSError, NSDictionary, NSString;

@interface MechanismPearl : MechanismACM <BKMatchPearlOperationDelegate, LARemoteUI> {

	BKDevicePearl* _pearlDevice;
	BKMatchPearlOperation* _matchOperation;
	BKPresenceDetectOperation* _detectOperation;
	unsigned long long _standardUifailures;
	unsigned long long _failures;
	NSNumber* _failureLimit;
	NSNumber* _faceDetectTimeout;
	unsigned long long _faceOutCounter;
	NSNumber* _userId;
	BOOL _expectingEndOfMatching;
	BOOL _expectingEndOfDetection;
	BOOL _lastCounterCheckInNoMatch;
	BOOL _facePresent;
	id<LARemoteUI> _remoteUiDelegate;
	long long _operationState;
	NSMutableArray* _cachedUiEvents;
	CachedMechanismEvent* _resetUiEvent;
	NSDate* _startedMatching;
	int _uiDelayInMs;
	NSError* _matchFailure;
	NSDictionary* _matchResult;
	BOOL _hasFallback;
	BOOL _hasUI;
	long long _mode;

}

@property (nonatomic,retain) NSDictionary * matchResult;                          //@synthesize matchResult=_matchResult - In the implementation block
@property (assign,nonatomic,__weak) id<LARemoteUI> remoteUiDelegate; 
@property (nonatomic,readonly) long long mode;                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL hasFallback;                                    //@synthesize hasFallback=_hasFallback - In the implementation block
@property (assign,nonatomic) BOOL hasUI;                                          //@synthesize hasUI=_hasUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startBiometry;
-(id)initWithACMContextRecord:(id)arg1 mode:(long long)arg2 userId:(id)arg3 ;
-(void)_matchOperation:(id)arg1 matchedWithResult:(id)arg2 ;
-(void)_scheduleMatchExpirationWithResult:(id)arg1 ;
-(BOOL)_checkFailureCounter:(BOOL)arg1 ;
-(void)_operation:(id)arg1 finishedWithReason:(long long)arg2 ;
-(void)_operation:(id)arg1 stateChanged:(long long)arg2 ;
-(void)_generateArtificialFaceOutIfNeeded;
-(void)_stopBiometry;
-(void)_operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)_setFaceDetectTimeout;
-(void)_matchOperation:(id)arg1 failedWithReason:(long long)arg2 ;
-(void)_startFaceDetectPhase;
-(void)_startMatching;
-(void)_finishFaceDetectPhase;
-(void)setRemoteUiDelegate:(id<LARemoteUI>)arg1 ;
-(void)_expireMatchThatStartedAt:(id)arg1 ;
-(void)setHasFallback:(BOOL)arg1 ;
-(BOOL)hasUI;
-(BOOL)hasFallback;
-(void)sendCachedMechanismEvents;
-(id<LARemoteUI>)remoteUiDelegate;
-(void)setHasUI:(BOOL)arg1 ;
-(NSDictionary *)matchResult;
-(void)setMatchResult:(NSDictionary *)arg1 ;
-(long long)mode;
-(void)operation:(id)arg1 finishedWithReason:(long long)arg2 ;
-(void)operation:(id)arg1 stateChanged:(long long)arg2 ;
-(void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)mechanismEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)matchOperation:(id)arg1 matchedWithResult:(id)arg2 ;
-(void)matchOperation:(id)arg1 failedWithReason:(long long)arg2 ;
-(void)_cancelOperation:(id)arg1 ;
-(id)tccService;
-(id)tccError:(BOOL)arg1 ;
-(void)succeedAuthenticationWithResult:(id)arg1 ;
-(BOOL)isAvailableForPurpose:(long long)arg1 error:(id*)arg2 ;
-(id)initWithParams:(id)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)backgroundMechanismForEventProcessing:(id)arg1 ;
-(id)additionalControllerInternalInfoForPolicy:(long long)arg1 ;
-(void)restartWithEventIdentifier:(long long)arg1 lastAttempt:(BOOL)arg2 ;
-(void)companionStateChanged:(id)arg1 newState:(BOOL)arg2 ;
-(void)willFinish;
@end

