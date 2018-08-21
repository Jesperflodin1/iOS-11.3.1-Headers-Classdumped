/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {

	NSLock* _queueLock;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _queueSource;
	NSMutableArray* _queue;
	NSMutableArray* _brailleEventQueue;
	id _target;
	BOOL _isValid;

}
-(void)invalidate;
-(void)dealloc;
-(BOOL)isValid;
-(void)start;
-(id)initWithTarget:(id)arg1 ;
-(void)_processQueue;
-(void)enqueueEvent:(id)arg1 ;
@end

