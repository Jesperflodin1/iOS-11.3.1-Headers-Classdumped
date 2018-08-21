/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SXDocumentSectionHosting.h>
#import <libobjc.A.dylib/SXLayoutManagerDelegate.h>
#import <libobjc.A.dylib/SXComponentControllerDelegate.h>
#import <libobjc.A.dylib/SXPresentationDelegate.h>
#import <libobjc.A.dylib/STScrollViewDelegate.h>
#import <libobjc.A.dylib/SXComponentHosting.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SXTangierControllerDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXAdControllerPresentationDelegate.h>
#import <libobjc.A.dylib/SXPreviewViewControllerManagerDelegate.h>
#import <libobjc.A.dylib/SXKeyboardSupport.h>
#import <libobjc.A.dylib/SXScrollPositionRestoring.h>

@protocol SXAdDocumentStateManager, SXTextSelectionManager, SXScrollViewControllerDelegate, SXTransitionDataSourceProvider, SXDocumentControllerContainer, SXResourceDataSourceContainer, SXAnalyticsReportingContainer, SXPresentationDelegateContainer, SXAdControllerContainer, SXAppStateMonitor, SXPresentationAttributesManager, SXActionManager, SXScrollPositionManager, SXPreviewViewControllerManager, SXLayoutManager, SXDocumentSectionManager, SXDocumentSectionBlueprint, SXDocumentStyleRenderer, UIViewControllerPreviewing, SXScrollReporting;
@class SXViewport, SXComponentController, SXTangierController, SXComponentAnimationController, SXComponentBehaviorController, SXFullscreenVideoPlaybackManager, SXMediaPlaybackController, SXPresentationAttributes, SXContext, UIScrollView, SXViewControllerPresentingManager, SXLayoutDataProvider, SXViewportDebugger, SXComponentView, SXFullscreenCanvasViewController, SXFullscreenCanvasController, UIView, SXScrollPosition, NSOrderedSet, NSMutableArray, SXVideoPlayerViewControllerManager, NSString;

@interface SXScrollViewController : UIViewController <SXDocumentSectionHosting, SXLayoutManagerDelegate, SXComponentControllerDelegate, SXPresentationDelegate, STScrollViewDelegate, SXComponentHosting, UIGestureRecognizerDelegate, SXTangierControllerDelegate, SXViewportChangeListener, SXAdControllerPresentationDelegate, SXPreviewViewControllerManagerDelegate, SXKeyboardSupport, SXScrollPositionRestoring> {

	BOOL _restoreScrollPositionOnNextLayout;
	BOOL _shouldFadeInAfterRotation;
	BOOL _isPreviewing;
	SXComponentAnimationController* _animationController;
	SXComponentBehaviorController* _behaviorController;
	SXComponentController* _componentController;
	SXMediaPlaybackController* _mediaPlaybackController;
	SXFullscreenVideoPlaybackManager* _fullscreenVideoPlaybackManager;
	id<SXAdDocumentStateManager> _adDocumentStateManager;
	id<SXTextSelectionManager> _textSelectionManager;
	SXContext* _context;
	UIScrollView* _scrollView;
	id<SXScrollViewControllerDelegate> _delegate;
	SXPresentationAttributes* _presentationAttributes;
	id<SXTransitionDataSourceProvider> _transitionDataSourceProvider;
	id<SXDocumentControllerContainer> _documentControllerContainer;
	id<SXResourceDataSourceContainer> _resourceDataSourceContainer;
	id<SXAnalyticsReportingContainer> _analyticsReportingContainer;
	id<SXPresentationDelegateContainer> _presentationDelegateContainer;
	id<SXAdControllerContainer> _adControllerContainer;
	id<SXAppStateMonitor> _appStateMonitor;
	id<SXPresentationAttributesManager> _presentationAttributesManager;
	id<SXActionManager> _actionManager;
	SXViewControllerPresentingManager* _viewControllerPresentingManager;
	id<SXScrollPositionManager> _scrollPositionManager;
	id<SXPreviewViewControllerManager> _previewViewControllerManager;
	SXLayoutDataProvider* _layoutDataProvider;
	id<SXLayoutManager> _layoutManager;
	id<SXDocumentSectionManager> _documentSectionManager;
	id<SXDocumentSectionBlueprint> _headerBlueprint;
	id<SXDocumentSectionBlueprint> _footerBlueprint;
	SXViewport* _viewport;
	SXViewportDebugger* _viewportDebugger;
	SXComponentView* _focussedComponentView;
	SXFullscreenCanvasViewController* _fullscreenCanvasViewController;
	SXFullscreenCanvasController* _currentCanvasController;
	UIView* _fullscreenCanvasView;
	SXScrollPosition* _restoredScrollPosition;
	double _lastScrollOffset;
	NSOrderedSet* _snapLines;
	NSMutableArray* _viewsToMaintainPosition;
	id<SXDocumentStyleRenderer> _documentStyleRenderer;
	SXTangierController* _tangierController;
	NSMutableArray* _articleScrollEvents;
	id<UIViewControllerPreviewing> _previewingContext;
	id<SXScrollReporting> _scrollReporter;
	SXVideoPlayerViewControllerManager* _videoPlayerViewControllerManager;

}

@property (nonatomic,readonly) id<SXDocumentControllerContainer> documentControllerContainer;                      //@synthesize documentControllerContainer=_documentControllerContainer - In the implementation block
@property (nonatomic,readonly) id<SXResourceDataSourceContainer> resourceDataSourceContainer;                      //@synthesize resourceDataSourceContainer=_resourceDataSourceContainer - In the implementation block
@property (nonatomic,readonly) id<SXAnalyticsReportingContainer> analyticsReportingContainer;                      //@synthesize analyticsReportingContainer=_analyticsReportingContainer - In the implementation block
@property (nonatomic,readonly) id<SXPresentationDelegateContainer> presentationDelegateContainer;                  //@synthesize presentationDelegateContainer=_presentationDelegateContainer - In the implementation block
@property (nonatomic,readonly) id<SXAdControllerContainer> adControllerContainer;                                  //@synthesize adControllerContainer=_adControllerContainer - In the implementation block
@property (nonatomic,readonly) id<SXAppStateMonitor> appStateMonitor;                                              //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,readonly) id<SXPresentationAttributesManager> presentationAttributesManager;                  //@synthesize presentationAttributesManager=_presentationAttributesManager - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                                                  //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) SXViewControllerPresentingManager * viewControllerPresentingManager;                //@synthesize viewControllerPresentingManager=_viewControllerPresentingManager - In the implementation block
@property (nonatomic,readonly) id<SXScrollPositionManager> scrollPositionManager;                                  //@synthesize scrollPositionManager=_scrollPositionManager - In the implementation block
@property (nonatomic,readonly) id<SXPreviewViewControllerManager> previewViewControllerManager;                    //@synthesize previewViewControllerManager=_previewViewControllerManager - In the implementation block
@property (nonatomic,readonly) SXLayoutDataProvider * layoutDataProvider;                                          //@synthesize layoutDataProvider=_layoutDataProvider - In the implementation block
@property (nonatomic,retain) id<SXLayoutManager> layoutManager;                                                    //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) id<SXDocumentSectionManager> documentSectionManager;                                //@synthesize documentSectionManager=_documentSectionManager - In the implementation block
@property (nonatomic,readonly) id<SXDocumentSectionBlueprint> headerBlueprint;                                     //@synthesize headerBlueprint=_headerBlueprint - In the implementation block
@property (nonatomic,readonly) id<SXDocumentSectionBlueprint> footerBlueprint;                                     //@synthesize footerBlueprint=_footerBlueprint - In the implementation block
@property (nonatomic,retain) SXViewport * viewport;                                                                //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) SXViewportDebugger * viewportDebugger;                                                //@synthesize viewportDebugger=_viewportDebugger - In the implementation block
@property (nonatomic,retain) SXComponentView * focussedComponentView;                                              //@synthesize focussedComponentView=_focussedComponentView - In the implementation block
@property (nonatomic,retain) SXFullscreenCanvasViewController * fullscreenCanvasViewController;                    //@synthesize fullscreenCanvasViewController=_fullscreenCanvasViewController - In the implementation block
@property (nonatomic,retain) SXFullscreenCanvasController * currentCanvasController;                               //@synthesize currentCanvasController=_currentCanvasController - In the implementation block
@property (nonatomic,retain) UIView * fullscreenCanvasView;                                                        //@synthesize fullscreenCanvasView=_fullscreenCanvasView - In the implementation block
@property (nonatomic,retain) SXScrollPosition * restoredScrollPosition;                                            //@synthesize restoredScrollPosition=_restoredScrollPosition - In the implementation block
@property (assign,nonatomic) BOOL restoreScrollPositionOnNextLayout;                                               //@synthesize restoreScrollPositionOnNextLayout=_restoreScrollPositionOnNextLayout - In the implementation block
@property (assign,nonatomic) double lastScrollOffset;                                                              //@synthesize lastScrollOffset=_lastScrollOffset - In the implementation block
@property (nonatomic,retain) NSOrderedSet * snapLines;                                                             //@synthesize snapLines=_snapLines - In the implementation block
@property (nonatomic,readonly) NSMutableArray * viewsToMaintainPosition;                                           //@synthesize viewsToMaintainPosition=_viewsToMaintainPosition - In the implementation block
@property (nonatomic,readonly) id<SXDocumentStyleRenderer> documentStyleRenderer;                                  //@synthesize documentStyleRenderer=_documentStyleRenderer - In the implementation block
@property (nonatomic,retain) SXTangierController * tangierController;                                              //@synthesize tangierController=_tangierController - In the implementation block
@property (assign,nonatomic) BOOL shouldFadeInAfterRotation;                                                       //@synthesize shouldFadeInAfterRotation=_shouldFadeInAfterRotation - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleScrollEvents;                                                 //@synthesize articleScrollEvents=_articleScrollEvents - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewingContext;                                     //@synthesize previewingContext=_previewingContext - In the implementation block
@property (assign,nonatomic) BOOL isPreviewing;                                                                    //@synthesize isPreviewing=_isPreviewing - In the implementation block
@property (nonatomic,readonly) id<SXScrollReporting> scrollReporter;                                               //@synthesize scrollReporter=_scrollReporter - In the implementation block
@property (nonatomic,readonly) SXVideoPlayerViewControllerManager * videoPlayerViewControllerManager;              //@synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager - In the implementation block
@property (nonatomic,readonly) SXContext * context;                                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                          //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<SXScrollViewControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingFullscreenCanvas; 
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes;                                  //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (nonatomic,readonly) id<SXTransitionDataSourceProvider> transitionDataSourceProvider;                    //@synthesize transitionDataSourceProvider=_transitionDataSourceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXComponentController * componentController;                                        //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,readonly) SXComponentAnimationController * animationController;                               //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,readonly) SXComponentBehaviorController * behaviorController;                                 //@synthesize behaviorController=_behaviorController - In the implementation block
@property (nonatomic,readonly) SXFullscreenVideoPlaybackManager * fullscreenVideoPlaybackManager;                  //@synthesize fullscreenVideoPlaybackManager=_fullscreenVideoPlaybackManager - In the implementation block
@property (nonatomic,readonly) SXMediaPlaybackController * mediaPlaybackController;                                //@synthesize mediaPlaybackController=_mediaPlaybackController - In the implementation block
@property (nonatomic,readonly) id<SXAdDocumentStateManager> adDocumentStateManager;                                //@synthesize adDocumentStateManager=_adDocumentStateManager - In the implementation block
@property (nonatomic,readonly) id<SXTextSelectionManager> textSelectionManager;                                    //@synthesize textSelectionManager=_textSelectionManager - In the implementation block
-(id<SXScrollViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SXScrollViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(SXComponentAnimationController *)animationController;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIScrollView *)scrollView;
-(SXContext *)context;
-(void)viewDidLayoutSubviews;
-(id<SXLayoutManager>)layoutManager;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setLayoutManager:(id<SXLayoutManager>)arg1 ;
-(BOOL)isPreviewing;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isScrolling;
-(id<UIViewControllerPreviewing>)previewingContext;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing>)arg1 ;
-(id<SXActionManager>)actionManager;
-(SXViewport *)viewport;
-(void)setViewport:(SXViewport *)arg1 ;
-(SXPresentationAttributes *)presentationAttributes;
-(void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithScrollView:(id)arg1 documentControllerContainer:(id)arg2 resourceDataSourceContainer:(id)arg3 analyticsReportingContainer:(id)arg4 presentationDelegateContainer:(id)arg5 adControllerContainer:(id)arg6 presentationAttributeManager:(id)arg7 viewport:(id)arg8 tangierController:(id)arg9 componentController:(id)arg10 layoutManager:(id)arg11 appStateMonitor:(id)arg12 viewControllerPresentingManager:(id)arg13 scrollPositionManager:(id)arg14 documentStyleRenderer:(id)arg15 previewViewControllerManager:(id)arg16 scrollReporter:(id)arg17 videoPlayerViewControllerManager:(id)arg18 ;
-(BOOL)allowInteractivityFocusForComponent:(id)arg1 ;
-(BOOL)addInteractivityFocusForComponent:(id)arg1 ;
-(void)removeInteractivityFocusForComponent:(id)arg1 ;
-(id)requestFullScreenCanvasForComponent:(id)arg1 canvasController:(id)arg2 ;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 ;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dismissFullscreenCanvasForComponent:(id)arg1 ;
-(id)presentingContentViewController;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)maintainPositionOfViewWhileScrolling:(id)arg1 ;
-(void)releasePositionOfView:(id)arg1 ;
-(void)updateBehaviorForComponentView:(id)arg1 ;
-(SXComponentController *)componentController;
-(SXTangierController *)tangierController;
-(SXComponentBehaviorController *)behaviorController;
-(SXFullscreenVideoPlaybackManager *)fullscreenVideoPlaybackManager;
-(SXMediaPlaybackController *)mediaPlaybackController;
-(id<SXAdDocumentStateManager>)adDocumentStateManager;
-(id<SXTextSelectionManager>)textSelectionManager;
-(void)setRestoreScrollPositionOnNextLayout:(BOOL)arg1 ;
-(id<SXPreviewViewControllerManager>)previewViewControllerManager;
-(id<SXDocumentControllerContainer>)documentControllerContainer;
-(id<SXResourceDataSourceContainer>)resourceDataSourceContainer;
-(id<SXAnalyticsReportingContainer>)analyticsReportingContainer;
-(id<SXAdControllerContainer>)adControllerContainer;
-(id<SXDocumentStyleRenderer>)documentStyleRenderer;
-(id<SXAppStateMonitor>)appStateMonitor;
-(void)finishArticleScrollEvents;
-(void)updateViewportForBlueprint:(id)arg1 ;
-(void)layoutForSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(SXViewportDebugger *)viewportDebugger;
-(void)setViewportDebugger:(SXViewportDebugger *)arg1 ;
-(id<SXPresentationAttributesManager>)presentationAttributesManager;
-(void)showScrollViewIfNeeded;
-(void)assistiveTechnologyStatusDidChange:(id)arg1 ;
-(BOOL)isValidBlueprintForCurrentSize:(id)arg1 ;
-(void)updatePresentationWithAttributes:(id)arg1 ;
-(void)setShouldFadeInAfterRotation:(BOOL)arg1 ;
-(SXFullscreenCanvasViewController *)fullscreenCanvasViewController;
-(SXFullscreenCanvasController *)currentCanvasController;
-(id<SXDocumentSectionManager>)documentSectionManager;
-(id<SXDocumentSectionBlueprint>)headerBlueprint;
-(id)layoutAttributesFromPresentationAttributes:(id)arg1 headerBlueprint:(id)arg2 ;
-(SXLayoutDataProvider *)layoutDataProvider;
-(SXVideoPlayerViewControllerManager *)videoPlayerViewControllerManager;
-(BOOL)shouldRestoreScrollPositionForLayoutBlueprint:(id)arg1 ;
-(BOOL)restoreScrollPositionOnNextLayout;
-(id)scrollPosition;
-(void)setRestoredScrollPosition:(SXScrollPosition *)arg1 ;
-(id<SXDocumentSectionBlueprint>)footerBlueprint;
-(UIView *)fullscreenCanvasView;
-(void)setSnapLines:(NSOrderedSet *)arg1 ;
-(BOOL)shouldFadeInAfterRotation;
-(SXScrollPosition *)restoredScrollPosition;
-(BOOL)shouldRelayoutForSize:(CGSize)arg1 ;
-(id)videoComponentViewForVideoPlayerViewController:(id)arg1 ;
-(id)scrollPositionForPlayingVideoComponentInComponentViews:(id)arg1 ;
-(id)textScrollPositionForComponentViews:(id)arg1 ;
-(id)scrollPositionForComponentViews:(id)arg1 ;
-(void)dictionaryWithComponentOffsets:(id)arg1 forComponentViews:(id)arg2 ;
-(SXComponentView *)focussedComponentView;
-(void)setFocussedComponentView:(SXComponentView *)arg1 ;
-(void)setFullscreenCanvasViewController:(SXFullscreenCanvasViewController *)arg1 ;
-(void)setFullscreenCanvasView:(UIView *)arg1 ;
-(void)setCurrentCanvasController:(SXFullscreenCanvasController *)arg1 ;
-(NSMutableArray *)viewsToMaintainPosition;
-(double)lastScrollOffset;
-(void)setLastScrollOffset:(double)arg1 ;
-(void)updateStickyHeaders;
-(id<SXScrollReporting>)scrollReporter;
-(NSMutableArray *)articleScrollEvents;
-(double)snaplineForContentOffset:(double)arg1 velocity:(double)arg2 ;
-(void)setIsPreviewing:(BOOL)arg1 ;
-(NSOrderedSet *)snapLines;
-(id)sectionHostingViewController;
-(id)sectionHostingView;
-(void)layoutManager:(id)arg1 willLayoutForViewportSize:(CGSize)arg2 layoutDataProvider:(id)arg3 ;
-(void)layoutManager:(id)arg1 didLayoutBlueprint:(id)arg2 layoutDataProvider:(id)arg3 ;
-(void)componentController:(id)arg1 didInvalidateBlueprint:(id)arg2 attributes:(id)arg3 ;
-(void)componentController:(id)arg1 willPresentBlueprint:(id)arg2 ;
-(void)componentController:(id)arg1 didPresentBlueprint:(id)arg2 ;
-(void)didTouchScrollView:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldPreventDraggingForScrollView:(id)arg1 ;
-(void)addComponentView:(id)arg1 ;
-(void)removeComponentView:(id)arg1 ;
-(void)tangierControllerDidScroll:(id)arg1 ;
-(void)tangierControllerWillStartScrolling:(id)arg1 ;
-(void)tangierControllerDidStopScrolling:(id)arg1 ;
-(void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(id)presentingViewControllerForAdController:(id)arg1 ;
-(BOOL)shouldStartPreviewForPreviewViewControllerManager:(id)arg1 ;
-(void)willStartPreviewingForPreviewViewControllerManager:(id)arg1 ;
-(void)willEndPreviewingForPreviewViewControllerManager:(id)arg1 ;
-(void)spacebarPressedWithModifierFlags:(long long)arg1 ;
-(void)loadContext:(id)arg1 analyticsReporting:(id)arg2 adControllerFactory:(id)arg3 ;
-(void)applyHeaderBlueprint:(id)arg1 ;
-(void)applyFooterBlueprint:(id)arg1 ;
-(BOOL)isPresentingFullscreenCanvas;
-(CGRect)frameOfComponentWithVideoPlayerViewController:(id)arg1 ;
-(id)headlineAccessibilityElement;
-(id<SXTransitionDataSourceProvider>)transitionDataSourceProvider;
-(id<SXPresentationDelegateContainer>)presentationDelegateContainer;
-(SXViewControllerPresentingManager *)viewControllerPresentingManager;
-(id<SXScrollPositionManager>)scrollPositionManager;
-(void)setTangierController:(SXTangierController *)arg1 ;
-(void)setArticleScrollEvents:(NSMutableArray *)arg1 ;
-(id)scrollViewForStripGalleryWithComponentIdentifier:(id)arg1 ;
-(id)scrollViewForFullscreenGalleryWithComponentIdentifier:(id)arg1 ;
-(id)interactiveCanvasController;
-(id)canvasViewController;
@end

