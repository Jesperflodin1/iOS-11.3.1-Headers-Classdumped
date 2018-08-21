/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler, NACancelable;
@class NSMutableSet;

@interface NAValueThrottler : NSObject {

	double _throttleInterval;
	id<NAScheduler> _updateScheduler;
	id _value;
	NSMutableSet* _observerBlocks;
	id<NACancelable> _valueUpdateCancelationToken;

}

@property (nonatomic,readonly) NSMutableSet * observerBlocks;                           //@synthesize observerBlocks=_observerBlocks - In the implementation block
@property (nonatomic,retain) id<NACancelable> valueUpdateCancelationToken;              //@synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken - In the implementation block
@property (nonatomic,readonly) double throttleInterval;                                 //@synthesize throttleInterval=_throttleInterval - In the implementation block
@property (nonatomic,retain) id<NAScheduler> updateScheduler;                           //@synthesize updateScheduler=_updateScheduler - In the implementation block
@property (nonatomic,retain) id value;                                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingValueChange; 
-(id<NAScheduler>)updateScheduler;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id<NACancelable>)valueUpdateCancelationToken;
-(void)_enqueueValueUpdateIfNecessary;
-(void)setValueUpdateCancelationToken:(id<NACancelable>)arg1 ;
-(double)throttleInterval;
-(void)_notifyObserversOfValueUpdate;
-(NSMutableSet *)observerBlocks;
-(void)setUpdateScheduler:(id<NAScheduler>)arg1 ;
-(id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2 ;
-(id)observeValueChangesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)hasPendingValueChange;
-(void)flushValueChanges;
-(id)initWithThrottleInterval:(double)arg1 ;
@end

