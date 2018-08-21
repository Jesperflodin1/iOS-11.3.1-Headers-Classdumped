/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NCBSWorldCityDisplayListModel : NSObject {

	NSArray* _cachedCities;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)sharedInstance;
-(id)cityForIndex:(unsigned long long)arg1 ;
-(id)cityDisplayAbbreviationForIndex:(unsigned long long)arg1 ;
-(id)cityDisplayNameForIndex:(unsigned long long)arg1 ;
-(void)handleAbbreviationStoreChange:(id)arg1 ;
-(void)_fetchCitiesAndNotify:(BOOL)arg1 ;
-(id)_cachedCityAtIndex:(unsigned long long)arg1 ;
-(void)handleWorldCitiesChanged;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(void)_notifyClientsOfChange;
@end

