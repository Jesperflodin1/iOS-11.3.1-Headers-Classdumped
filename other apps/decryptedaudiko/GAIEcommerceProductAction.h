//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface GAIEcommerceProductAction : NSObject
{
    NSMutableDictionary *_parameters;
}

@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)build;
- (id)setProductListSource:(id)arg1;
- (id)setProductActionList:(id)arg1;
- (id)setCheckoutOption:(id)arg1;
- (id)setCheckoutStep:(id)arg1;
- (id)setCouponCode:(id)arg1;
- (id)setShipping:(id)arg1;
- (id)setTax:(id)arg1;
- (id)setRevenue:(id)arg1;
- (id)setAffiliation:(id)arg1;
- (id)setTransactionId:(id)arg1;
- (id)setAction:(id)arg1;
- (id)setNumber:(id)arg1 forKey:(id)arg2;
- (id)setString:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

