/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAnalyticsService <NSObject>
@optional
-(oneway void)stageEvent:(id)arg1;
-(oneway void)stageEvents:(id)arg1;

@required
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;

@end

