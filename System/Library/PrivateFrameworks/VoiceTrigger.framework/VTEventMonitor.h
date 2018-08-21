/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface VTEventMonitor : NSObject {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)notifyObserver:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(void)enumerateObserversInQueue:(/*^block*/id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
@end

