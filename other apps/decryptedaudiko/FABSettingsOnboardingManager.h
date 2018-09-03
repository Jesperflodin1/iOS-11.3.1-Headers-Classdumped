//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FABDownloadAndSaveSettingsOperationDelegate-Protocol.h"
#import "FABOnboardingOperationDelegate-Protocol.h"

@class FABApplicationIdentiferModel, FABNetworkClient, FABOnboardingOperation, FABSettings, NSDictionary, NSFileManager, NSString;

@interface FABSettingsOnboardingManager : NSObject <FABDownloadAndSaveSettingsOperationDelegate, FABOnboardingOperationDelegate>
{
    _Bool _hasAttemptedAppConfigure;
    FABApplicationIdentiferModel *_appIdentifierModel;
    FABSettings *_settingsModel;
    FABOnboardingOperation *_onboardingOperation;
    NSFileManager *_fileManager;
    NSDictionary *_configuration;
    NSDictionary *_defaultConfiguration;
    NSString *_APIKey;
    NSDictionary *_kitVersionsByKitBundleIdentifier;
    FABNetworkClient *_networkClient;
}

+ (id)settingsDirectoryPath;
@property(readonly, nonatomic) FABNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(copy, nonatomic) NSDictionary *kitVersionsByKitBundleIdentifier; // @synthesize kitVersionsByKitBundleIdentifier=_kitVersionsByKitBundleIdentifier;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(retain, nonatomic) NSDictionary *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool hasAttemptedAppConfigure; // @synthesize hasAttemptedAppConfigure=_hasAttemptedAppConfigure;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) FABOnboardingOperation *onboardingOperation; // @synthesize onboardingOperation=_onboardingOperation;
@property(retain, nonatomic) FABSettings *settingsModel; // @synthesize settingsModel=_settingsModel;
@property(retain, nonatomic) FABApplicationIdentiferModel *appIdentifierModel; // @synthesize appIdentifierModel=_appIdentifierModel;
- (void).cxx_destruct;
- (void)postSettingsDownloadCompletedNotification;
- (id)settingsPath;
- (id)settingsURL;
- (void)operation:(id)arg1 didDownloadAndSaveSettingsWithError:(id)arg2;
- (void)onboardingOperation:(id)arg1 didCompleteAppUpdateWithError:(id)arg2;
- (void)onboardingOperation:(id)arg1 didCompleteAppCreationWithError:(id)arg2;
- (id)appIconHash;
- (id)valueForConfigurationKey:(id)arg1;
- (void)finishNetworkingSession;
- (id)advertisingToken;
- (void)beginOnboarding:(_Bool)arg1 endpointString:(id)arg2;
- (void)beginSettingsDownload;
- (void)beginSettingsAndOnboardingOperationsWithAPIKey:(id)arg1 kitVersionsByKitBundleIdentifier:(id)arg2;
- (id)initWithApplicationIdentifierModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

