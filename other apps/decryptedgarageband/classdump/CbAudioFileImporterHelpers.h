//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CbDocumentsDirectorySurveillantDelegate-Protocol.h"
#import "CbFileImportInfoLoaderDelegate-Protocol.h"

@class CbFileImportInfoLoader, NSArray, NSMutableArray, NSSet, NSString;

@interface CbAudioFileImporterHelpers : NSObject <CbFileImportInfoLoaderDelegate, CbDocumentsDirectorySurveillantDelegate>
{
    NSMutableArray *_clientRefs;
    CbFileImportInfoLoader *_fileImportInfoLoader;
    NSMutableArray *_items;
    NSArray *_paths;
    NSSet *_newPaths;
    long long _currentSupportedFilesCount;
    long long _currentNewSupportedFilesCount;
    long long _cachedSupportedFilesCount;
    long long _cachedNewSupportedFilesCount;
    _Bool _resetNewFilesWhenScanFinished;
    _Bool _firstNewSupportedFileNeedsToShowBadge;
    _Bool _scanOnlyTriggeredForDataButCacheValid;
    long long _currentFileCountToAutoImport;
}

+ (_Bool)hasAudioFilesToAutoImportToTransferFolder;
+ (long long)totaliTunesLibraryItemsCount;
+ (void)copySongFromiTunesLib:(id)arg1 name:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)exportMP3:(id)arg1 toFileAtPath:(id)arg2;
+ (void)resetShouldShowAudioFileImportNewFilesBadge;
+ (_Bool)shouldShowAudioFileImportNewFilesBadge;
+ (id)getFileInfoForRow:(long long)arg1 immediately:(_Bool)arg2 bubbleUpItemInPriorityIfNeccessary:(_Bool)arg3;
+ (long long)currentItemsCount;
+ (long long)currentSupportedItemsCount;
+ (long long)currentNewSupportedItemsCount;
+ (id)sharedInstance;
+ (void)removeAudioFileImporterClient:(id)arg1;
+ (void)registerAudioFileImporterClient:(id)arg1;
+ (id)getFileImportFileListWithAllowedFileExtensions:(id)arg1;
+ (id)getFileInfoForFileAtPath:(id)arg1;
+ (id)allowedFileExtensions;
+ (id)iconImageNameForFileAtPath:(id)arg1 isAppleLoop:(_Bool)arg2;
+ (id)_iconImageNameForFileAtPath:(id)arg1 isAppleLoop:(_Bool)arg2;
- (void).cxx_destruct;
- (void)numberOfImportableAudioFilesInDocumentsFolderChanged:(long long)arg1;
- (long long)currentFileCountToAutoImport;
- (void)_setShouldShowBadge:(_Bool)arg1;
- (id)getFileInfoForRow:(long long)arg1 immediately:(_Bool)arg2 bubbleUpItemInPriorityIfNeccessary:(_Bool)arg3;
- (long long)currentItemsCount;
- (long long)currentNewSupportedItemsCount;
- (long long)currentSupportedItemsCount;
- (void)_handleFileSharingAreaChanged:(id)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)rescanWithDelayIfNeccessaryWithCustomDelay:(float)arg1;
- (void)dealloc;
- (id)init;
- (void)rescanFilesIfNeccessary;
- (_Bool)_checkForChangesInSharingArea:(id *)arg1 newlyAddedFilesSet:(id *)arg2 forceCleanUpdate:(_Bool)arg3;
- (id)audioFileImportCacheFilePath;
- (void)stopScanning;
- (void)_releaseData;
- (void)_releaseScanner:(_Bool)arg1;
- (void)fileImportInfoLoaderDidFinish:(id)arg1;
- (void)fileImportInfoLoader:(id)arg1 didLoadFileInfo:(id)arg2;
- (void)_iterateClientsWithBlock:(CDUnknownBlockType)arg1;
- (void)_autoReleaseScannerAndDataIfNecessary:(_Bool)arg1;
- (id)fileImportInfoLoader:(id)arg1 getFileInfoForFileAtPath:(id)arg2;
- (void)removeClient:(id)arg1;
- (void)registerClient:(id)arg1;
- (long long)_indexOfClient:(id)arg1;
- (_Bool)_hasItemDataClients;
- (_Bool)_canShowFileBadge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

