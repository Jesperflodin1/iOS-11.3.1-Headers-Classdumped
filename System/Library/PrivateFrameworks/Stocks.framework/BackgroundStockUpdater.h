/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/StockUpdater.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSDate, NSURLSession, NSString;

@interface BackgroundStockUpdater : StockUpdater <NSURLSessionTaskDelegate> {

	NSDate* _earliestBeginDate;
	/*^block*/id _finishEventsHandler;

}

@property (nonatomic,copy) NSDate * earliestBeginDate;              //@synthesize earliestBeginDate=_earliestBeginDate - In the implementation block
@property (nonatomic,copy) id finishEventsHandler;                  //@synthesize finishEventsHandler=_finishEventsHandler - In the implementation block
@property (nonatomic,readonly) NSURLSession * session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)earliestBeginDate;
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(NSURLSession *)session;
-(void)failWithError:(id)arg1 ;
-(id)taskForRequest:(id)arg1 delegate:(id)arg2 ;
-(void)reestablishBackgroundSessionForManager:(id)arg1 withFinishEventsHandler:(/*^block*/id)arg2 ;
-(id)_backgroundSession;
-(id)finishEventsHandler;
-(void)setFinishEventsHandler:(id)arg1 ;
-(void)_createDefaultSession;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
@end

