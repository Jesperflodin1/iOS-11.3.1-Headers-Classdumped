//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentDataProviderDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString, PKPaymentDefaultDataProvider, PKPeerPaymentMessagesAppViewController;

@interface PKMessagesAppSharedContext : NSObject <PKPaymentDataProviderDelegate>
{
    NSPointerArray *_weakBubbleAppControllers;
    NSMutableArray *_pendingPrimaryHandlers;
    PKPaymentDefaultDataProvider *_paymentServiceDataProvider;
    NSMutableDictionary *_externalizedControllerStateStore;
    PKPeerPaymentMessagesAppViewController *_primaryAppController;
}

+ (id)sharedContext;
@property(readonly, nonatomic) __weak PKPeerPaymentMessagesAppViewController *primaryAppController; // @synthesize primaryAppController=_primaryAppController;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)_purgeOldCacheEntries;
- (id)_urlForMessageIdentifier:(id)arg1;
- (id)_directoryPath;
- (void)removeExternalizedControllerStateDataForMessage:(id)arg1;
- (id)externalizedControllerStateForMessage:(id)arg1;
- (void)persistExternalizedControllerState:(id)arg1 forMessage:(id)arg2;
- (void)_withPrimaryAppController:(CDUnknownBlockType)arg1;
- (void)handlePaymentRequestMessage:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revealPrimaryAppController:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *bubbleAppControllers;
- (void)_registerAppViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
