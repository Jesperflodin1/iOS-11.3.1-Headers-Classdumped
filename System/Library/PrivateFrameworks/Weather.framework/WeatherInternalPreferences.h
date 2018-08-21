/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSObject {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (readonly) BOOL isInternalInstall; 
+(id)sharedInternalPreferences;
-(BOOL)isInternalInstall;
-(id)objectForKey:(id)arg1 ;
-(id<WeatherPreferencesPersistence>)persistence;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
@end

