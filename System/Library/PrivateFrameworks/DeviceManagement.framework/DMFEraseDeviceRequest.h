/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFEraseDeviceRequest : CATTaskRequest {

	BOOL _hideProximitySetupPane;
	unsigned long long _eraseDeviceType;
	unsigned long long _dataResetOptions;
	NSString* _pin;

}

@property (assign,nonatomic) unsigned long long eraseDeviceType;               //@synthesize eraseDeviceType=_eraseDeviceType - In the implementation block
@property (assign,nonatomic) unsigned long long dataResetOptions;              //@synthesize dataResetOptions=_dataResetOptions - In the implementation block
@property (nonatomic,copy) NSString * pin;                                     //@synthesize pin=_pin - In the implementation block
@property (assign,nonatomic) BOOL hideProximitySetupPane;                      //@synthesize hideProximitySetupPane=_hideProximitySetupPane - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPin:(NSString *)arg1 ;
-(NSString *)pin;
-(unsigned long long)eraseDeviceType;
-(unsigned long long)dataResetOptions;
-(BOOL)hideProximitySetupPane;
-(void)setEraseDeviceType:(unsigned long long)arg1 ;
-(void)setDataResetOptions:(unsigned long long)arg1 ;
-(void)setHideProximitySetupPane:(BOOL)arg1 ;
@end

