/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject {

	HMDDevice* _device;
	NSArray* _accessoryUUIDList;

}

@property (nonatomic,readonly) HMDDevice * device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryUUIDList;              //@synthesize accessoryUUIDList=_accessoryUUIDList - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 accessoryList:(id)arg2 ;
-(NSArray *)accessoryUUIDList;
@end
