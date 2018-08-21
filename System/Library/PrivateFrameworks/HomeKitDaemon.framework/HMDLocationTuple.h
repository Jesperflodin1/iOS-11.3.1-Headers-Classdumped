/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSDate;

@interface HMDLocationTuple : NSObject {

	CLLocation* _location;
	unsigned long long _numberOfReachableIPAccessory;
	unsigned long long _numberOfReachableBTLEAccessory;
	unsigned long long _numberOfreachableMediaAccessory;
	NSDate* _date;

}

@property (nonatomic,retain) CLLocation * location;                                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfReachableIPAccessory;                 //@synthesize numberOfReachableIPAccessory=_numberOfReachableIPAccessory - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfReachableBTLEAccessory;               //@synthesize numberOfReachableBTLEAccessory=_numberOfReachableBTLEAccessory - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfreachableMediaAccessory;              //@synthesize numberOfreachableMediaAccessory=_numberOfreachableMediaAccessory - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                   //@synthesize date=_date - In the implementation block
+(id)tupleWithLocation:(id)arg1 reachableIPAccessory:(unsigned long long)arg2 reachableBTLEAccessory:(unsigned long long)arg3 reachableMediaAccessory:(unsigned long long)arg4 date:(id)arg5 ;
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(unsigned long long)numberOfReachableIPAccessory;
-(unsigned long long)numberOfReachableBTLEAccessory;
-(void)setNumberOfReachableIPAccessory:(unsigned long long)arg1 ;
-(void)setNumberOfReachableBTLEAccessory:(unsigned long long)arg1 ;
-(void)setNumberOfreachableMediaAccessory:(unsigned long long)arg1 ;
-(unsigned long long)numberOfreachableMediaAccessory;
@end

