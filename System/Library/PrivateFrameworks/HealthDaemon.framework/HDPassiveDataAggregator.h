/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataAggregator.h>

@interface HDPassiveDataAggregator : HDDataAggregator
-(void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3 ;
-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2 ;
-(BOOL)persistObjects:(id)arg1 forSensorDatum:(id)arg2 profile:(id)arg3 sourceEntity:(id)arg4 deviceEntity:(id)arg5 error:(id*)arg6 ;
@end
