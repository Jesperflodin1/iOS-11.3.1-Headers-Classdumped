/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _HKAchievementLocalizationContext : NSObject {

	BOOL _isWheelchairUser;
	NSString* _keyPrefix;
	long long _timesEarned;
	NSString* _userName;

}

@property (nonatomic,readonly) NSString * keyPrefix;               //@synthesize keyPrefix=_keyPrefix - In the implementation block
@property (nonatomic,readonly) long long timesEarned;              //@synthesize timesEarned=_timesEarned - In the implementation block
@property (nonatomic,readonly) NSString * userName;                //@synthesize userName=_userName - In the implementation block
@property (nonatomic,readonly) BOOL isWheelchairUser;              //@synthesize isWheelchairUser=_isWheelchairUser - In the implementation block
+(id)contextWithKeyPrefix:(id)arg1 timesEarned:(long long)arg2 userName:(id)arg3 isWheelchairUser:(BOOL)arg4 ;
-(NSString *)userName;
-(NSString *)keyPrefix;
-(long long)timesEarned;
-(BOOL)isWheelchairUser;
@end

