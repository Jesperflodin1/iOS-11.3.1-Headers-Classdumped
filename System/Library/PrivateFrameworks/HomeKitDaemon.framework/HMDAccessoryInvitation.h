/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccessory;

@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding> {

	NSUUID* _identifier;
	HMDAccessory* _accessory;
	long long _state;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)state;
-(NSUUID *)identifier;
-(HMDAccessory *)accessory;
-(id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3 ;
@end
