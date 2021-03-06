/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCOperationThrottlerDelegate, OS_dispatch_queue;
@class NSObject;

@interface FCBoostableOperationThrottler : NSObject <FCOperationThrottler> {

	BOOL _workPending;
	os_unfair_lock_s _workPendingLock;
	id<FCOperationThrottlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;

}

@property (assign,nonatomic,__weak) id<FCOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialWorkQueue;                  //@synthesize serialWorkQueue=_serialWorkQueue - In the implementation block
@property (assign,nonatomic) BOOL workPending;                                              //@synthesize workPending=_workPending - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s workPendingLock;                              //@synthesize workPendingLock=_workPendingLock - In the implementation block
@property (assign) BOOL suspended; 
-(id)init;
-(id<FCOperationThrottlerDelegate>)delegate;
-(void)setDelegate:(id<FCOperationThrottlerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickleWithQualityOfService:(long long)arg1 ;
-(void)tickleWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)workPending;
-(void)setWorkPending:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialWorkQueue;
-(void)setSerialWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(os_unfair_lock_s)workPendingLock;
-(void)setWorkPendingLock:(os_unfair_lock_s)arg1 ;
@end

