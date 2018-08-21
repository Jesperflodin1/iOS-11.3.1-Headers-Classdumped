/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDDataCollectionObserverState;

@interface _HDDataCollectionObserverWrapper : NSObject {

	id _observer;
	HDDataCollectionObserverState* _state;
	double _collectionInterval;

}

@property (nonatomic,__weak,readonly) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) HDDataCollectionObserverState * state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double collectionInterval;                        //@synthesize collectionInterval=_collectionInterval - In the implementation block
-(id)description;
-(HDDataCollectionObserverState *)state;
-(void)setState:(HDDataCollectionObserverState *)arg1 ;
-(id)observer;
-(double)collectionInterval;
-(void)setCollectionInterval:(double)arg1 ;
-(id)initWithObserver:(id)arg1 state:(id)arg2 collectionInterval:(double)arg3 ;
@end

