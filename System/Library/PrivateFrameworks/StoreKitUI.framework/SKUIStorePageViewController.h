/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIStorePageSectionsDelegate.h>
#import <libobjc.A.dylib/SKUIViewControllerTesting.h>
#import <libobjc.A.dylib/SKUIMetricsViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol SKUIStorePageDelegate;
@class SKUIClientContext, NSString, SSMetricsPageEvent, NSURLRequest, SSVLoadURLOperation, NSOperationQueue, SKUIMetricsController, NSDictionary, SKUIColorScheme, UIRefreshControl, SKUIStorePageSectionsViewController, SKUIStorePage;

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration> {

	SKUIClientContext* _clientContext;
	id<SKUIStorePageDelegate> _delegate;
	NSString* _lastDataConsumerClassName;
	SSMetricsPageEvent* _lastPageEvent;
	NSURLRequest* _lastRequest;
	BOOL _loadOnAppear;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	SKUIMetricsController* _metricsController;
	NSString* _performanceTestName;
	NSDictionary* _performanceTestOptions;
	SKUIColorScheme* _placeholderColorScheme;
	UIRefreshControl* _refreshControl;
	SKUIStorePageSectionsViewController* _sectionsViewController;
	SKUIStorePage* _storePage;

}

@property (getter=isSkLoading,nonatomic,readonly) BOOL skLoading; 
@property (nonatomic,copy) SKUIStorePage * storePage;                                //@synthesize storePage=_storePage - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIStorePageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                      //@synthesize refreshControl=_refreshControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id<SKUIStorePageDelegate>)delegate;
-(void)setDelegate:(id<SKUIStorePageDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIRefreshControl *)refreshControl;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)_colorScheme;
-(SKUIClientContext *)clientContext;
-(void)_setMetricsController:(id)arg1 ;
-(void)sectionsViewControllerDidDismissOverlayController:(id)arg1 ;
-(BOOL)performTestWithName:(id)arg1 options:(id)arg2 ;
-(void)setMetricsController:(id)arg1 ;
-(BOOL)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2 ;
-(BOOL)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2 ;
-(id)_sectionsViewController;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(void)loadURLRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_loadWithOperation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_reloadStorePage;
-(void)_setStorePage:(id)arg1 error:(id)arg2 ;
-(void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2 ;
-(void)_runScrollTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_showProductPage:(id)arg1 withPageEvent:(id)arg2 ;
-(void)_runPerformanceTestAfterPageLoad;
-(void)cancelPageLoad;
-(id)activeMetricsController;
-(BOOL)isSkLoading;
-(void)loadURL:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setStorePage:(SKUIStorePage *)arg1 ;
-(void)loadWithJSONData:(id)arg1 fromOperation:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_runPerformanceTestAfterIdle;
-(SKUIStorePage *)storePage;
@end

