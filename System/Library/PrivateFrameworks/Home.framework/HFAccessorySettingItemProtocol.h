/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFAccessorySettingsEntity, NSString;


@protocol HFAccessorySettingItemProtocol <HFHomeKitItemProtocol>
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer; 
@property (nonatomic,readonly) HFAccessorySettingsEntity * entity; 
@property (nonatomic,readonly) NSString * settingKeyPath; 
@required
-(HFAccessorySettingsEntity *)entity;
-(NSString *)settingKeyPath;
-(id<HFMediaProfileContainer>)mediaProfileContainer;

@end

