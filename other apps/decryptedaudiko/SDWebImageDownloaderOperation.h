//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "SDWebImageDownloaderOperationInterface-Protocol.h"
#import "SDWebImageOperation-Protocol.h"

@class NSMutableArray, NSMutableData, NSObject, NSString, NSURLCredential, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface SDWebImageDownloaderOperation : NSOperation <SDWebImageDownloaderOperationInterface, SDWebImageOperation, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    unsigned long long width;
    unsigned long long height;
    long long orientation;
    _Bool responseFromCached;
    _Bool _executing;
    _Bool _finished;
    _Bool _shouldDecompressImages;
    _Bool _shouldUseCredentialStorage;
    NSURLRequest *_request;
    NSURLSessionTask *_dataTask;
    NSURLCredential *_credential;
    unsigned long long _options;
    long long _expectedSize;
    NSURLResponse *_response;
    NSMutableArray *_callbackBlocks;
    NSMutableData *_imageData;
    NSURLSession *_unownedSession;
    NSURLSession *_ownedSession;
    NSObject<OS_dispatch_queue> *_barrierQueue;
    unsigned long long _backgroundTaskId;
}

+ (long long)orientationFromPropertyValue:(long long)arg1;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) NSURLSession *ownedSession; // @synthesize ownedSession=_ownedSession;
@property(nonatomic) __weak NSURLSession *unownedSession; // @synthesize unownedSession=_unownedSession;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSMutableArray *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) _Bool shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
@property(retain, nonatomic) NSURLSessionTask *dataTask; // @synthesize dataTask=_dataTask;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)callCompletionBlocksWithImage:(id)arg1 imageData:(id)arg2 error:(id)arg3 finished:(_Bool)arg4;
- (void)callCompletionBlocksWithError:(id)arg1;
- (_Bool)shouldContinueWhenAppEntersBackground;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)isConcurrent;
- (void)reset;
- (void)done;
- (void)cancelInternal;
- (void)cancel;
- (void)start;
- (_Bool)cancel:(id)arg1;
- (id)callbacksForKey:(id)arg1;
- (id)addHandlersForProgress:(CDUnknownBlockType)arg1 completed:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 inSession:(id)arg2 options:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

