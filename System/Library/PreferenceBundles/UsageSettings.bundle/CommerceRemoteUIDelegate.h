/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol CommerceRemoteUIDelegateDelegate;
@class UINavigationController, UIViewController, NSMutableArray, NSOperationQueue, ISDialog, UIAlertController, ISURLOperation, NSString, NSDictionary, NSNumber;

@interface CommerceRemoteUIDelegate : NSObject <ISStoreURLOperationDelegate, RUIObjectModelDelegate> {

	UINavigationController* _navigationController;
	UINavigationController* _parentNavigationController;
	UIViewController* _topViewController;
	BOOL _modallyPresented;
	NSMutableArray* _objectModels;
	NSOperationQueue* _queue;
	ISDialog* _dialog;
	BOOL _registeredDialogNotification;
	BOOL _registeredAuthNotification;
	BOOL _cancelled;
	UIAlertController* _alertController;
	/*^block*/id _queuedCompletionBlock;
	ISURLOperation* _finishingOperation;
	BOOL _skipRetryWithoutToken;
	BOOL _skipCompletionAlert;
	BOOL _supportsModernAlerts;
	BOOL _shouldOfferFamilySharePlansOnly;
	BOOL _skipGoBack;
	BOOL _didJustCancelDialog;
	id<CommerceRemoteUIDelegateDelegate> _delegate;
	NSString* _purchaseToken;
	NSDictionary* _buyParameters;
	NSDictionary* _requestHeaders;
	long long _failureType;

}

@property (assign,nonatomic) BOOL skipGoBack;                                                           //@synthesize skipGoBack=_skipGoBack - In the implementation block
@property (assign,nonatomic) BOOL didJustCancelDialog;                                                  //@synthesize didJustCancelDialog=_didJustCancelDialog - In the implementation block
@property (nonatomic,copy) NSString * purchaseToken;                                                    //@synthesize purchaseToken=_purchaseToken - In the implementation block
@property (nonatomic,copy) NSDictionary * buyParameters;                                                //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * requestHeaders;                                               //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (assign,nonatomic) long long failureType;                                                     //@synthesize failureType=_failureType - In the implementation block
@property (assign,nonatomic,__weak) id<CommerceRemoteUIDelegateDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skipRetryWithoutToken;                                                //@synthesize skipRetryWithoutToken=_skipRetryWithoutToken - In the implementation block
@property (assign,nonatomic) BOOL skipCompletionAlert;                                                  //@synthesize skipCompletionAlert=_skipCompletionAlert - In the implementation block
@property (assign,nonatomic) BOOL supportsModernAlerts;                                                 //@synthesize supportsModernAlerts=_supportsModernAlerts - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferFamilySharePlansOnly;                                      //@synthesize shouldOfferFamilySharePlansOnly=_shouldOfferFamilySharePlansOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
-(void)cleanupLoader;
-(void)setFailureType:(long long)arg1 ;
-(void)pushSpinner;
-(void)unregisterAuthNotification;
-(long long)_statusCodeForFinishedOperation:(id)arg1 ;
-(void)_handleFinishForOperation:(id)arg1 withOutput:(id)arg2 ;
-(BOOL)skipGoBack;
-(void)setSkipGoBack:(BOOL)arg1 ;
-(BOOL)didJustCancelDialog;
-(void)setDidJustCancelDialog:(BOOL)arg1 ;
-(void)_handleOperationError:(id)arg1 ;
-(BOOL)_isPurchaseTokenOperation:(id)arg1 ;
-(void)retryPurchaseWithoutToken;
-(void)cancelFlowBecause:(id)arg1 ;
-(void)errorWithTitle:(id)arg1 andExplanation:(id)arg2 dismissedCompletion:(/*^block*/id)arg3 ;
-(void)userCompletedFlow:(long long)arg1 ;
-(void)cancelRemoteUIKeeping:(id)arg1 ;
-(BOOL)_hasUnfinishedOperations;
-(void)setPurchaseToken:(NSString *)arg1 ;
-(void)makeBuyRequest:(id)arg1 forceAuth:(BOOL)arg2 usePurchaseToken:(BOOL)arg3 ;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 needsAuth:(BOOL)arg3 ;
-(NSString *)purchaseToken;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 needsAuth:(BOOL)arg3 localAuth:(BOOL)arg4 usePurchaseToken:(BOOL)arg5 ;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 needsAuth:(BOOL)arg3 localAuth:(BOOL)arg4 ;
-(void)handleDialog:(id)arg1 ;
-(BOOL)_shouldSuppressDialog:(id)arg1 failureType:(long long)arg2 ;
-(void)_presentAlertWithDialog:(id)arg1 ;
-(void)_dismissAlertsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_handleResponseForDialog:(id)arg1 atIndex:(long long)arg2 ;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 ;
-(BOOL)_isSuccessfulPurchaseTokenOperation:(id)arg1 ;
-(id<CommerceRemoteUIDelegateDelegate>)delegate;
-(void)setDelegate:(id<CommerceRemoteUIDelegateDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)failureType;
-(id)initWithNavigationController:(id)arg1 needsModalPresentation:(BOOL)arg2 ;
-(BOOL)shouldOfferFamilySharePlansOnly;
-(void)setShouldOfferFamilySharePlansOnly:(BOOL)arg1 ;
-(BOOL)skipRetryWithoutToken;
-(void)setSkipRetryWithoutToken:(BOOL)arg1 ;
-(BOOL)skipCompletionAlert;
-(void)setSkipCompletionAlert:(BOOL)arg1 ;
-(BOOL)supportsModernAlerts;
-(void)setSupportsModernAlerts:(BOOL)arg1 ;
-(void)loadURLforKey:(id)arg1 ;
-(void)purchaseWithToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3 ;
-(void)cancelRemoteUI;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(NSDictionary *)buyParameters;
-(void)setBuyParameters:(NSDictionary *)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(id)presentationContext;
-(NSDictionary *)requestHeaders;
-(void)setRequestHeaders:(NSDictionary *)arg1 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end
