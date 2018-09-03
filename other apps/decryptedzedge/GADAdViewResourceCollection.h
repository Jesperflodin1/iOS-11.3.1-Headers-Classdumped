//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdView, GADSafeBrowsingReporter, NSData, NSMutableArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface GADAdViewResourceCollection : NSObject
{
    NSMutableArray *_resources;
    NSMutableDictionary *_requestIndexForCanonicalURL;
    NSMutableDictionary *_requestIndicesForRedirectToURL;
    NSData *_imageData;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSURL *_mainDocumentURL;
    GADSafeBrowsingReporter *_safeBrowsingReporter;
    NSMutableArray *_clickthroughURLs;
    GADAdView *_adView;
}

+ (void)setGreedyCollectionEnabled:(_Bool)arg1;
@property(readonly, nonatomic) __weak GADAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic, getter=isMalicious) _Bool malicious;
- (void)adViewDidFinishLayout;
- (void)addAutoClickRequest:(id)arg1;
- (void)addClickthroughURL:(id)arg1;
- (id)resourceForRequest:(id)arg1;
- (void)addResourceData:(id)arg1 forRequest:(id)arg2;
- (void)addURLResponse:(id)arg1 forRequest:(id)arg2;
- (void)addURLRequest:(id)arg1;
- (void)addResourceRequest:(id)arg1;
- (void)addParentForResource:(id)arg1;
- (id)referringResourceForRequest:(id)arg1;
- (id)redirectSourceForRequest:(id)arg1;
- (void)addRedirectDestinationForResource:(id)arg1;
- (void)updateSafeBrowsingReporter;
@property(copy) NSURL *mainDocumentURL;
- (id)init;
- (id)initWithAdView:(id)arg1;

@end

