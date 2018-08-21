/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>
#import <AccessibilitySettings/AXVoiceAssetDownloadInformationDelegate.h>
#import <AccessibilitySettings/AXSettingsVoiceAssetManagerDelegate.h>

@class AXDispatchTimer, NSString;

@interface AXSettingsVoiceDownloadBaseController : AccessibilityBaseListController <AVSpeechSynthesizerDelegate, AXVoiceAssetDownloadInformationDelegate, AXSettingsVoiceAssetManagerDelegate> {

	double _latestProgress;
	AXDispatchTimer* _requestProgressTimer;
	/*^block*/id _setDialectPreferencesCallback;
	/*^block*/id _getDialectPreferencesCallback;
	/*^block*/id _getVoiceAllowedCallback;

}

@property (nonatomic,copy) id setDialectPreferencesCallback;              //@synthesize setDialectPreferencesCallback=_setDialectPreferencesCallback - In the implementation block
@property (nonatomic,copy) id getDialectPreferencesCallback;              //@synthesize getDialectPreferencesCallback=_getDialectPreferencesCallback - In the implementation block
@property (nonatomic,copy) id getVoiceAllowedCallback;                    //@synthesize getVoiceAllowedCallback=_getVoiceAllowedCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowedToDownload;
-(BOOL)voiceAllowedToDownload:(id)arg1 ;
-(void)stopDownload:(id)arg1 ;
-(void)_voiceServicesAssetStateChanged;
-(id)getVoiceAllowedCallback;
-(void)setGetVoiceAllowedCallback:(id)arg1 ;
-(void)setSetDialectPreferencesCallback:(id)arg1 ;
-(void)setGetDialectPreferencesCallback:(id)arg1 ;
-(void)manageEditButton;
-(id)getDialectPreferencesCallback;
-(id)setDialectPreferencesCallback;
-(void)setVoiceIdentifierIsInUse:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)startDownload:(id)arg1 ;
-(void)setSelectedSpecifier:(id)arg1 ;
-(void)assetManagerError:(id)arg1 voiceId:(id)arg2 ;
-(void)assetManagerFinishedDownloadingAsset:(id)arg1 ;
-(void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 progress:(float)arg2 storageSize:(long long)arg3 requiredDiskSpace:(BOOL)arg4 versionId:(id)arg5 ;
-(void)playSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetManagerUpdateToDownloadAvailabilityChanged;
@end

