/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface ICAsyncOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(NSError *)error;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
@end

