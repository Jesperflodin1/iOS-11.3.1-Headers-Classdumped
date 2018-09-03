//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURL, NSURLConnection, NSURLResponse;
@protocol GADURLConnectionDelegate;

@interface GADURLConnection : NSObject <NSURLConnectionDataDelegate>
{
    _Bool _isInProgress;
    _Bool _allowCache;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    id <GADURLConnectionDelegate> _delegate;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_receivedData;
}

+ (void)clearCache;
+ (id)cacheKeyForURL:(id)arg1;
+ (id)defaultCachePath;
+ (id)memoryCache;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <GADURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowCache; // @synthesize allowCache=_allowCache;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) _Bool isInProgress; // @synthesize isInProgress=_isInProgress;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (_Bool)tryToStoreResponseAndData;
- (id)cachedResponseForURL:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)stop;
- (_Bool)startWithRequestURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

