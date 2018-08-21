/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _GEOCacheManagerBackOffStrategy : NSObject {

	double _lastSuccess;
	double _lastFailure;
	double _maxTimeInSeconds;

}
+(id)sharedInstance;
-(void)registerSuccess;
-(void)registerFailure;
-(double)_unsuccesfulTime;
-(double)timeUntilWhenToWait;
-(double)secondsToWait;
-(id)init;
@end
