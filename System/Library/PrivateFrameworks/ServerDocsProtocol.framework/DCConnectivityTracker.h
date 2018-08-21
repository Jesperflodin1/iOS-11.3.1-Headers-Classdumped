/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSCountedSet, SDFFreshObjectQueue;

@interface DCConnectivityTracker : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {

	NSString* _server;
	NSCountedSet* _delegates;
	SDFFreshObjectQueue* _events;
	BOOL _isConnected;

}

@property (readonly) BOOL isConnected;                              //@synthesize isConnected=_isConnected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectivityTrackerForService:(id)arg1 ;
+(id)serverFromURL:(id)arg1 ;
-(id)initWithServer:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(BOOL)isConnected;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)URLSession:(id)arg1 didStartTask:(id)arg2 ;
-(void)_recomputeConnectivityState;
-(id)_eventTypeForError:(id)arg1 ;
-(void)_addEvent:(id)arg1 task:(id)arg2 ;
-(void)_addEventWithError:(id)arg1 task:(id)arg2 ;
@end

