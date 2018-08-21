/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <HealthKit/HealthKit-Structs.h>
@class NSMapTable, NSString, NSObject;

@interface HKObserverSet : NSObject {

	NSMapTable* _observerMap;
	NSString* _name;
	NSObject*<OS_os_log> _category;
	os_unfair_lock_s _lock;

}
-(void)_notifyObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)initWithName:(id)arg1 loggingCategory:(id)arg2 ;
-(void)notifyObservers:(/*^block*/id)arg1 ;
@end

