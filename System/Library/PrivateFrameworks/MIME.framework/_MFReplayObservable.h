/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@class NSLock, MFObservable, MFQueue;

@interface _MFReplayObservable : MFObservable {

	NSLock* _lock;
	MFObservable* _observable;
	MFQueue* _queue;

}
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(void)_enqueue:(id)arg1 ;
-(id)initWithObservable:(id)arg1 count:(unsigned long long)arg2 ;
@end

