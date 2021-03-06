/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSData;

@interface DMFOpenAppRequest : CATTaskRequest {

	BOOL _lockInApp;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	NSData* _activityData;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activityType;                  //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSData * activityData;                    //@synthesize activityData=_activityData - In the implementation block
@property (assign,nonatomic) BOOL lockInApp;                         //@synthesize lockInApp=_lockInApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(BOOL)lockInApp;
-(void)setActivityData:(NSData *)arg1 ;
-(void)setLockInApp:(BOOL)arg1 ;
-(NSData *)activityData;
@end

