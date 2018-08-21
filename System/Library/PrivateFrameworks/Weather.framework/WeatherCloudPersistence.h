/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/WeatherPreferencesPersistence.h>

@protocol WeatherCloudPersistenceDelegate;
@class NSUbiquitousKeyValueStore, NSString;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence> {

	id<WeatherCloudPersistenceDelegate> _delegate;
	NSUbiquitousKeyValueStore* _cloudStore;

}

@property (retain) NSUbiquitousKeyValueStore * cloudStore;                    //@synthesize cloudStore=_cloudStore - In the implementation block
@property (__weak) id<WeatherCloudPersistenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudPersistenceWithDelegate:(id)arg1 ;
+(BOOL)processIsWhitelistedForSync;
-(id)init;
-(id<WeatherCloudPersistenceDelegate>)delegate;
-(id)objectForKey:(id)arg1 ;
-(BOOL)synchronize;
-(void)setDelegate:(id<WeatherCloudPersistenceDelegate>)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setCloudStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)cloudCitiesChangedExternally:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)cloudStore;
-(BOOL)isInitialSyncNotification:(id)arg1 ;
@end

