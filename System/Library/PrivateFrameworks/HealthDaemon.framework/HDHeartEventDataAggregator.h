/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDPassiveDataAggregator.h>

@interface HDHeartEventDataAggregator : HDPassiveDataAggregator
-(id)objectType;
-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2 ;
-(BOOL)queue_didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4 ;
@end

