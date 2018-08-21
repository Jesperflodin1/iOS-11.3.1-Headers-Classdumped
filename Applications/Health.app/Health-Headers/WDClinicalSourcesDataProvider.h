//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthRecordsStore;

@interface WDClinicalSourcesDataProvider : NSObject
{
    HKHealthRecordsStore *_healthRecordsStore;
}

+ (CDUnknownBlockType)_objectCompletionOnMainQueue:(CDUnknownBlockType)arg1 cancellationToken:(id)arg2;
@property(readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (void).cxx_destruct;
- (id)_orderAccountsForDisplay:(id)arg1;
- (id)_createLoginSafariViewControllerForURL:(id)arg1;
- (void)beginReloginSessionForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginInitialLoginSessionForGateway:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)gatewaysWithExistingAccountsFromGateways:(id)arg1;
- (id)nameAndFormattedBirthDateForAccountOwner:(id)arg1;
- (id)fetchAccountOwnerForSource:(id)arg1;
- (void)fetchAccountOwnerForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchAccountForSource:(id)arg1;
- (void)fetchAccountForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_logoForFallback:(id)arg1 size:(double)arg2;
- (id)_fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchCachedLogoForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLogoForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountsForDisplayForGateways:(id)arg1;
- (id)_accountsForGateways:(id)arg1;
- (id)fetchAccessedAccountsForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)accountsForDisplay;
- (_Bool)anyRegisteredAccounts;
- (void)_fetchAccountsForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithHealthRecordsStore:(id)arg1;

@end
