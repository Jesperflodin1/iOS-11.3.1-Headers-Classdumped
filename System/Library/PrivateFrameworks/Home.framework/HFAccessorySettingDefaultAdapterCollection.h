/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingAdapter, HFAccessorySettingSiriLanguageAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject {

	HFAccessorySettingManagedConfigurationAdapter* _managedConfigurationAdapter;
	HFAccessorySettingAdapter* _mobileTimerAdapter;
	HFAccessorySettingSiriLanguageAdapter* _siriLanguageAdapter;

}

@property (nonatomic,retain) HFAccessorySettingManagedConfigurationAdapter * managedConfigurationAdapter;              //@synthesize managedConfigurationAdapter=_managedConfigurationAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingAdapter * mobileTimerAdapter;                                           //@synthesize mobileTimerAdapter=_mobileTimerAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingSiriLanguageAdapter * siriLanguageAdapter;                              //@synthesize siriLanguageAdapter=_siriLanguageAdapter - In the implementation block
@property (nonatomic,readonly) NSSet * allAdapters; 
-(HFAccessorySettingManagedConfigurationAdapter *)managedConfigurationAdapter;
-(HFAccessorySettingSiriLanguageAdapter *)siriLanguageAdapter;
-(NSSet *)allAdapters;
-(void)setManagedConfigurationAdapter:(HFAccessorySettingManagedConfigurationAdapter *)arg1 ;
-(void)setMobileTimerAdapter:(HFAccessorySettingAdapter *)arg1 ;
-(void)setSiriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 ;
-(HFAccessorySettingAdapter *)mobileTimerAdapter;
@end

