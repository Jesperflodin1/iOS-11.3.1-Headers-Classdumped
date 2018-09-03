//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSString, SKProductsRequest;
@protocol OS_dispatch_queue;

@interface FIRAProductsRequest : NSObject <SKProductsRequestDelegate>
{
    SKProductsRequest *_productsRequest;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)requestProductsWithProductIdentifiers:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithProductIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

