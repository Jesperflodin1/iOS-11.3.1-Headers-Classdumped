//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CbAppController, NSString;

@protocol CbAppControllerDelegate <NSObject>
- (NSString *)appControllerAppName:(CbAppController *)arg1;
- (_Bool)appControllerIsAnySongUIOpen:(CbAppController *)arg1;
- (void)appControllerApplicationWillResignActive:(CbAppController *)arg1;
- (void)appControllerApplicationDidBecomeActive:(CbAppController *)arg1 wasSuspended:(_Bool)arg2;
- (void)appControllerApplicationWillTerminate:(CbAppController *)arg1;
- (void)appControllerApplicationWillBeSuspended:(CbAppController *)arg1;
- (void)appControllerDidStartApplication:(CbAppController *)arg1;
- (void)appControllerDidUnregisterGlobalHandlers:(CbAppController *)arg1;
- (void)appControllerDidRegisterGlobalHandlers:(CbAppController *)arg1 isAppLaunch:(_Bool)arg2;
@end

