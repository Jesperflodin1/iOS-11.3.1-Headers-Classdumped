/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:58:03 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GAXClient/GAXClient-Structs.h>
@class AXIPCClient, AXIPCServer;

@interface GAXClient : NSObject {

	BOOL _enabled;
	BOOL _allowsMotion;
	BOOL _allowsKeyboardTextInput;
	BOOL _providesViewServices;
	unsigned _serverMode;
	AXIPCClient* _backboardClient;
	AXIPCServer* _appServer;

}

@property (nonatomic,retain) AXIPCClient * backboardClient;                        //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXIPCServer * appServer;                              //@synthesize appServer=_appServer - In the implementation block
@property (assign,nonatomic) unsigned serverMode;                                  //@synthesize serverMode=_serverMode - In the implementation block
@property (assign,nonatomic) BOOL allowsMotion;                                    //@synthesize allowsMotion=_allowsMotion - In the implementation block
@property (assign,nonatomic) BOOL allowsKeyboardTextInput;                         //@synthesize allowsKeyboardTextInput=_allowsKeyboardTextInput - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInWorkspace,nonatomic,readonly) BOOL inWorkspace; 
@property (assign,nonatomic) BOOL providesViewServices;                            //@synthesize providesViewServices=_providesViewServices - In the implementation block
+(id)sharedInstance;
-(id)_messageServiceName;
-(void)_initializeBackboardClient;
-(void)setAppServer:(AXIPCServer *)arg1 ;
-(id)_handleGetAffectedViewsForPath:(id)arg1 ;
-(id)_handleHideKeyboard:(id)arg1 ;
-(id)_handleGetRestrictionIdentifiers:(id)arg1 ;
-(id)_handleRestrictionDidChangeState:(id)arg1 ;
-(id)_handlePrepareClientAppForTransitionToWorkspace:(id)arg1 ;
-(void)_handleAppDidBecomeActive:(id)arg1 ;
-(void)_handlePreferenceDidChange:(id)arg1 ;
-(void)_notifyGuidedAccessClientDidLoad;
-(AXIPCClient *)backboardClient;
-(AXIPCServer *)appServer;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(void)_notifyAppDidBecomeActive;
-(unsigned)serverMode;
-(long long)_stateForRestrictionWithIdentifier:(id)arg1 ;
-(BOOL)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 error:(id*)arg5 ;
-(BOOL)providesViewServices;
-(id)_allWindowsIncludingStaticChromeForClassicMode:(BOOL)arg1 includingStatusBarWindow:(BOOL)arg2 ;
-(CGRect)_selectionTargetFrameForView:(id)arg1 ;
-(BOOL)_viewShouldBeIgnored:(id)arg1 ;
-(id)_tableViewCellAncestorForView:(id)arg1 ;
-(BOOL)_viewRequiresPadding:(id)arg1 ;
-(id)_hashForView:(id)arg1 ;
-(id)_ancestorView:(id)arg1 matchesBlock:(/*^block*/id)arg2 ;
-(id)_affectedViewsForPath:(id)arg1 ;
-(void)setServerMode:(unsigned)arg1 ;
-(BOOL)isInWorkspace;
-(void)setAllowsMotion:(BOOL)arg1 ;
-(void)setAllowsKeyboardTextInput:(BOOL)arg1 ;
-(BOOL)allowsKeyboardTextInput;
-(id)_guidedAccessRestrictionDelegate;
-(long long)stateForRestrictionWithIdentifier:(id)arg1 ;
-(void)fetchASAMConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldShowKeyboardsInViewServices;
-(BOOL)allowsMotion;
-(void)asynchronouslyPresentGuidedAccessActiveBanner;
-(BOOL)isViewInIgnoredTouchRegion:(id)arg1 ;
-(void)setProvidesViewServices:(BOOL)arg1 ;
-(void)voiceOverItemChooserDidShow:(unsigned)arg1 ;
-(id)_controlAncestorForView:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPasscode:(id)arg1 ;
-(id)_handleSettingsDidChange:(id)arg1 ;
@end
