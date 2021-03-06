/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTest/XCTResult.h>

@protocol OS_dispatch_queue;
@class XCTPromise, XCTWaiter, NSObject;

@interface XCTFutureResult : XCTResult {

	BOOL _hasWaited;
	BOOL _hasFinished;
	double _deadline;
	XCTPromise* _promise;
	XCTWaiter* _waiter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) double deadline;                                 //@synthesize deadline=_deadline - In the implementation block
@property (readonly) XCTPromise * promise;                            //@synthesize promise=_promise - In the implementation block
@property (readonly) XCTWaiter * waiter;                              //@synthesize waiter=_waiter - In the implementation block
@property (assign) BOOL hasWaited;                                    //@synthesize hasWaited=_hasWaited - In the implementation block
@property (assign) BOOL hasFinished;                                  //@synthesize hasFinished=_hasFinished - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(BOOL)hasWaited;
-(void)setHasWaited:(BOOL)arg1 ;
-(double)deadline;
-(void)setHasFinished:(BOOL)arg1 ;
-(BOOL)hasFinished;
-(void)_waitForFulfillment;
-(void)setValue:(id)arg1 ;
-(id)value;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setError:(id)arg1 ;
-(id)error;
-(id)initWithTimeout:(double)arg1 description:(id)arg2 ;
-(XCTPromise *)promise;
-(XCTWaiter *)waiter;
@end

