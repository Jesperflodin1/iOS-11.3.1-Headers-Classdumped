/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class BSMachPortSendRight, NSObject, NSString;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable> {

	BSMachPortSendRight* _sendRight;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _source;
	BOOL _activated;
	BOOL _invalidated;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)monitorSendRight:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(id)_callOutQueue;
-(id)initWithSendRight:(id)arg1 ;
-(void)activateWithHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(BOOL)isValid;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

