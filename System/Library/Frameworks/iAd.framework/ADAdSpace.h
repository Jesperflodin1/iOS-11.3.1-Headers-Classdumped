/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/ADPrivacyViewControllerInternalDelegate.h>
#import <libobjc.A.dylib/ADWebViewActionViewControllerDelegate.h>
#import <libobjc.A.dylib/ADCreativeControllerDelegate.h>

@protocol ADAdRecipient;
@class NSString, NSURL, ADContext, ADAdImpressionPublicAttributes, ADAdActionPublicAttributes, ADMediaAnalyticsEventInfo, ADCreativeController, ADRemoteActionViewController, ADWebViewActionViewController, _UIAsyncInvocation, NSArray, ADPrivacyViewController, ADAdSpaceConfiguration;

@interface ADAdSpace : NSObject <ADPrivacyViewControllerInternalDelegate, ADWebViewActionViewControllerDelegate, ADCreativeControllerDelegate> {

	id<ADAdRecipient> _recipient;
	BOOL _requiresFastVisibiltyTestOnly;
	BOOL _firedAdStatusEvent;
	BOOL _isModalInterstitial;
	BOOL _didInstallCreativeView;
	BOOL _hasImpressed;
	BOOL _adLibManagedVideo;
	BOOL _visibilityCheckScheduled;
	BOOL _adRequestMade;
	BOOL _shouldMonitorVisibility;
	BOOL _serviceAdSpaceRequestInProgress;
	BOOL _shouldPresentActionViewControllerWhenReady;
	BOOL _actionViewControllerReadyForPresentation;
	BOOL _actionViewControllerWantsDismissal;
	BOOL _fastVisibilityContextIsFeed;
	BOOL _shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
	BOOL _privacyRequestInProgress;
	float _lastPlayTime;
	float _lastVolume;
	float _totalDuration;
	float _visibilityPercentage;
	int _videoPlayCount;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	ADContext* _context;
	ADAdImpressionPublicAttributes* _currentAdImpressionPublicAttributes;
	ADAdActionPublicAttributes* _currentActionPublicAttributes;
	unsigned long long _reUseCount;
	long long _pendingAnalyticsVideoState;
	ADMediaAnalyticsEventInfo* _pendingAnalyticsEventInfo;
	long long _visibility;
	double _lastSlowCheck;
	ADCreativeController* _creativeController;
	ADRemoteActionViewController* _remoteActionViewController;
	ADWebViewActionViewController* _webViewActionViewController;
	_UIAsyncInvocation* _remoteViewControllerRequestCancelationInvocation;
	long long _progressMileStoneMet;
	NSArray* _prerollVideoAssets;
	ADPrivacyViewController* _privacyViewController;
	CGRect _selectedAdFrame;

}

@property (nonatomic,readonly) ADAdSpaceConfiguration * configuration; 
@property (assign,nonatomic) long long visibility;                                                                        //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL visibilityCheckScheduled;                                                               //@synthesize visibilityCheckScheduled=_visibilityCheckScheduled - In the implementation block
@property (assign,nonatomic) BOOL adRequestMade;                                                                          //@synthesize adRequestMade=_adRequestMade - In the implementation block
@property (assign,nonatomic) BOOL shouldMonitorVisibility;                                                                //@synthesize shouldMonitorVisibility=_shouldMonitorVisibility - In the implementation block
@property (assign,nonatomic) double lastSlowCheck;                                                                        //@synthesize lastSlowCheck=_lastSlowCheck - In the implementation block
@property (nonatomic,retain) ADCreativeController * creativeController;                                                   //@synthesize creativeController=_creativeController - In the implementation block
@property (assign,nonatomic) BOOL serviceAdSpaceRequestInProgress;                                                        //@synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress - In the implementation block
@property (nonatomic,retain) ADAdImpressionPublicAttributes * currentAdImpressionPublicAttributes;                        //@synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes - In the implementation block
@property (nonatomic,retain) ADAdActionPublicAttributes * currentActionPublicAttributes;                                  //@synthesize currentActionPublicAttributes=_currentActionPublicAttributes - In the implementation block
@property (nonatomic,retain) ADRemoteActionViewController * remoteActionViewController;                                   //@synthesize remoteActionViewController=_remoteActionViewController - In the implementation block
@property (nonatomic,retain) ADWebViewActionViewController * webViewActionViewController;                                 //@synthesize webViewActionViewController=_webViewActionViewController - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * remoteViewControllerRequestCancelationInvocation;                       //@synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionViewControllerWhenReady;                                             //@synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerReadyForPresentation;                                               //@synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerWantsDismissal;                                                     //@synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal - In the implementation block
@property (nonatomic,readonly) NSString * connectionAssertionIdentifier; 
@property (assign,nonatomic) BOOL fastVisibilityContextIsFeed;                                                            //@synthesize fastVisibilityContextIsFeed=_fastVisibilityContextIsFeed - In the implementation block
@property (assign,nonatomic) BOOL shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;              //@synthesize shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController=_shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController - In the implementation block
@property (assign,nonatomic) BOOL didInstallCreativeView;                                                                 //@synthesize didInstallCreativeView=_didInstallCreativeView - In the implementation block
@property (assign,nonatomic) float visibilityPercentage;                                                                  //@synthesize visibilityPercentage=_visibilityPercentage - In the implementation block
@property (assign,nonatomic) int videoPlayCount;                                                                          //@synthesize videoPlayCount=_videoPlayCount - In the implementation block
@property (assign,nonatomic) long long progressMileStoneMet;                                                              //@synthesize progressMileStoneMet=_progressMileStoneMet - In the implementation block
@property (nonatomic,retain) NSArray * prerollVideoAssets;                                                                //@synthesize prerollVideoAssets=_prerollVideoAssets - In the implementation block
@property (nonatomic,retain) ADPrivacyViewController * privacyViewController;                                             //@synthesize privacyViewController=_privacyViewController - In the implementation block
@property (assign,nonatomic) BOOL privacyRequestInProgress;                                                               //@synthesize privacyRequestInProgress=_privacyRequestInProgress - In the implementation block
@property (nonatomic,readonly) id<ADAdRecipient> recipient; 
@property (nonatomic,copy) NSString * identifier;                                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                             //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                                 //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                             //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) ADContext * context;                                                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL requiresFastVisibiltyTestOnly;                                                          //@synthesize requiresFastVisibiltyTestOnly=_requiresFastVisibiltyTestOnly - In the implementation block
@property (assign,nonatomic) BOOL firedAdStatusEvent;                                                                     //@synthesize firedAdStatusEvent=_firedAdStatusEvent - In the implementation block
@property (assign,nonatomic) BOOL isModalInterstitial;                                                                    //@synthesize isModalInterstitial=_isModalInterstitial - In the implementation block
@property (assign,nonatomic) CGRect selectedAdFrame;                                                                      //@synthesize selectedAdFrame=_selectedAdFrame - In the implementation block
@property (assign,nonatomic) BOOL hasImpressed;                                                                           //@synthesize hasImpressed=_hasImpressed - In the implementation block
@property (assign,nonatomic) unsigned long long reUseCount;                                                               //@synthesize reUseCount=_reUseCount - In the implementation block
@property (assign,nonatomic) long long pendingAnalyticsVideoState;                                                        //@synthesize pendingAnalyticsVideoState=_pendingAnalyticsVideoState - In the implementation block
@property (nonatomic,copy) ADMediaAnalyticsEventInfo * pendingAnalyticsEventInfo;                                         //@synthesize pendingAnalyticsEventInfo=_pendingAnalyticsEventInfo - In the implementation block
@property (assign,nonatomic) float lastPlayTime;                                                                          //@synthesize lastPlayTime=_lastPlayTime - In the implementation block
@property (assign,nonatomic) float lastVolume;                                                                            //@synthesize lastVolume=_lastVolume - In the implementation block
@property (assign,nonatomic) float totalDuration;                                                                         //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) BOOL adLibManagedVideo;                                                                      //@synthesize adLibManagedVideo=_adLibManagedVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ADIdentifierNameForCreativeType:(int)arg1 ;
-(id)_updateIdentifier;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(ADContext *)context;
-(void)setContext:(ADContext *)arg1 ;
-(void)close;
-(ADAdSpaceConfiguration *)configuration;
-(long long)visibility;
-(void)setVisibility:(long long)arg1 ;
-(NSURL *)serverURL;
-(id<ADAdRecipient>)recipient;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)setPrivacyViewController:(ADPrivacyViewController *)arg1 ;
-(void)adPrivacyViewControllerDidLoad:(id)arg1 ;
-(void)adPrivacyViewControllerDidDismiss:(id)arg1 ;
-(void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(ADPrivacyViewController *)privacyViewController;
-(void)captureEvent:(id)arg1 forAd:(id)arg2 forVideoState:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setLastPlayTime:(float)arg1 ;
-(void)setLastVolume:(float)arg1 ;
-(float)lastPlayTime;
-(float)lastVolume;
-(void)captureEvent:(id)arg1 forAd:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)captureUnloadEventForAd:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForRecipient:(id)arg1 ;
-(BOOL)canReuseForContext:(id)arg1 ;
-(BOOL)hasImpressed;
-(void)internalAdTypeDidChange;
-(void)startVisibilityMonitoring;
-(void)stopVisibilityMonitoring;
-(unsigned long long)reUseCount;
-(void)setReUseCount:(unsigned long long)arg1 ;
-(ADAdImpressionPublicAttributes *)currentAdImpressionPublicAttributes;
-(void)setSelectedAdFrame:(CGRect)arg1 ;
-(ADAdActionPublicAttributes *)currentActionPublicAttributes;
-(void)executeBannerViewActionFrom:(CGRect)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)refuseBannerViewAction;
-(void)determineActionForTapAtLocation:(CGPoint)arg1 inFrame:(CGRect)arg2 withMRAIDAction:(id)arg3 completeHandler:(/*^block*/id)arg4 ;
-(void)reportNativeClickEvent;
-(BOOL)didInstallCreativeView;
-(void)installCreativeView;
-(void)uninstallCreativeView;
-(void)showAdTransparency;
-(BOOL)adLibManagedVideo;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)cancelBannerViewAction;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(NSArray *)prerollVideoAssets;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(void)impressionPublicAttributesDidLoad:(id)arg1 ;
-(void)setHasImpressed:(BOOL)arg1 ;
-(void)_remote_creativeDidFailWithError:(id)arg1 ;
-(void)_remote_close;
-(void)setRequiresFastVisibiltyTestOnly:(BOOL)arg1 ;
-(void)_remote_openURL:(id)arg1 ;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 ;
-(void)_remote_actionViewControllerReadyForPresentation;
-(void)_remote_dismissViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_remote_dismissViewController;
-(void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1 ;
-(void)webViewActionViewControllerHomeButtonWasTapped:(id)arg1 ;
-(NSString *)connectionAssertionIdentifier;
-(void)_tearDownWebActionViewController;
-(void)_tearDownCreativeController;
-(void)_requestAdFromAdSheet;
-(void)_clientApplicationDidBecomeActive;
-(void)_clientApplicationDidEnterBackground;
-(void)setDidInstallCreativeView:(BOOL)arg1 ;
-(void)setVisibilityCheckScheduled:(BOOL)arg1 ;
-(void)setShouldMonitorVisibility:(BOOL)arg1 ;
-(void)setAdRequestMade:(BOOL)arg1 ;
-(void)setVideoPlayCount:(int)arg1 ;
-(void)setProgressMileStoneMet:(long long)arg1 ;
-(BOOL)adRequestMade;
-(BOOL)serviceAdSpaceRequestInProgress;
-(void)setServiceAdSpaceRequestInProgress:(BOOL)arg1 ;
-(ADRemoteActionViewController *)remoteActionViewController;
-(ADCreativeController *)creativeController;
-(void)setCreativeController:(ADCreativeController *)arg1 ;
-(void)proceedWithClosing:(BOOL)arg1 ;
-(void)_closeConnectionIfNecessary;
-(ADWebViewActionViewController *)webViewActionViewController;
-(void)setShouldTearDownCreativeControllerAfterDismissingRemoteActionViewController:(BOOL)arg1 ;
-(void)setPrivacyRequestInProgress:(BOOL)arg1 ;
-(BOOL)shouldMonitorVisibility;
-(BOOL)visibilityCheckScheduled;
-(void)setVisibilityPercentage:(float)arg1 ;
-(float)visibilityPercentage;
-(BOOL)requiresFastVisibiltyTestOnly;
-(double)lastSlowCheck;
-(void)setLastSlowCheck:(double)arg1 ;
-(void)updateCreativeControllerVisibility;
-(void)setFastVisibilityContextIsFeed:(BOOL)arg1 ;
-(id)_videoAssetsForVideoURL:(id)arg1 ;
-(void)setCurrentActionPublicAttributes:(ADAdActionPublicAttributes *)arg1 ;
-(void)setShouldPresentActionViewControllerWhenReady:(BOOL)arg1 ;
-(void)_considerPresentingWebViewActionViewControllerWithURL:(id)arg1 ;
-(void)_handleMRAIDActionPresentation;
-(void)_considerPresentingActionViewController;
-(void)setActionViewControllerReadyForPresentation:(BOOL)arg1 ;
-(void)setActionViewControllerWantsDismissal:(BOOL)arg1 ;
-(_UIAsyncInvocation *)remoteViewControllerRequestCancelationInvocation;
-(void)setRemoteViewControllerRequestCancelationInvocation:(_UIAsyncInvocation *)arg1 ;
-(void)setRemoteActionViewController:(ADRemoteActionViewController *)arg1 ;
-(BOOL)shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
-(BOOL)shouldPresentActionViewControllerWhenReady;
-(BOOL)actionViewControllerReadyForPresentation;
-(void)_notifiyCreativeControllerOfActionViewControllerPresentation;
-(BOOL)actionViewControllerWantsDismissal;
-(BOOL)privacyRequestInProgress;
-(void)_presentPrivacyViewController;
-(void)_remote_resumeBannerMedia;
-(void)setCurrentAdImpressionPublicAttributes:(ADAdImpressionPublicAttributes *)arg1 ;
-(void)setWebViewActionViewController:(ADWebViewActionViewController *)arg1 ;
-(long long)progressMileStoneMet;
-(int)videoPlayCount;
-(void)adPrivacyViewControllerDidAppear:(id)arg1 ;
-(void)adPrivacyViewControllerDidDisappear:(id)arg1 ;
-(void)adPrivacyViewControllerDidRenderTransparency:(id)arg1 ;
-(void)adPrivacyViewControllerDidLinkOut:(id)arg1 ;
-(void)creativeControllerViewDidRequestCloseWithTapLocation:(CGPoint)arg1 ;
-(void)creativeControllerViewDidRequestCreateCalendarEvent:(id)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(CGSize)arg2 withTapLocation:(CGPoint)arg3 ;
-(void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
-(void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
-(void)creativeControllerVideoCreativeViewLoaded;
-(void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3 ;
-(void)creativeControllerVideoCompletedWithVolume:(float)arg1 ;
-(void)creativeControllerVideoMuted:(float)arg1 ;
-(void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2 ;
-(void)_remote_pauseBannerMedia;
-(BOOL)firedAdStatusEvent;
-(void)setFiredAdStatusEvent:(BOOL)arg1 ;
-(BOOL)isModalInterstitial;
-(void)setIsModalInterstitial:(BOOL)arg1 ;
-(CGRect)selectedAdFrame;
-(long long)pendingAnalyticsVideoState;
-(void)setPendingAnalyticsVideoState:(long long)arg1 ;
-(ADMediaAnalyticsEventInfo *)pendingAnalyticsEventInfo;
-(void)setPendingAnalyticsEventInfo:(ADMediaAnalyticsEventInfo *)arg1 ;
-(void)setAdLibManagedVideo:(BOOL)arg1 ;
-(BOOL)fastVisibilityContextIsFeed;
-(void)setPrerollVideoAssets:(NSArray *)arg1 ;
-(float)totalDuration;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)updateVisibility;
-(void)setTotalDuration:(float)arg1 ;
@end

