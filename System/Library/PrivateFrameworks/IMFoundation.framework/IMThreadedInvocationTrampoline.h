/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {

	NSThread* _thread;
	BOOL _immediateForMatchingThread;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3 ;
@end

