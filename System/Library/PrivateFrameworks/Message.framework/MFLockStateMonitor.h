/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MFObserver;
@class NSObject, MFObservable;

@interface MFLockStateMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	MFObservable*<MFObserver> _observable;
	BOOL _isLocked;

}

@property (nonatomic,readonly) MFObservable * lockStateObservable; 
@property (getter=isLocked,readonly) BOOL locked; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isLocked;
-(void)_receiveLockState:(BOOL)arg1 ;
-(MFObservable *)lockStateObservable;
@end

