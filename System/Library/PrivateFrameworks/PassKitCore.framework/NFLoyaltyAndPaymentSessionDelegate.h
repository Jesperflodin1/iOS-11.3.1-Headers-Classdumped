/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFLoyaltyAndPaymentSessionDelegate <NSObject>
@optional
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectField:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didReceiveButtonPressForApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
-(void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(BOOL)arg2;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2;

@end

