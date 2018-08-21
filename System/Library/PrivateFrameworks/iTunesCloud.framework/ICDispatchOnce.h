/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSObject;

@interface ICDispatchOnce : NSObject {

	/*^block*/id _booleanHandler;
	atomic_flag _didFire;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _objectHandler;
	ICDispatchOnce* _strongSelf;
	double _timeout;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
-(void)failWithError:(id)arg1 ;
-(void)_invalidate;
-(void)startWithTimeout:(double)arg1 queue:(id)arg2 ;
-(id)initWithBooleanHandler:(/*^block*/id)arg1 ;
-(id)initWithObjectHandler:(/*^block*/id)arg1 ;
-(void)finishWithBooleanResult:(BOOL)arg1 error:(id)arg2 ;
-(void)finishWithObjectResult:(id)arg1 error:(id)arg2 ;
-(void)startWithTimeout:(double)arg1 ;
@end

