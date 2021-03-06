/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSUWidthLimitedQueue : NSObject {

	int mReaderCount;
	int mLimit;
	NSObject*<OS_dispatch_queue> mManagerQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	os_unfair_lock_s mUnfairLock;

}
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(id)targetDispatchQueue;
@end

