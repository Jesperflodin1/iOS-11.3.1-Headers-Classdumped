//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAInAppPurchaseController.h"

@class NSDictionary, NSString;

@interface CbInAppPurchaseController : MAInAppPurchaseController
{
    NSDictionary *_availableIAPProducts;
    NSString *_asaLogFilePath;
    _Bool _isSpecialContentRestore;
}

+ (void)appStartInitialization;
- (void).cxx_destruct;
- (void)debugImportSpecialContentBundle;
- (id)specialContentBundleName;
- (void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)alertFailedDownloadForTransaction:(id)arg1;
- (void)alertFailedDownloadAfterPurchase;
- (void)alertFailedDownloadAfterRestore;
- (_Bool)enoughDiskSpaceForIAPDownload:(id)arg1;
- (void)getContent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 forceRestore:(_Bool)arg3;
- (void)triggerStoreActionForProduct:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 forceRestore:(_Bool)arg3;
- (void)triggerSpecialContentRestoreProcessWithInstrumentBrowserController:(id)arg1 openSongWithLoopsDelegate:(id)arg2;
- (void)logAppStoreAction:(unsigned long long)arg1 anyObject:(id)arg2;
- (id)pathForASALogFile;
- (id)asaStringForID:(unsigned long long)arg1;
- (void)updateContentVersionForIdentifier:(id)arg1 toVersion:(id)arg2;
- (_Bool)deleteIAPContentForIdentifier:(id)arg1;
- (void)debugClearIAPContentFolder;
- (void)resetLocalContentVersionEntries;
- (_Bool)moveNewContentIntoPlaceFromOrigin:(id)arg1;
- (id)iapContentLocation;
- (_Bool)isProductContentInPlaceForProductID:(id)arg1;
- (id)restoreDidFinishWithError:(id)arg1;
- (void)receiptRefreshFinished;
- (void)backupAppStoreReceipt;
- (_Bool)isWifiAvailable;
- (_Bool)isInternetReacheable;
- (int)currentReachabilityStatus;
- (_Bool)processingSpecialContentRestore;
- (_Bool)downloadingSpecialContent;
- (_Bool)processingSpecialContent;
- (id)specialContentProductID;
- (id)dummyContentProductID;
- (id)availableIAPProducts;
- (_Bool)validateProduct:(id)arg1;
- (_Bool)contentProductDownloadFolderPresent:(id)arg1;
- (_Bool)contentProductDownloaded:(id)arg1;
- (_Bool)contentProductBought:(id)arg1;
- (id)init;

@end
