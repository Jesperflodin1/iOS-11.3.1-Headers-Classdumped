/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet, NSData;

@interface CRVehicle : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _vehicleName;
	NSSet* _accessoryProtocols;
	NSData* _certificateSerialNumber;
	unsigned long long _pairingStatus;
	NSString* _bluetoothAddress;
	NSString* _carplayWiFiUUID;
	NSString* _internalNotes;

}

@property (nonatomic,retain) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * certificateSerialNumber;              //@synthesize certificateSerialNumber=_certificateSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * vehicleName;                        //@synthesize vehicleName=_vehicleName - In the implementation block
@property (assign,nonatomic) unsigned long long pairingStatus;              //@synthesize pairingStatus=_pairingStatus - In the implementation block
@property (nonatomic,retain) NSString * bluetoothAddress;                   //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSString * carplayWiFiUUID;                    //@synthesize carplayWiFiUUID=_carplayWiFiUUID - In the implementation block
@property (nonatomic,retain) NSSet * accessoryProtocols;                    //@synthesize accessoryProtocols=_accessoryProtocols - In the implementation block
@property (nonatomic,retain) NSString * internalNotes;                      //@synthesize internalNotes=_internalNotes - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
+(BOOL)supportsSecureCoding;
+(id)vehicleForVehicleAccessory:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)displayName;
-(NSString *)bluetoothAddress;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(NSString *)carplayWiFiUUID;
-(NSString *)vehicleName;
-(NSData *)certificateSerialNumber;
-(id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2 ;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(void)setPairingStatus:(unsigned long long)arg1 ;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setCarplayWiFiUUID:(NSString *)arg1 ;
-(void)setAccessoryProtocols:(NSSet *)arg1 ;
-(void)setInternalNotes:(NSString *)arg1 ;
-(unsigned long long)pairingStatus;
-(NSSet *)accessoryProtocols;
-(NSString *)internalNotes;
-(id)_pairingDebugDescription;
-(void)mergeAttributesFromVehicle:(id)arg1 ;
-(BOOL)isPaired;
@end

