/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ATFoundation/ATFoundation-Structs.h>
@class NSObject, NSHashTable;

@interface ATEnvironmentMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	unsigned _powerNotification;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	BOOL _power;
	BOOL _internetReachable;
	BOOL _internetReachableViaOnlyWWAN;

}

@property (getter=hasPower,nonatomic,readonly) BOOL power;                                                           //@synthesize power=_power - In the implementation block
@property (getter=isInternetReachable,nonatomic,readonly) BOOL internetReachable;                                    //@synthesize internetReachable=_internetReachable - In the implementation block
@property (getter=isInternetReachableViaOnlyWWAN,nonatomic,readonly) BOOL internetReachableViaOnlyWWAN;              //@synthesize internetReachableViaOnlyWWAN=_internetReachableViaOnlyWWAN - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)isInternetReachableViaOnlyWWAN;
-(BOOL)hasPower;
-(BOOL)isInternetReachable;
@end

