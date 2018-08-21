/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, TCMessageContext, TCProgressContext;

@interface TCBackgroundThreadManager : NSObject {

	id<TCCancelDelegate> mCancelDelegate;
	BOOL mIsWaiting;
	unsigned long long mBlockCount;
	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_group> mGroup;
	NSObject*<OS_dispatch_queue> mProgressReportingQueue;
	TCMessageContext* mMessageContext;
	TCProgressContext* mProgressContext;

}

@property (readonly) BOOL isCancelled; 
@property (retain) TCMessageContext * messageContext; 
@property (retain) TCProgressContext * progressContext; 
-(void)dealloc;
-(BOOL)isCancelled;
-(TCProgressContext *)progressContext;
-(void)setProgressContext:(TCProgressContext *)arg1 ;
-(void)setMessageContext:(TCMessageContext *)arg1 ;
-(void)reportWarning:(id)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 ;
-(void)addASyncBlock:(/*^block*/id)arg1 ;
-(void)waitUntilComplete;
-(TCMessageContext *)messageContext;
@end

