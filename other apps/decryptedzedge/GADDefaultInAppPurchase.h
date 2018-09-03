//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInAppPurchase, NSString, SKPaymentTransaction;

@interface GADDefaultInAppPurchase : NSObject
{
    NSString *_productID;
    long long _quantity;
    SKPaymentTransaction *_paymentTransaction;
    GADInAppPurchase *_inAppPurchase;
}

+ (void)disableDefaultPurchaseFlow;
+ (void)enableDefaultPurchaseFlowWithDelegate:(id)arg1;
@property(retain, nonatomic) GADInAppPurchase *inAppPurchase; // @synthesize inAppPurchase=_inAppPurchase;
@property(retain, nonatomic) SKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)finishTransaction;

@end

