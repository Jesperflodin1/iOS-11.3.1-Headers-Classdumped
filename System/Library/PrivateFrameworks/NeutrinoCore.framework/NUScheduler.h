/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NUJobQueue;

@interface NUScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NUJobQueue* _prepareQueue;
	NUJobQueue* _renderQueue;
	NUJobQueue* _completeQueue;

}
+(id)sharedScheduler;
-(id)init;
-(id)debugDescription;
-(void)cancelJobsForRenderContext:(id)arg1 ;
-(void)_enqueueJobsForRequests:(id)arg1 withGroup:(id)arg2 ;
-(void)_cancelPreviousJobs:(id)arg1 ;
-(void)_observeRenderJob:(id)arg1 withGroup:(id)arg2 ;
-(void)_enqueueDependentJobsForRenderJob:(id)arg1 ;
-(void)_enqueueRenderJob:(id)arg1 toStage:(long long)arg2 ;
-(id)_queueForStage:(long long)arg1 ;
-(void)_resumeRenderJob:(id)arg1 ;
-(void)submitRequests:(id)arg1 withGroup:(id)arg2 ;
@end

