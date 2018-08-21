//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBProcessManagerObserver.h"
#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "FBSystemServiceDelegate.h"

@class NSMutableSet, NSSet, NSString, UIApplicationSceneClientSettingsDiffInspector;

@interface CBAppManager : NSObject <FBSystemServiceDelegate, FBProcessManagerObserver, FBSceneManagerDelegate, FBSceneManagerObserver>
{
    NSMutableSet *_openApps;
    NSSet *_whitelist;
    NSSet *_whitelistPrefixes;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIApplicationSceneClientSettingsDiffInspector *appClientSettingsDiffInspector; // @synthesize appClientSettingsDiffInspector=_appClientSettingsDiffInspector;
@property(readonly, nonatomic) NSSet *whitelistPrefixes; // @synthesize whitelistPrefixes=_whitelistPrefixes;
@property(readonly, nonatomic) NSSet *whitelist; // @synthesize whitelist=_whitelist;
@property(retain, nonatomic) NSMutableSet *openApps; // @synthesize openApps=_openApps;
- (void).cxx_destruct;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;
- (void)systemService:(id)arg1 dataReset:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg2;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)_appClientSettingsDiffInspector;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)_updateLevelForScene:(id)arg1 transitionContext:(id)arg2;
- (double)_effectiveKeyboardSceneLevelForClientSettings:(id)arg1;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)_terminateApps:(id)arg1 reason:(long long)arg2 reportCrash:(_Bool)arg3 description:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateAppWithBundleID:(id)arg1 reason:(long long)arg2 reportCrash:(_Bool)arg3 description:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)launchAppWithBundleID:(id)arg1 suspended:(_Bool)arg2 native:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
