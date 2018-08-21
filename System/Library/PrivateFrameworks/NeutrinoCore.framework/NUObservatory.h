/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUObservatory : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSMutableArray* _observations;

}
-(void)_removeObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_addObservation:(id)arg1 ;
-(void)_removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)_notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

