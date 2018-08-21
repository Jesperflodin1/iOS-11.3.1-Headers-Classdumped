/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface TSClock : NSObject {

	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _notificationsQueue;
	unsigned long long _clockIdentifier;

}

@property (nonatomic,retain,readonly) NSMutableArray * clients; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue; 
@property (assign,nonatomic) unsigned long long clockIdentifier;                            //@synthesize clockIdentifier=_clockIdentifier - In the implementation block
@property (nonatomic,readonly) int lockState; 
@property (nonatomic,readonly) double hostRateRatio; 
@property (nonatomic,copy,readonly) NSString * clockName; 
+(id)clockNameForClockIdentifier:(unsigned long long)arg1 ;
+(unsigned long long)_mach_absolute_time;
+(id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(int)lockState;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(NSMutableArray *)clients;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)clockIdentifier;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1 ;
-(unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5 ;
-(double)hostRateRatio;
-(NSString *)clockName;
-(void)setClockIdentifier:(unsigned long long)arg1 ;
@end

