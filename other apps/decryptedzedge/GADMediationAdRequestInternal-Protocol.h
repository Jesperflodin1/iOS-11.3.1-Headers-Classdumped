//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediationAdRequest-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol GADMediationAdRequestInternal <GADMediationAdRequest>
- (NSString *)userRequestAgent;
- (NSString *)currentAdapterName;
- (NSArray *)adapterNames;
- (NSDictionary *)extras;
- (NSDictionary *)inlineAd;
@end
