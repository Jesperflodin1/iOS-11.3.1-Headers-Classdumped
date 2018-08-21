/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SFReaderAppearanceViewControllerDelegate.h>
#import <libobjc.A.dylib/SFReaderEnabledWebViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFBarManagerDelegate.h>
#import <libobjc.A.dylib/_SFBrowserKeyCommandMethods.h>
#import <libobjc.A.dylib/_SFDownloadControllerDelegate.h>
#import <libobjc.A.dylib/_SFDynamicBarAnimatorDelegate.h>
#import <libobjc.A.dylib/_SFFindOnPageViewDelegate.h>
#import <libobjc.A.dylib/_SFBrowserToolbarDataSource.h>
#import <libobjc.A.dylib/_SFMailContentProviderDataSource.h>
#import <libobjc.A.dylib/_SFNavigationBarDelegate.h>
#import <libobjc.A.dylib/_SFPageLoadErrorControllerDelegate.h>
#import <libobjc.A.dylib/_SFPrintControllerDelegate.h>
#import <libobjc.A.dylib/_SFSafeBrowsingControllerDelegate.h>
#import <libobjc.A.dylib/_SFSingleBookmarkNavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WBSFluidProgressControllerWindowDelegate.h>
#import <libobjc.A.dylib/WBSFluidProgressStateSource.h>
#import <libobjc.A.dylib/_SFAppleConnectExtensionUIDelegate.h>

@class _SFBrowserView, SFReaderViewController, WKBackForwardListItem, _SFNavigationBar, _SFBrowserToolbar, _SFMailContentProvider, _WKUserInitiatedAction, _SFBarManager, _SFDynamicBarAnimator, _SFNavigationBarItem, _SFURLSpoofingMitigator, WBSFluidProgressState, WBSFluidProgressController, _SFFluidProgressView, UITapGestureRecognizer, _SFPageLoadErrorController, _SFSafeBrowsingController, _SFCalendarEventDetector, _SFDownloadController, NSString, _SFSafariSharingExtensionController, WKPreferences, _SFTelephonyNavigationMitigationPolicy, _SFPrintController, _SFSecIdentityPreferencesController, WBSAutomaticReaderActivationManager, SFReaderEnabledWebViewController, _SFAppleConnectExtensionPageController, _SFReloadOptionsController, _SFFindOnPageView, NSArray, _WKActivatedElementInfo, UIColor, SFSafariViewControllerConfiguration, SFBrowserPersonaAnalyticsHelper;

@interface _SFBrowserContentViewController : UIViewController <SFReaderAppearanceViewControllerDelegate, SFReaderEnabledWebViewControllerDelegate, _SFActivityViewControllerDelegate, _SFBarManagerDelegate, _SFBrowserKeyCommandMethods, _SFDownloadControllerDelegate, _SFDynamicBarAnimatorDelegate, _SFFindOnPageViewDelegate, _SFBrowserToolbarDataSource, _SFMailContentProviderDataSource, _SFNavigationBarDelegate, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFSafeBrowsingControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, _SFAppleConnectExtensionUIDelegate> {

	_SFBrowserView* _browserView;
	SFReaderViewController* _readerViewController;
	BOOL _showingReader;
	WKBackForwardListItem* _lastBackFowardListItemOnWhichReaderWasActivated;
	unsigned long long _lastReaderDeactivationMode;
	_SFNavigationBar* _navigationBar;
	_SFBrowserToolbar* _bottomToolbar;
	_SFMailContentProvider* _cachedMailContentProvider;
	_WKUserInitiatedAction* _lastUserInitiatedAction;
	BOOL _canOpenDownloadForInitialLoad;
	unsigned long long _externalAppRedirectState;
	_SFBarManager* _barManager;
	_SFDynamicBarAnimator* _dynamicBarAnimator;
	BOOL _scrollViewIsDragging;
	_SFNavigationBarItem* _navigationBarItem;
	_SFURLSpoofingMitigator* _URLSpoofingMitigator;
	WBSFluidProgressState* _fluidProgressState;
	WBSFluidProgressController* _fluidProgressController;
	_SFFluidProgressView* _cachedFluidProgressView;
	UITapGestureRecognizer* _showBarsFromBottomBarRecognizer;
	BOOL _pageScrollsWithBottomBar;
	BOOL _updatingGeometryFromDynamicBarAnimator;
	BOOL _interfaceFillsScreen;
	BOOL _usesNarrowLayout;
	_SFPageLoadErrorController* _pageLoadErrorController;
	_SFSafeBrowsingController* _safeBrowsingController;
	BOOL _safeBrowsingEnabled;
	_SFCalendarEventDetector* _calendarEventDetector;
	_SFDownloadController* _downloadController;
	BOOL _showingCrashBanner;
	double _crashBannerDraggingOffset;
	BOOL _didNotifyInitialLoadFinish;
	BOOL _shouldDismissReaderInReponseToSameDocumentNavigation;
	BOOL _EVOrganizationNameIsValid;
	NSString* _EVOrganizationName;
	BOOL _isShowingHTTPAuthenticationDialog;
	BOOL _currentLoadIsEligibleForAutoFillAuthentication;
	BOOL _isSuppressingPreviewProgressAnimation;
	_SFSafariSharingExtensionController* _sharingExtensionController;
	BOOL _didReceivePolicyForInitialLoad;
	long long _customPreferredStatusBarStyle;
	WKPreferences* _wkPreferences;
	BOOL _isDisplayingTelephonyPrompt;
	_SFTelephonyNavigationMitigationPolicy* _telephonyNavigationPolicy;
	_SFPrintController* _printController;
	_SFSecIdentityPreferencesController* _secIdentityPreferencesController;
	WBSAutomaticReaderActivationManager* _automaticReaderActivationManager;
	SFReaderEnabledWebViewController* _ownerWebViewController;
	UIEdgeInsets _verticalScrollIndicatorBaseInsets;
	UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
	_SFAppleConnectExtensionPageController* _appleConnectPageController;
	BOOL _autoHidingHomeIndicatorPermitted;
	BOOL _prefersHomeIndicatorAutoHidden;
	BOOL _shouldAutoHideHomeIndicator;
	BOOL _remoteSwipeGestureEnabled;
	BOOL __privateBrowsingInitiallyEnabled;
	BOOL _webViewLayoutUnderlapsStatusBar;
	long long _displayMode;
	_SFReloadOptionsController* _reloadOptionsController;
	_SFFindOnPageView* _findOnPageView;
	SFReaderEnabledWebViewController* _webViewController;
	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	UIColor* _preferredBarTintColor;
	UIColor* _preferredControlTintColor;
	long long _dismissButtonStyle;
	SFSafariViewControllerConfiguration* _configuration;
	NSString* _bundleIdentifierForProfileInstallation;
	unsigned long long __persona;
	SFBrowserPersonaAnalyticsHelper* __analyticsHelper;
	long long _safariDataSharingMode;

}

@property (nonatomic,retain) SFReaderEnabledWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,copy) NSArray * linkActions;                                               //@synthesize linkActions=_linkActions - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * activatedElementInfo;                    //@synthesize activatedElementInfo=_activatedElementInfo - In the implementation block
@property (assign,nonatomic) BOOL remoteSwipeGestureEnabled;                                    //@synthesize remoteSwipeGestureEnabled=_remoteSwipeGestureEnabled - In the implementation block
@property (nonatomic,retain) UIColor * preferredBarTintColor;                                   //@synthesize preferredBarTintColor=_preferredBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredControlTintColor;                               //@synthesize preferredControlTintColor=_preferredControlTintColor - In the implementation block
@property (assign,nonatomic) long long dismissButtonStyle;                                      //@synthesize dismissButtonStyle=_dismissButtonStyle - In the implementation block
@property (nonatomic,copy) SFSafariViewControllerConfiguration * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL _privateBrowsingInitiallyEnabled;                           //@synthesize _privateBrowsingInitiallyEnabled=__privateBrowsingInitiallyEnabled - In the implementation block
@property (assign,nonatomic) BOOL webViewLayoutUnderlapsStatusBar;                              //@synthesize webViewLayoutUnderlapsStatusBar=_webViewLayoutUnderlapsStatusBar - In the implementation block
@property (nonatomic,readonly) BOOL canPrint; 
@property (nonatomic,readonly) NSString * bundleIdentifierForProfileInstallation;               //@synthesize bundleIdentifierForProfileInstallation=_bundleIdentifierForProfileInstallation - In the implementation block
@property (nonatomic,readonly) BOOL _usesScrollToTopView; 
@property (nonatomic,readonly) BOOL _isUsedForAuthentication; 
@property (nonatomic,readonly) unsigned long long _persona;                                     //@synthesize _persona=__persona - In the implementation block
@property (nonatomic,readonly) SFBrowserPersonaAnalyticsHelper * _analyticsHelper;              //@synthesize _analyticsHelper=__analyticsHelper - In the implementation block
@property (assign,nonatomic) long long safariDataSharingMode;                                   //@synthesize safariDataSharingMode=_safariDataSharingMode - In the implementation block
@property (assign,nonatomic) long long displayMode;                                             //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) _SFReloadOptionsController * reloadOptionsController;              //@synthesize reloadOptionsController=_reloadOptionsController - In the implementation block
@property (nonatomic,retain) _SFFindOnPageView * findOnPageView;                                //@synthesize findOnPageView=_findOnPageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayMode:(long long)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(long long)preferredStatusBarStyle;
-(BOOL)becomeFirstResponder;
-(id)keyCommands;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_isSecure;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)previewActionItems;
-(void)setConfiguration:(SFSafariViewControllerConfiguration *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(SFSafariViewControllerConfiguration *)configuration;
-(void)_setWebView:(id)arg1 ;
-(void)stopLoading;
-(long long)displayMode;
-(void)_dismiss;
-(double)estimatedProgress;
-(NSArray *)linkActions;
-(void)_updateNavigationBar;
-(id)websiteDataStore;
-(id)_previewViewControllerForURL:(id)arg1 defaultActions:(id)arg2 elementInfo:(id)arg3 ;
-(void)_commitPreviewViewController:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3 ;
-(id)pageLoadErrorControllerGetSecIdentityPreferencesController:(id)arg1 ;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2 ;
-(void)pageLoadErrorControllerClosePage:(id)arg1 ;
-(BOOL)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg1 presentViewController:(id)arg2 ;
-(void)addBookmarkNavController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1 ;
-(id)_currentWebView;
-(void)navigationBar:(id)arg1 backDropWillApplySettings:(id)arg2 ;
-(void)navigationBarMetricsDidChange:(id)arg1 ;
-(void)navigationBarReloadButtonWasTapped:(id)arg1 ;
-(void)navigationBarReloadButtonWasLongPressed:(id)arg1 ;
-(void)navigationBarReaderButtonWasLongPressed:(id)arg1 ;
-(void)navigationBarStopLoadingButtonWasTapped:(id)arg1 ;
-(void)navigationBarReaderAppearanceButtonWasTapped:(id)arg1 ;
-(void)compressedNavigationBarWasTapped:(id)arg1 ;
-(void)navigationBarReaderButtonWasTapped:(id)arg1 ;
-(void)navigationBarCancelButtonWasTapped:(id)arg1 ;
-(void)navigationBarDoneButtonWasTapped:(id)arg1 ;
-(void)navigationBarBackdropDidApplySettings:(id)arg1 ;
-(id)navigationBarURLForSharing:(id)arg1 ;
-(void)setPreferredBarTintColor:(UIColor *)arg1 ;
-(UIColor *)preferredBarTintColor;
-(id)safeBrowsingControllerExpectedOrCurrentURL:(id)arg1 ;
-(void)safeBrowsingControllerDidShowSecurityWarningPage:(id)arg1 ;
-(void)safeBrowsingControllerClosePage:(id)arg1 ;
-(void)safeBrowsingController:(id)arg1 didIgnoreWarningWithURL:(id)arg2 ;
-(void)safeBrowsingControllerGoBack:(id)arg1 ;
-(void)activityViewController:(id)arg1 prepareActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)printControllerPageIsLoading:(id)arg1 ;
-(BOOL)printControllerShouldPrintReader:(id)arg1 ;
-(BOOL)printControllerCanPresentPrintUI:(id)arg1 ;
-(void)reloadKeyPressed;
-(void)navigateBackKeyPressed;
-(void)navigateForwardKeyPressed;
-(void)findKeyPressed;
-(void)nextFindResultKeyPressed;
-(void)previousFindResultKeyPressed;
-(void)toggleReaderKeyPressed;
-(void)cancelKeyPressed;
-(double)browserToolbarDismissButtonPadding:(id)arg1 ;
-(CGSize)browserToolbarDismissButtonSize:(id)arg1 ;
-(BOOL)browserToolbarShouldShowOpenInSafariBarButtonItem:(id)arg1 ;
-(long long)dismissButtonStyle;
-(unsigned long long)_persona;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1 ;
-(void)setPreferredControlTintColor:(UIColor *)arg1 ;
-(void)setWebViewLayoutUnderlapsStatusBar:(BOOL)arg1 ;
-(void)webViewControllerDidChangeLoadingState:(id)arg1 ;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(SFReaderEnabledWebViewController *)webViewController;
-(void)_performSafeBrowsingCheckForURLIfNecessary:(id)arg1 isMainFrame:(BOOL)arg2 ;
-(void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishNavigation:(id)arg2 ;
-(id)websiteDataStoreConfiguration;
-(id)webViewConfiguration;
-(void)setWebViewController:(SFReaderEnabledWebViewController *)arg1 ;
-(id)newProcessPool;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg1 ;
-(void)setSafariDataSharingMode:(long long)arg1 ;
-(void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPrint;
-(BOOL)_privateBrowsingInitiallyEnabled;
-(BOOL)_usesScrollToTopView;
-(void)visibilityWillChangeForFindOnPageView:(id)arg1 ;
-(id)webViewForFindOnPageView:(id)arg1 ;
-(SFBrowserPersonaAnalyticsHelper *)_analyticsHelper;
-(id)processPoolConfiguration;
-(void)_updateScrollIndicatorVerticalInsets:(UIEdgeInsets)arg1 horizontalInsets:(UIEdgeInsets)arg2 ;
-(void)_didReceiveAllQueuedMessages;
-(void)_openCurrentURLInSafari;
-(long long)safariDataSharingMode;
-(BOOL)_isUsedForAuthentication;
-(_SFReloadOptionsController *)reloadOptionsController;
-(_SFFindOnPageView *)findOnPageView;
-(BOOL)remoteSwipeGestureEnabled;
-(BOOL)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1 ;
-(void)_showBars;
-(id)_applicationPayloadForOpeningInSafari;
-(void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webViewControllerDidCancelClientRedirect:(id)arg1 ;
-(void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3 ;
-(void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2 ;
-(void)_getSafariDataSharingModeWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateRemoteSwipeGestureState;
-(BOOL)_notifyInitialLoadDidFinish:(BOOL)arg1 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2 ;
-(void)_didLoadWebView;
-(void)_recordHostAppIdAndURLForTapToRadar:(id)arg1 ;
-(NSString *)bundleIdentifierForProfileInstallation;
-(id)presentingViewControllerForWebViewController:(id)arg1 ;
-(void)webViewControllerDidChangeEstimatedProgress:(id)arg1 ;
-(void)webViewControllerDidChangeURL:(id)arg1 ;
-(void)webViewControllerDidChangeHasOnlySecureContent:(id)arg1 ;
-(void)webViewControllerWebProcessDidBecomeResponsive:(id)arg1 ;
-(void)webViewControllerWebProcessDidBecomeUnresponsive:(id)arg1 ;
-(void)webViewController:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didSameDocumentNavigation:(id)arg2 ofType:(long long)arg3 ;
-(void)webViewController:(id)arg1 didEndNavigationGestureToBackForwardListItem:(id)arg2 ;
-(void)webViewController:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewControllerWebProcessDidCrash:(id)arg1 ;
-(void)webViewController:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)browserPersonaForWebViewController:(id)arg1 ;
-(BOOL)currentLoadIsEligibleForAutoFillAuthenticationForWebViewController:(id)arg1 ;
-(void)webViewControllerWillAuthenticateForAutoFill:(id)arg1 ;
-(void)webViewController:(id)arg1 webViewDidClose:(id)arg2 ;
-(void)webViewController:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)webViewController:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 ;
-(void)webViewController:(id)arg1 commitPreviewedViewController:(id)arg2 ;
-(void)webViewController:(id)arg1 printFrame:(id)arg2 ;
-(void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(id)arg1 ;
-(void)webViewControllerWillPresentJavaScriptDialog:(id)arg1 ;
-(void)webViewControllerDidChangeSafeAreaInsets:(id)arg1 ;
-(id)downloadBackgroundTaskName;
-(void)fileDownloadDidFinish:(id)arg1 ;
-(void)clearFluidProgressState;
-(BOOL)createFluidProgressState;
-(id)expectedOrCurrentURL;
-(BOOL)hasFailedURL;
-(void)readerAppearanceViewControllerDidChangeFont:(id)arg1 ;
-(void)readerAppearanceViewControllerDidDecreaseTextSize:(id)arg1 ;
-(void)readerAppearanceViewControllerDidIncreaseTextSize:(id)arg1 ;
-(void)readerAppearanceViewControllerDidChangeTheme:(id)arg1 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg1 ;
-(double)dynamicBarAnimator:(id)arg1 minimumTopBarHeightForOffset:(double)arg2 ;
-(UIColor *)preferredControlTintColor;
-(unsigned long long)availableContentTypeForMailContentProvider:(id)arg1 ;
-(void)mailContentProvider:(id)arg1 getWebArchiveDataWithCompletion:(/*^block*/id)arg2 ;
-(void)mailContentProvider:(id)arg1 getReaderContentWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)mailContentProvider:(id)arg1 getPDFDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_perSiteAutomaticReaderActivationPreferenceDidChange:(id)arg1 ;
-(void)_showBarsFromBottomBarTap:(id)arg1 ;
-(void)_updateDoNotTrackPreference;
-(void)_updateTrackerProtectionPreferences;
-(void)_setUpTopBarAndBottomBar;
-(void)_updateStatusBarStyleForced:(BOOL)arg1 ;
-(void)_setUpSafeBrowsingController;
-(void)_setUpReloadOptionsControllerIfNeeded;
-(void)_setUpCalendarEventDetectorIfNeeded;
-(void)_setUpFindOnPageViewIfNeeded;
-(void)_updatePreferredBarTintColor;
-(void)_updatePreferredControlTintColor;
-(void)_invalidateEVOrganizationName;
-(void)_setUpAppleConnectPageControllerIfNeeded;
-(BOOL)_isPreviewing;
-(void)_setSuppressingPreviewProgressAnimation:(BOOL)arg1 ;
-(BOOL)isSafariRestricted;
-(BOOL)_shouldGoBackToOwnerWebView;
-(void)_setUpToolbar;
-(void)_updateHomeIndicatorAutoHideState;
-(void)_setUpWebViewControllerIfNeeded;
-(void)_updateInterfaceFillsScreen;
-(void)_updateUsesNarrowLayout;
-(void)_updateScrollToTopView;
-(void)_updateWebViewLayoutSize;
-(void)_updateWebViewShrinkToFit;
-(void)_updateCurrentScrollViewInsets;
-(void)_viewWillTransitionToSize:(CGSize)arg1 ;
-(void)_viewDidTransitionToSize:(CGSize)arg1 ;
-(BOOL)_safeAreaShouldAffectWebViewObscuredInsets;
-(UIEdgeInsets)_effectiveWebViewSafeAreaInsets;
-(BOOL)_isSplitScreen;
-(double)_maximumHeightObscuredByBottomBar;
-(BOOL)_canScrollToTopInView:(id)arg1 ;
-(void)_scrollToTopFromScrollToTopView;
-(void)_setShowingReader:(BOOL)arg1 deactivationMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_hideReaderAnimated:(BOOL)arg1 deactivationMode:(unsigned long long)arg2 ;
-(void)_showReaderAnimated:(BOOL)arg1 ;
-(BOOL)_readerViewControllerNeedsSetUp;
-(void)_setUpReaderViewController;
-(id)_EVOrganizationName;
-(void)_updateBarItems;
-(void)_updatePreviewLoadingUI;
-(void)_performSafeBrowsingCheckForURL:(id)arg1 isMainFrame:(BOOL)arg2 ;
-(void)_setShowingCrashBanner:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_hideCrashBanner;
-(void)_updateCrashBannerOffset;
-(id)_committedDomainForAutomaticReader;
-(void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 promptPolicy:(long long)arg3 isMainFrame:(BOOL)arg4 userAction:(id)arg5 ;
-(void)_completeRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 userCancelled:(BOOL)arg3 ;
-(void)_queueAlertForRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 isMainFrame:(BOOL)arg3 promptPolicy:(long long)arg4 userAction:(id)arg5 ;
-(id)_openNewWebViewIfNeededWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 ;
-(id)_linkPreviewActionsWithDefaultActions:(id)arg1 ;
-(void)setLinkActions:(NSArray *)arg1 ;
-(void)setActivatedElementInfo:(_WKActivatedElementInfo *)arg1 ;
-(void)updateBottombarOffset:(double)arg1 topBarHeight:(double)arg2 ;
-(double)_crashBannerDraggingOffsetForContentOffset:(CGPoint)arg1 ;
-(void)_toggleReaderFromExplicitUserAction;
-(void)reloadAllowingContentBlockers:(BOOL)arg1 ;
-(BOOL)_canShowDownloadWithoutPrompting:(id)arg1 ;
-(void)_showDownload:(id)arg1 ;
-(void)_showPassBookControllerForPass:(id)arg1 ;
-(void)_showGenericDownloadAlert;
-(BOOL)_showICSControllerForPath:(id)arg1 sourceURL:(id)arg2 ;
-(BOOL)isShowingErrorPage;
-(id)_activeToolbar;
-(void)_fetchSharingURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_mailContentProvider;
-(void)_goBack;
-(void)_goForward;
-(void)_presentActivityViewController;
-(void)webViewControllerDidDetermineReaderAvailability:(id)arg1 dueToSameDocumentNavigation:(BOOL)arg2 ;
-(void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2 ;
-(void)createReaderWebViewForWebViewController:(id)arg1 ;
-(void)barManager:(id)arg1 didRecieveTapForBarItem:(long long)arg2 ;
-(void)fluidProgressRocketAnimationDidComplete;
-(id)currentFluidProgressStateSource;
-(void)appleConnectExtensionPageController:(id)arg1 presentViewController:(id)arg2 ;
-(void)appleConnectExtensionPageController:(id)arg1 dismissViewController:(id)arg2 ;
-(void)setReloadOptionsController:(_SFReloadOptionsController *)arg1 ;
-(void)setFindOnPageView:(_SFFindOnPageView *)arg1 ;
-(_WKActivatedElementInfo *)activatedElementInfo;
-(BOOL)webViewLayoutUnderlapsStatusBar;
-(void)setDismissButtonStyle:(long long)arg1 ;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2 ;
-(void)_updateDynamicBarGeometry;
-(void)_updateUI;
-(id)processPool;
-(id)progressState;
@end

