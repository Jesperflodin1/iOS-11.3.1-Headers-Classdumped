/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, CUTResult, CUTImplicitPromise;

@interface CUTPromise : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	BOOL _done;
	CUTResult* _result;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                  //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) BOOL done;                                           //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) CUTImplicitPromise * implicitPromise; 
-(void)_fulfillWithResult:(id)arg1 ;
-(CUTImplicitPromise *)implicitPromise;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(NSObject*<OS_dispatch_queue>)queue;
-(CUTResult *)result;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(id)_initWithQueue:(id)arg1 ;
-(void)setResult:(CUTResult *)arg1 ;
@end
