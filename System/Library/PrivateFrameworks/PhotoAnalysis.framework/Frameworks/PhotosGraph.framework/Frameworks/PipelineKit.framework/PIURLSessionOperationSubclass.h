/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PipelineKit/PIOperationSubclass.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURL, NSURLSessionConfiguration, NSURLSession, NSURLSessionTask, NSString;

@interface PIURLSessionOperationSubclass : PIOperationSubclass <NSURLSessionTaskDelegate> {

	NSURL* _url;
	NSURLSessionConfiguration* _sessionConfiguration;
	NSURLSession* _session;
	NSURLSessionTask* _sessionTask;

}

@property (nonatomic,copy,readonly) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) NSURLSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * sessionTask;                                //@synthesize sessionTask=_sessionTask - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
+(id)noCacheConfiguration;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
-(NSURL *)url;
-(NSURLSession *)session;
-(void)cleanup;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(id)initWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)execute;
-(NSURLSessionTask *)sessionTask;
-(void)setSessionTask:(NSURLSessionTask *)arg1 ;
@end

