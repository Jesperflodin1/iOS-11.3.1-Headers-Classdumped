/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MFNetworkObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)execute;
@end

