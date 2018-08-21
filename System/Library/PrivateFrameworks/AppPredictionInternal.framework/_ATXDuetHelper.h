/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _ATXDuetHelper : NSObject
+(id)sharedInstance;
+(id)datePredicateWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3 ;
-(id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 ;
-(id)getFirstIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 ;
-(id)getIntentEventForUUID:(id)arg1 forSource:(long long)arg2 ;
-(id)getIntentEventForPredicate:(id)arg1 bundleIdFilter:(id)arg2 forSource:(long long)arg3 forLimit:(unsigned long long)arg4 ;
-(id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(id)getFirstActivityEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(id)getActivityEventForPredicate:(id)arg1 bundleIdFilter:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)getScreenTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getSurfExtensionLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_queryDuetStream:(id)arg1 withPredicate:(id)arg2 limit:(unsigned long long)arg3 ;
@end

