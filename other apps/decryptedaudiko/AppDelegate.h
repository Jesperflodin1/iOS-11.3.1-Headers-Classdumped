//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "TAGContainerOpenerNotifier-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class AUBaseTabBarController, NSString, NSURL, TAGContainer, UIApplicationShortcutItem, UIWindow;

@interface AppDelegate : UIResponder <TAGContainerOpenerNotifier, UIApplicationDelegate>
{
    UIWindow *_window;
    UIApplicationShortcutItem *_launchedShortcutItem;
    TAGContainer *_container;
    NSURL *_urlToProcess;
}

@property(retain, nonatomic) NSURL *urlToProcess; // @synthesize urlToProcess=_urlToProcess;
@property(retain, nonatomic) TAGContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) UIApplicationShortcutItem *launchedShortcutItem; // @synthesize launchedShortcutItem=_launchedShortcutItem;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)checkNotification:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)grabConfigurationFromTAGContainer;
- (void)containerAvailable:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)processURLFromApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
@property(readonly, nonatomic) AUBaseTabBarController *tabBarController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

