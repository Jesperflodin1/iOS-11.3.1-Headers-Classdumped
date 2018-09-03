//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ECSingleton.h"

@class NSMutableDictionary, NSString;

@interface DfPreferences : ECSingleton
{
    NSMutableDictionary *m_queuedMentorDownloadsCache;
}

+ (id)appDisplayName;
+ (id)appName;
+ (id)sharedPreferences;
+ (id)singleton;
+ (void)setSingleton:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)useAutomaticSectionLengthInSongCreation;
- (_Bool)dontShowHidingTrackLocksAlert;
- (void)setDontShowHidingTrackLocksAlert:(_Bool)arg1;
- (_Bool)shouldShowFlattenTakesOnJoinAlert;
- (void)setShouldShowFlattenTakesOnJoinAlert:(_Bool)arg1;
- (_Bool)shouldShowDeleteActualTakeAlert;
- (void)setShouldShowDeleteActualTakeAlert:(_Bool)arg1;
- (_Bool)shouldShowDeleteUnwantedTakesAlert;
- (void)setShouldShowDeleteUnwantedTakesAlert:(_Bool)arg1;
- (_Bool)showFlexModeMenu;
- (_Bool)showTransients;
- (_Bool)quantizeAudioParamIsRange;
- (void)setGridHighLatencyMode:(_Bool)arg1;
- (_Bool)gridHighLatencyMode;
@property(readonly, nonatomic) _Bool openGBSongs;
- (_Bool)debugMasterHSRReverb;
- (_Bool)debugMasterHSREcho;
- (_Bool)debugMasterEffectsBypass;
- (_Bool)debugSpeakerEnhancer;
- (void)setDefaultDragLoopToWrongInstrumentBehavior:(int)arg1;
- (int)defaultDragLoopToWrongInstrumentBehavior;
- (void)setMixSIOnCycleRecording:(_Bool)arg1;
- (_Bool)mixSIOnCycleRecording;
- (void)setImportAppleLoops:(_Bool)arg1;
- (_Bool)forceImportAppleLoops;
- (void)setLogPerformanceValues:(_Bool)arg1;
- (_Bool)logPerformanceValues;
- (void)setDisplayBusConfig:(_Bool)arg1;
- (_Bool)displayBusConfig;
- (void)setDisplayVoicesPerformanceValues:(_Bool)arg1;
- (_Bool)displayVoicesPerformanceValues;
- (void)setDisplayRAMPerformanceValues:(_Bool)arg1;
- (_Bool)displayRAMPerformanceValues;
- (void)setDisplayDiskPerformanceValues:(_Bool)arg1;
- (_Bool)displayDiskPerformanceValues;
- (void)setDisplayCPUPerformanceValues:(_Bool)arg1;
- (_Bool)displayCPUPerformanceValues;
- (_Bool)displayPerformanceValues;
- (int)numberOfInstrumentTracks;
- (int)numberOfAudioTracks;
- (void)setShowAutomationParameterRemoveAlert:(_Bool)arg1;
- (_Bool)showAutomationParameterRemoveAlert;
- (void)setNormalizeBounce:(_Bool)arg1;
- (_Bool)normalizeBounce;
- (void)setUse24BitExport:(_Bool)arg1;
- (_Bool)use24BitExport;
- (void)setUse24BitRecording:(_Bool)arg1;
- (_Bool)use24BitRecording;
- (void)setAudiobusEnabled:(_Bool)arg1;
- (_Bool)isAudiobusEnabled;
- (_Bool)useCrosstalkCompensation;
- (void)setOneBarCountInEnabled:(_Bool)arg1;
- (_Bool)isOneBarCountInEnabled;
- (void)setShowRenderOnSaveAlert:(_Bool)arg1;
- (_Bool)showRenderOnSaveAlert;
- (void)setShowRTCycleAlert:(_Bool)arg1;
- (_Bool)showRTCycleAlert;
- (void)setDiscardChangesForInstrAndPresets:(_Bool)arg1;
- (_Bool)isDiscardChangesForInstrAndPresets;
- (_Bool)isLoopSearchKeyLimited;
- (void)setLoopSearchKeyLimited:(_Bool)arg1;
- (_Bool)indexToUserDirectoryEnabled;
- (void)setIndexToUserDirectoryEnabled:(_Bool)arg1;
- (float)tuning;
- (void)setTuning:(float)arg1;
- (void)setAlbumName:(id)arg1;
- (id)albumName;
- (void)setComposerName:(id)arg1;
- (id)composerName;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (void)setAudioFormat:(int)arg1;
- (int)audioFormat;
- (_Bool)useSafetyBuffer;
- (int)audioLatency;
- (id)factoryDemoSongsFolder;
- (id)applicationTemporaryPath;
- (id)localizationBundlePath;
- (id)userLoopIndexFolder;
- (void)setUserLoopIndexFolder:(id)arg1;
- (id)oldFactoryLoopIndexFolder;
- (id)factoryLoopIndexFolder;
- (void)setFactoryLoopIndexFolder:(id)arg1;
- (id)userLoopLibrarySingleFileFolder;
- (id)oldFactoryLoopLibrarySingleFileFolder;
- (id)factoryLoopLibrarySingleFileFolder;
- (id)userLoopLibraryFolder;
- (id)oldFactoryLoopLibraryFolder;
- (id)sharedUserLoopLibraryFolder;
- (id)appleFactoryLoopLibraryFolder;
- (id)interSongClipboardFolder;
- (id)defaultArrangeScreenshotPath;
- (id)factoryGridsFolder;
- (id)factoryDrumsGeneratorLib;
- (id)factoryLoopLibraryFolder;
- (void)setFactoryLoopLibraryFolder:(id)arg1;
- (id)factoryLibraryFolder;
- (id)factorySamplerFilesFolder;
- (id)factorySamplerInstrumentsFolder;
- (id)factorySamplerFolder;
- (id)defaultMasterLiveRemixToolFullPath;
- (id)defaultMasterChaStripFullPath;
- (id)defaultSoftwareInstrumentFullPath;
- (id)defaultRealInstrumentFullPath;
- (id)userMasterTrackSettingsFolder;
- (id)userSamplerFilesFolder;
- (id)userSamplerInstrumentsFolder;
- (id)userSamplerFolder;
- (id)userSoftTrackSettingsFolder;
- (id)userGuitarTrackSettingsCategoryFolder;
- (id)userGuitarTrackSettingsFolder;
- (id)userRealTrackSettingsFolder;
- (id)userTrackSettingsFolder;
- (id)factoryMasterTrackSettingsFolder;
- (id)factorySoftTrackSettingsFolder;
- (id)factoryGuitarTrackSettingsFolder;
- (id)factoryRealTrackSettingsFolder;
- (id)factoryTrackSettingsFolder;
- (id)userPlugInFolder;
- (id)factoryPlugInFolder;
- (id)checkLocalizedFolder:(id)arg1;
- (id)allGridsFolders;
- (id)allLoopLibraryFolders;
- (id)allContentFoldersForPathComponent:(id)arg1 libBundlesOnly:(_Bool)arg2 includeOldIAP:(_Bool)arg3;
- (id)allContentFoldersForPathComponent:(id)arg1 libBundlesOnly:(_Bool)arg2;
- (id)allContentFoldersForPathComponent:(id)arg1;
- (id)allContentFolders;
- (id)pathForAdditionalContentBundlePlistWithIdentifier:(id)arg1;
- (id)pathForAdditionalContentBundleIdentifier:(id)arg1;
- (id)additionalContentRootFolder;
- (id)additionalContentDownloadContentPListName;
- (id)additionalContentDownloadContentBaseURL;
- (id)iapContentBundleIdentifierForProductID:(id)arg1;
- (void)setFactoryInstrLibFolder:(id)arg1;
- (id)factoryInstrLibFolder;
- (id)userInstrLibFolder;
- (void)setUseColumnViewForFxLoopBrowser:(_Bool)arg1;
- (_Bool)useColumnViewForFxLoopBrowser;
- (void)setCreateMediaPreviewOnSave:(_Bool)arg1;
- (_Bool)createMediaPreviewOnSave;
- (void)setKeyboardSensitivity:(int)arg1;
- (int)keyboardSensitivity;
- (_Bool)isARLCEnabledByDefault;
- (long long)maxAllowedAlchemyTracks;
- (long long)maxAllowedDrummerTracks;
- (long long)maxAllowedTracks;
- (int)numVoicesIntValue;
@property(readonly, nonatomic) NSString *tempDirectory;

@end
