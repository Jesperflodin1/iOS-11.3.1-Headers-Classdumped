/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDataCollector;
@class HDDataCollectorState;

@interface HDDataCollectorRecord : NSObject {

	id<HDDataCollector> _collector;
	HDDataCollectorState* _state;

}

@property (nonatomic,retain) id<HDDataCollector> collector;              //@synthesize collector=_collector - In the implementation block
@property (nonatomic,retain) HDDataCollectorState * state;               //@synthesize state=_state - In the implementation block
-(HDDataCollectorState *)state;
-(void)setState:(HDDataCollectorState *)arg1 ;
-(void)setCollector:(id<HDDataCollector>)arg1 ;
-(id<HDDataCollector>)collector;
@end

