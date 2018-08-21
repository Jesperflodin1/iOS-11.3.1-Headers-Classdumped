/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemAggregatedViewController.h>
#import <libobjc.A.dylib/QLDownloadingItemViewControllerDelegate.h>
#import <libobjc.A.dylib/QLItemViewControllerPresentingDelegate.h>

@class QLItem, QLItemViewController, QLErrorItemViewController, QLLoadingItemViewController, QLDownloadingItemViewController, NSString;

@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate> {

	QLItem* _previewItem;
	BOOL _shouldDeferAppearanceUpdates;
	BOOL _isPeekingSession;
	BOOL _failedToShowPreview;
	BOOL _isReadyForDisplay;
	/*^block*/id _readyBlock;
	QLItemViewController* _previewProvider;
	QLErrorItemViewController* _errorViewController;
	QLLoadingItemViewController* _loadingViewController;
	QLDownloadingItemViewController* _downloadingController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) QLItemViewController * previewProvider;                               //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,retain) QLErrorItemViewController * errorViewController;                      //@synthesize errorViewController=_errorViewController - In the implementation block
@property (nonatomic,retain) QLLoadingItemViewController * loadingViewController;                  //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (nonatomic,retain) QLDownloadingItemViewController * downloadingController;              //@synthesize downloadingController=_downloadingController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) QLItemPresenterViewController * itemPresenterViewController; 
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPreviewProvider:(QLItemViewController *)arg1 ;
-(QLItemViewController *)previewProvider;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(QLErrorItemViewController *)errorViewController;
-(void)setErrorViewController:(QLErrorItemViewController *)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(QLLoadingItemViewController *)loadingViewController;
-(void)showPreviewViewController:(id)arg1 ;
-(QLDownloadingItemViewController *)downloadingController;
-(void)_showLoadingViewControllerDeferred;
-(void)_startLoadingPreviewWithContents:(id)arg1 ;
-(void)_performReadyBlockIfNedded;
-(id)previewItem;
-(BOOL)loadingFailed;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelAllDeferredApperanceUpdates;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)showErrorViewController;
-(void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2 ;
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)isPresentingPreviewItemViewController:(id)arg1 ;
-(QLItemPresenterViewController *)itemPresenterViewController;
-(void)isReadyForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLoadingViewController:(QLLoadingItemViewController *)arg1 ;
-(void)setDownloadingController:(QLDownloadingItemViewController *)arg1 ;
@end

