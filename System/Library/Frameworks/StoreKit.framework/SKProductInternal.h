/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, SKProductDiscount, NSDecimalNumber, NSLocale, SKProductSubscriptionPeriod;

@interface SKProductInternal : NSObject {

	NSString* _contentVersion;
	BOOL _downloadable;
	NSArray* _downloadContentLengths;
	SKProductDiscount* _introductoryPrice;
	NSString* _localeIdentifier;
	NSString* _localizedDescription;
	NSString* _localizedTitle;
	NSDecimalNumber* _price;
	NSLocale* _priceLocale;
	NSString* _productIdentifier;
	SKProductSubscriptionPeriod* _subscriptionPeriod;

}
-(void)dealloc;
@end

