/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HAPCharacteristicReadCompletionTuple : HMFObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,copy) id handler;                                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)readCompletionTupleWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

