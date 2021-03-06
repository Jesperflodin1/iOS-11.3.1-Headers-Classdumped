/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock, NSMutableArray;

@interface _SCRCThreadTask : NSObject {

	id _target;
	SEL _selector;
	NSConditionLock* _waitLock;
	unsigned _mask;
	NSMutableArray* _objectArray;

}
+(id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)dealloc;
-(void)fire;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)setWaitLock:(id)arg1 ;
@end

