/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol OS_dispatch_queue, TSUURLTrackerDelegate;
@class NSURL, NSOperationQueue, NSSet, NSObject, NSData, NSError, NSString;

@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasStarted;
	NSData* _bookmarkDataIfAvailable;
	NSError* _latestError;
	id<TSUURLTrackerDelegate> _delegate;
	NSOperationQueue* _presentedItemOperationQueue;
	NSURL* _URLIfAvailable;

}

@property (copy) NSURL * URLIfAvailable;                                                 //@synthesize URLIfAvailable=_URLIfAvailable - In the implementation block
@property (readonly) NSData * bookmarkData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(NSURL *)URLIfAvailable;
-(void)startOrResume;
-(id)_URLAndReturnError:(id*)arg1 ;
-(void)setURLIfAvailable:(NSURL *)arg1 ;
-(id)_bookmarkData;
-(id)_bookmarkDataAndReturnError:(id*)arg1 ;
-(id)bookmarkDataAndReturnError:(id*)arg1 ;
-(id)init;
-(NSString *)description;
-(void)stop;
-(id)_description;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1 ;
-(void)pause;
-(NSData *)bookmarkData;
@end

