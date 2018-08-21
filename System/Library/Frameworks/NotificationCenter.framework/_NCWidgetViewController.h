/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/_NCWidgetViewController_Service_IPC.h>
#import <libobjc.A.dylib/NCSizeObservingViewDelegate.h>

@protocol OS_dispatch_queue, NCWidgetProvidingPrivate;
@class NSObject, NSMapTable, UIScrollViewDelayedTouchesBeganGestureRecognizer, UIViewController, UIView, NSString;

@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, NCSizeObservingViewDelegate> {

	NSObject*<OS_dispatch_queue> _remoteViewControllerProxyQueue;
	NSMapTable* _wrappedAppearStatesToOpenTransactionIDs;
	UIScrollViewDelayedTouchesBeganGestureRecognizer* _touchDelayGestureRecognizer;
	CGRect _initialBounds;
	BOOL _snapshotTimestampsEnabled;
	BOOL _clientUsesAutolayout;
	struct {
		unsigned implementsPerformUpdateWithCompletionHandler : 1;
		unsigned implementsMarginInsets : 1;
		unsigned implementsActiveDisplayModeDidChange : 1;
		unsigned implementsDidBecomeForeground : 1;
		unsigned implementsVisibleFrameDidChange : 1;
	}  _contentProvidingViewControllerFlags;
	UIViewController*<NCWidgetProvidingPrivate> _contentProvidingViewController;
	long long _visibilityState;
	UIView* _contentView;
	NSString* _widgetIdentifier;
	NSString* _containerIdentifier;
	UIEdgeInsets _clientMarginInsets;

}

@property (setter=_setContentView:,getter=_contentView,nonatomic,retain) UIView * contentView;                                                               //@synthesize contentView=_contentView - In the implementation block
@property (assign,setter=_setClientMarginInsets:,getter=_clientMarginInsets,nonatomic) UIEdgeInsets clientMarginInsets;                                      //@synthesize clientMarginInsets=_clientMarginInsets - In the implementation block
@property (getter=_contentProvidingViewController,nonatomic,retain) UIViewController*<NCWidgetProvidingPrivate> contentProvidingViewController;              //@synthesize contentProvidingViewController=_contentProvidingViewController - In the implementation block
@property (getter=_widgetIdentifier,nonatomic,copy) NSString * widgetIdentifier;                                                                             //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (getter=_containerIdentifier,nonatomic,copy) NSString * containerIdentifier;                                                                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,setter=_setVisibilityState:,getter=_visibilityState,nonatomic) long long visibilityState;                                                  //@synthesize visibilityState=_visibilityState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(void)_reduceTransparencyDidChange:(id)arg1 ;
-(id)_contentView;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)delayed:(id)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_visibilityState;
-(void)_setVisibilityState:(long long)arg1 ;
-(void)_setContentView:(id)arg1 ;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)_setContentProvidingViewController:(id)arg1 ;
-(void)_processInputItems:(id)arg1 initialActiveDisplayMode:(long long*)arg2 ;
-(id)_widgetIdentifier;
-(void)_setVisibilityState:(long long)arg1 force:(BOOL)arg2 ;
-(long long)_clientLargestSupportedDisplayMode;
-(void)_clientLargestSupportedDisplayModeDidChange;
-(void)_setActiveDisplayMode:(long long)arg1 unconditionallyNotifyingContentProvidingViewController:(BOOL)arg2 ;
-(void)_requestMarginInsets;
-(void)_requestPreferredViewHeight:(double)arg1 ;
-(void)_enqueueProxyRequest:(/*^block*/id)arg1 ;
-(void)_closeTransactionWithAppearState:(int)arg1 ;
-(double)_effectiveHeightForRequestedHeight:(double)arg1 ;
-(id)_contentProvidingViewController;
-(double)_clientPreferredContentHeightPermittingAutolayout:(BOOL)arg1 didUseFittingSize:(BOOL*)arg2 ;
-(double)_clientPreferredContentHeight;
-(void)_setMaximumWidth:(double)arg1 forDisplayMode:(long long)arg2 ;
-(id)_widgetExtensionContext;
-(void)_notifyContentProvidingViewControllerOfActiveDisplayModeChange;
-(void)_encodeLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(/*^block*/id)arg3 ;
-(void)_performUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_setVisibleFrame:(CGRect)arg1 ;
-(void)setContentProvidingViewController:(UIViewController*<NCWidgetProvidingPrivate>)arg1 ;
-(UIEdgeInsets)_clientMarginInsets;
-(void)_setClientMarginInsets:(UIEdgeInsets)arg1 ;
-(id)_containerIdentifier;
-(void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(/*^block*/id)arg3 ;
-(void)__performUpdateWithReplyHandler:(/*^block*/id)arg1 ;
-(void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)__updateVisibilityState:(long long)arg1 ;
-(void)__updateVisibleFrame:(CGRect)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)__setActiveDisplayMode:(long long)arg1 ;
-(void)__setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
@end

