/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, ProviderConfiguration;

@interface RemoteConfigurationController : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDictionary* _currentConfiguration;
	NSObject*<OS_dispatch_source> _updateTimer;
	BOOL _googleConfigurationDidChange;
	BOOL _tencentConfigurationDidChange;
	ProviderConfiguration* _googleProviderConfiguration;
	ProviderConfiguration* _tencentProviderConfiguration;

}

@property (getter=isSafeBrowsingOff,nonatomic,readonly) BOOL safeBrowsingOff; 
@property (nonatomic,readonly) ProviderConfiguration * googleProviderConfiguration;               //@synthesize googleProviderConfiguration=_googleProviderConfiguration - In the implementation block
@property (nonatomic,readonly) ProviderConfiguration * tencentProviderConfiguration;              //@synthesize tencentProviderConfiguration=_tencentProviderConfiguration - In the implementation block
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(id)_lastConfigurationUpdateAttemptDate;
-(BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1 ;
-(void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
-(ProviderConfiguration *)googleProviderConfiguration;
-(ProviderConfiguration *)tencentProviderConfiguration;
-(void)_loadConfigurationFromDiskIfNecessary;
-(void)_updateConfigurationIfNecessary;
-(void)_initializeProviderConfigurationsWithConfiguration:(id)arg1 ;
-(void)_scheduleConfigurationUpdateDaily;
-(void)_resetProviderConfigurationsDidChange;
-(void)_initializeToDefaultProviderConfigurations;
-(id)_providerToTurnOffFromProviderDictionary:(id)arg1 ;
-(void)_simplifyProviderConfigurations;
-(id)_urlOfDownloadedConfiguration;
-(void)_writeConfigurationToDisk:(id)arg1 ;
-(void)_notifyProviderConfigurationsDidChangeIfNecessary;
-(void)_didReceiveConfigurationData:(id)arg1 ;
-(void)_downloadConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setCurrentConfiguration:(id)arg1 ;
-(BOOL)isSafeBrowsingOff;
-(BOOL)forceLoadConfigurationFromDisk;
-(BOOL)forceUpdateConfigurationFromServer;
@end

