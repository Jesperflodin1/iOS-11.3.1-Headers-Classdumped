/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase.h>
#import <libobjc.A.dylib/LARemoteUIHost.h>
#import <libobjc.A.dylib/LAUIMechanism.h>
#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol LARemoteUI;
@class MechanismBase, NSDictionary, NSError;

@interface MechanismUI : MechanismBase <LARemoteUIHost, LAUIMechanism, LAUIDelegate> {

	id<LARemoteUI> _remoteUI;
	MechanismBase* _nonUiMechanism;
	MechanismBase* _backgroundMechanism;
	MechanismBase* _fallbackMechanism;
	MechanismBase* _continueMechanism;
	MechanismBase* _retryMechanism;
	long long _policy;
	NSDictionary* _internalInfo;
	NSDictionary* _policyOptions;
	NSDictionary* _additionalControllerInternalInfo;
	NSDictionary* _eventProcessing;
	NSDictionary* _previousResult;
	BOOL _uiDisappeared;
	BOOL _showingFallbackUiOnDisappear;
	NSError* _fallbackReason;
	BOOL _matchCanceledByPasscodeUi;
	BOOL _alreadyMatchedWaitingForRemoteUi;
	MechanismBase* _preservedPearlMechanism;

}
-(id)initWithNonUiMechanism:(id)arg1 eventProcessing:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 ;
-(void)_showUI:(BOOL)arg1 ;
-(void)_terminateBackgroundMechanismWithResult:(id)arg1 error:(id)arg2 ;
-(void)_connectNonUiMechanism:(id)arg1 withRemoteUi:(id)arg2 ;
-(BOOL)_fallbackButtonWouldBeVisibleInBiometryUI;
-(BOOL)_checkCallerForeground;
-(void)_startBackgroundMechanism;
-(void)_setupMechanismForRemoteViewController:(id)arg1 ;
-(void)_transitionToController:(long long)arg1 internalInfo:(id)arg2 ;
-(id)_nameForRemoteUIController:(long long)arg1 ;
-(void)uiEvent:(long long)arg1 options:(id)arg2 ;
-(void)uiSuccessWithResult:(id)arg1 ;
-(void)internalInfoWithReply:(/*^block*/id)arg1 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)uiFailureWithError:(id)arg1 ;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(void)subMechanismCanRestart:(id)arg1 ;
-(void)fallbackToIdentifier:(long long)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)findMechanismWithEventIdentifier:(long long)arg1 ;
-(id)findMechanismToRetryWithEventIdentifier:(long long)arg1 ;
-(void)companionStateChanged:(id)arg1 newState:(BOOL)arg2 ;
-(void)willFinish;
@end
