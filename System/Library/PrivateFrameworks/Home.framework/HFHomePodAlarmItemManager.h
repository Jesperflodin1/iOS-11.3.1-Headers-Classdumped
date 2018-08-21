/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@protocol HFMediaProfileContainer;
@class HFHomePodAlarmItemModule, HFAccessorySettingMobileTimerAdapter;

@interface HFHomePodAlarmItemManager : HFItemManager {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFHomePodAlarmItemModule* _alarmItemModule;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                      //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingMobileTimerAdapter * mobileTimerAdapter; 
@property (nonatomic,readonly) HFHomePodAlarmItemModule * alarmItemModule;                             //@synthesize alarmItemModule=_alarmItemModule - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFAccessorySettingMobileTimerAdapter *)mobileTimerAdapter;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)initWithDelegate:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(HFHomePodAlarmItemModule *)alarmItemModule;
@end
