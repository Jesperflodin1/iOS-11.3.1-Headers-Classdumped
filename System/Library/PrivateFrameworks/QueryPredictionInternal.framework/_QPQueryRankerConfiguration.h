/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _QPQueryRankerConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSMutableDictionary* _notifyRegistrations;

}

@property (retain) NSMutableDictionary * notifyRegistrations;              //@synthesize notifyRegistrations=_notifyRegistrations - In the implementation block
@property (readonly) BOOL featureDisabled; 
-(id)init;
-(void)dealloc;
-(void)setNotifyRegistrations:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notifyRegistrations;
-(void)registerHandlerForNotification:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)featureDisabled;
-(void)registerHandlerForDatabaseChangeNotification:(/*^block*/id)arg1 ;
-(void)registerHandlerForDeleteDataNotification:(/*^block*/id)arg1 ;
-(void)registerHandlerForFeatureDisabledNotification:(/*^block*/id)arg1 ;
-(void)registerHandlerForSuggestionModelChangedSignificantlyNotification:(/*^block*/id)arg1 ;
@end

