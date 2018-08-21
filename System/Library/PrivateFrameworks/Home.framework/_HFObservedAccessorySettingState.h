/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class HMAccessorySettings, HMAccessorySetting, NSSet, NSString;

@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable> {

	HMAccessorySettings* _settings;
	HMAccessorySetting* _setting;
	NSSet* _selectionOptions;

}

@property (nonatomic,readonly) HMAccessorySettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) HMAccessorySetting * setting;                //@synthesize setting=_setting - In the implementation block
@property (nonatomic,copy,readonly) NSSet * selectionOptions;               //@synthesize selectionOptions=_selectionOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stateWithSettings:(id)arg1 forSetting:(id)arg2 ;
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HMAccessorySettings *)settings;
-(id)initWithSettings:(id)arg1 setting:(id)arg2 ;
-(NSSet *)selectionOptions;
-(HMAccessorySetting *)setting;
@end

