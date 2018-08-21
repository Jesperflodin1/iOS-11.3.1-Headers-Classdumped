/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKNumberPadSuggestionsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>
#import <libobjc.A.dylib/PKPerformActionView.h>

@protocol PKPerformActionViewDelegate, PKPaymentDataProvider;
@class PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKNumberPadSuggestionsView, PKPass, PKPaymentPassAction, PKNumericSuggestionsEnterValueAlgorithm, PKNumericSuggestionLastInput, PKTransitPassProperties, NSDecimalNumber, PKPeerPaymentService, PKPeerPaymentAccount, NSString, UITextField;

@interface PKPerformActionEnterValueView : UIView <PKNumberPadSuggestionsViewDelegate, UITextFieldDelegate, PKPaymentDataProviderDelegate, PKEnterCurrencyAmountViewDelegate, PKPerformActionView> {

	PKEnterCurrencyAmountView* _enterCurrencyAmountView;
	PKEnterValueNewBalanceView* _newBalanceView;
	PKNumberPadSuggestionsView* _suggestionView;
	PKPass* _pass;
	PKPaymentPassAction* _action;
	PKNumericSuggestionsEnterValueAlgorithm* _suggestionGenerator;
	PKNumericSuggestionLastInput* _lastInput;
	PKTransitPassProperties* _transitProperties;
	NSDecimalNumber* _currentAmount;
	id<PKPerformActionViewDelegate> _delegate;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _peerPaymentAccount;
	NSDecimalNumber* _cardBalance;
	NSDecimalNumber* _minLoadAmount;
	NSDecimalNumber* _maxLoadAmount;
	NSDecimalNumber* _minLoadedBalance;
	NSDecimalNumber* _maxLoadedBalance;

}

@property (nonatomic,copy) NSDecimalNumber * cardBalance;                                  //@synthesize cardBalance=_cardBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minLoadAmount;                                //@synthesize minLoadAmount=_minLoadAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxLoadAmount;                                //@synthesize maxLoadAmount=_maxLoadAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minLoadedBalance;                             //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxLoadedBalance;                             //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * amountTextField; 
-(id)init;
-(void)layoutSubviews;
-(id<PKPerformActionViewDelegate>)delegate;
-(void)setDelegate:(id<PKPerformActionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)_createSubviews;
-(id)pass;
-(UITextField *)amountTextField;
-(void)willDismissViewController;
-(id)transactionAmount;
-(id)transactionCurrency;
-(double)_amountTopPadding;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(void)setMinBalance:(id)arg1 ;
-(void)setMaxLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setMinLoadAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)_isCurrentAmountValid;
-(void)setCardBalance:(NSDecimalNumber *)arg1 ;
-(BOOL)_shouldShakeCard:(id)arg1 ;
-(void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)serviceProviderData;
-(void)saveLastInputValues;
-(NSDecimalNumber *)cardBalance;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(NSDecimalNumber *)minLoadedBalance;
-(NSDecimalNumber *)maxLoadedBalance;
-(void)setMinLoadedBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxLoadedBalance:(NSDecimalNumber *)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(void)_updatePeerPaymentAccount;
-(void)_readCurrentBalance;
-(void)_updateCurrentBalanceWithUpdatedTransitProperties;
@end

