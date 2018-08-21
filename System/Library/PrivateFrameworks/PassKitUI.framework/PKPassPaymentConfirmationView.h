/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPassPaymentPayStateViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_source;
@class PKFooterTransactionView, PKPassPaymentPayStateView, PKExpressTransactionState, NSObject, NSDate, NSMutableDictionary, PKPaymentService, NSString;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {

	PKFooterTransactionView* _transactionView;
	PKPassPaymentPayStateView* _payStateView;
	BOOL _animated;
	PKExpressTransactionState* _expressState;
	BOOL _receivedTransaction;
	BOOL _receivedExit;
	BOOL _needsResolution;
	BOOL _showingAlert;
	BOOL _showingResolution;
	BOOL _animatingResolution;
	NSObject*<OS_dispatch_source> _activityResolutionTimer;
	NSDate* _visibleDate;
	NSMutableDictionary* _registeredExpressObservers;
	PKPaymentService* _paymentService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)dealloc;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg1 ;
-(void)_handleExpressNotification:(id)arg1 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(BOOL)_isRegisteredForAllExpressTransactionNotifications;
-(void)_updateContentViewsWithTransitProperties:(id)arg1 ;
-(void)_disableActivityTimer;
-(void)_presentCheckmarkIfNecessary;
-(BOOL)_isExpressOutstanding;
-(void)_resolveActivityIfNecessary;
-(void)_updateContentViewsWithTransaction:(id)arg1 transitProperties:(id)arg2 ;
-(void)_updateContentViewsWithTransaction:(id)arg1 ;
-(id)_expressNotificationNames;
-(void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_isRegisteredForAnyExpressTransactionNotifications;
-(id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3 ;
@end
