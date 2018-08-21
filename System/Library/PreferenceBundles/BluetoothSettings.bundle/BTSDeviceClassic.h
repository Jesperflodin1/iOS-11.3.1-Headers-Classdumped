/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {

	BluetoothDevice* _device;

}

@property (nonatomic,__weak,readonly) BluetoothDevice * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithDevice:(id)arg1 ;
-(id)name;
-(id)identifier;
-(BOOL)connect;
-(void)disconnect;
-(BOOL)magicPaired;
-(void)unpair;
-(BOOL)setUserName:(id)arg1 ;
-(BOOL)connected;
-(BluetoothDevice *)device;
-(BOOL)isHealthDevice;
-(id)classicDevice;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)paired;
@end

