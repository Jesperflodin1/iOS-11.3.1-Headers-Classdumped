/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PGSetterThrottler : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	id _value;
	NSObject*<OS_dispatch_queue> _throttleQueue;
	id _throttledValue;
	BOOL _busy;
	BOOL _pending;

}

@property (nonatomic,retain) id value; 
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)initWithBlock:(/*^block*/id)arg1 usingQueue:(id)arg2 ;
-(void)_setValue;
@end

