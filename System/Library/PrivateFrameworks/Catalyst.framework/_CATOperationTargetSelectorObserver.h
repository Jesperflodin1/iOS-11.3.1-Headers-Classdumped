/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATOperationObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver> {

	id _target;
	SEL _selector;
	unsigned long long _events;
	id _userInfo;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) id target;                                               //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                            //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) unsigned long long events;                               //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) id userInfo;                                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)userInfo;
-(id)target;
-(SEL)selector;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)operationDidStart:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 events:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5 ;
-(void)invokeActionWithOperation:(id)arg1 ;
-(unsigned long long)events;
-(void)operationDidFinish:(id)arg1 ;
-(void)operationDidProgress:(id)arg1 ;
@end

