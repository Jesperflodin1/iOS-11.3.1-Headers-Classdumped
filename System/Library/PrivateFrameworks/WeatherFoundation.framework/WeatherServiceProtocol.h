/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>
@required
-(void)cancelTaskWithIdentifier:(id)arg1;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
-(void)forecastForLocation:(id)arg1 atDate:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
-(void)hourlyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2;
-(void)dailyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
-(void)temperatureUnitWithIdentifier:(id)arg1;
-(void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
-(void)reachabilityConfigurationForIdentifier:(id)arg1;
-(void)invalidateCache:(id)arg1;

@end

