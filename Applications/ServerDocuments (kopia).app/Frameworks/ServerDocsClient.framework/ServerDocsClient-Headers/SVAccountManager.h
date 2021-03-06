//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, ACAccountType, NSArray;

@interface SVAccountManager : NSObject
{
    ACAccountStore *accountStore;
    ACAccountType *serverAccountType;
    NSArray *cachedServerAccounts;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)arg1;
- (id)serverDocumentsAccounts;
- (void)accountStoreDidChange;
- (void)getServerDocumentsAccounts;
- (id)init;

@end

