/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MFObserver;
@class BKSApplicationStateMonitor, NSObject, MFObservable;

@interface MFAppStateMonitor : NSObject {

	unsigned _appState;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	MFObservable*<MFObserver> _observable;

}

@property (nonatomic,readonly) MFObservable * appStateObservable; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_updateApplicationState:(id)arg1 observer:(id)arg2 ;
-(MFObservable *)appStateObservable;
-(BOOL)isForeground;
@end

