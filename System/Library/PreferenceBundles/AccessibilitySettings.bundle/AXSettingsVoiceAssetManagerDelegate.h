/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSettingsVoiceAssetManagerDelegate <NSObject>
@required
-(void)assetManagerError:(id)arg1 voiceId:(id)arg2;
-(void)assetManagerFinishedDownloadingAsset:(id)arg1;
-(void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 progress:(float)arg2 storageSize:(long long)arg3 requiredDiskSpace:(BOOL)arg4 versionId:(id)arg5;
-(void)assetManagerUpdateToDownloadAvailabilityChanged;

@end
