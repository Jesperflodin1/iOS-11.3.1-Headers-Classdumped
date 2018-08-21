/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSDevice, NSArray, NSUUID, NSData, NSDate, NSString, IDSDestination;

@interface IDSDevice : NSObject {

	_IDSDevice* _internal;

}

@property (nonatomic,readonly) NSArray * linkedUserURIs; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,readonly) BOOL supportsTethering; 
@property (nonatomic,readonly) BOOL supportsHandoff; 
@property (nonatomic,readonly) BOOL supportsiCloudPairing; 
@property (nonatomic,readonly) BOOL supportsSMSRelay; 
@property (nonatomic,readonly) BOOL supportsMMSRelay; 
@property (nonatomic,readonly) BOOL supportsPhoneCalls; 
@property (nonatomic,readonly) NSArray * identities; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDate * lastActivityDate; 
@property (nonatomic,readonly) BOOL isCloudConnected; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * uniqueIDOverride; 
@property (nonatomic,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) SCD_Struct_ID3 operatingSystemVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * service; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) BOOL isHSATrusted; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long serviceMinCompatibilityVersion; 
@property (getter=isNearby,nonatomic,readonly) BOOL nearby; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) IDSDestination * destination; 
@property (nonatomic,readonly) BOOL locallyPresent; 
-(BOOL)isNearby;
-(id)_internal;
-(NSString *)service;
-(NSString *)uniqueID;
-(NSString *)productName;
-(id)fullDescription;
-(BOOL)isConnected;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)name;
-(IDSDestination *)destination;
-(id)_initWithDictionary:(id)arg1 ;
-(BOOL)supportsiCloudPairing;
-(void)_addIdentity:(id)arg1 ;
-(NSArray *)linkedUserURIs;
-(BOOL)supportsSMSRelay;
-(BOOL)supportsMMSRelay;
-(BOOL)supportsPhoneCalls;
-(BOOL)locallyPresent;
-(BOOL)isCloudConnected;
-(unsigned long long)pairingProtocolVersion;
-(unsigned long long)minCompatibilityVersion;
-(unsigned long long)maxCompatibilityVersion;
-(BOOL)isHSATrusted;
-(BOOL)supportsTethering;
-(void)closeSocket:(int)arg1 ;
-(NSDate *)lastActivityDate;
-(unsigned long long)serviceMinCompatibilityVersion;
-(void)setNSUUID:(id)arg1 ;
-(int)socketForDomain:(id)arg1 ;
-(void)openSocketWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)closeSocketForDomain:(id)arg1 ;
-(int)openSocketForDomain:(id)arg1 transportType:(long long)arg2 ;
-(void)establishStreamPairWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(int)openSocketForDomain:(id)arg1 ;
-(NSString *)deviceColor;
-(BOOL)supportsApplePay;
-(BOOL)supportsHandoff;
-(NSArray *)identities;
-(void)_setAccount:(id)arg1 ;
-(NSString *)enclosureColor;
-(NSString *)uniqueIDOverride;
-(BOOL)isLocallyPaired;
-(BOOL)isDefaultPairedDevice;
-(NSUUID *)nsuuid;
-(NSString *)productBuildVersion;
-(SCD_Struct_ID3)operatingSystemVersion;
-(NSData *)pushToken;
-(NSString *)modelIdentifier;
-(NSString *)productVersion;
@end

