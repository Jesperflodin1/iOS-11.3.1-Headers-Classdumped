/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessoryBLEPairing.framework/AccessoryBLEPairing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCBLEPairingAccessory : NSObject {

	BOOL _desiredBLEPairingState;
	NSString* _accessoryUID;

}

@property (nonatomic,retain) NSString * accessoryUID;                  //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredBLEPairingState;              //@synthesize desiredBLEPairingState=_desiredBLEPairingState - In the implementation block
-(id)initWithAccessoryUID:(id)arg1 ;
-(BOOL)desiredBLEPairingState;
-(void)setDesiredBLEPairingState:(BOOL)arg1 ;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
@end

