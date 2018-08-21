/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKWorkoutConfiguration, NSString;

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding> {

	HKWorkoutConfiguration* _configuration;
	long long _state;
	NSString* _applicationIdentifier;

}

@property (nonatomic,readonly) HKWorkoutConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)state;
-(NSString *)applicationIdentifier;
-(HKWorkoutConfiguration *)configuration;
-(id)initWithWorkoutConfiguration:(id)arg1 state:(long long)arg2 applicationIdentifier:(id)arg3 ;
@end

