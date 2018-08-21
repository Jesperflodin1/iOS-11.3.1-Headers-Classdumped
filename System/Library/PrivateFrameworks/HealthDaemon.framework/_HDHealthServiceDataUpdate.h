/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDHealthServiceCharacteristic, HKDevice, NSError;

@interface _HDHealthServiceDataUpdate : NSObject {

	unsigned long long _sessionIdentifier;
	HDHealthServiceCharacteristic* _characteristic;
	HKDevice* _device;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long sessionIdentifier;                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) HDHealthServiceCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSError * error;                                             //@synthesize error=_error - In the implementation block
-(unsigned long long)sessionIdentifier;
-(NSError *)error;
-(id)initWithSessionIdentifier:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 error:(id)arg4 ;
-(HDHealthServiceCharacteristic *)characteristic;
-(HKDevice *)device;
@end

