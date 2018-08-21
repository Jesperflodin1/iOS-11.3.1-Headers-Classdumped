/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _protocolVersion;
	NSString* _applicationBundleIdentifier;
	NSString* _applicationBundleVersion;
	NSData* _bluetoothAddress;
	int _deviceClass;
	unsigned _groupedDeviceCount;
	unsigned _lastSupportedMessageType;
	NSString* _localReceiverPairingIdentity;
	NSString* _localizedModelName;
	NSString* _managedConfigDeviceID;
	NSString* _name;
	unsigned _sharedQueueVersion;
	NSString* _systemBuildVersion;
	NSString* _systemMediaApplication;
	NSString* _uniqueIdentifier;
	BOOL _allowsPairing;
	BOOL _connected;
	BOOL _isProxyGroupPlayer;
	BOOL _supportsACL;
	BOOL _supportsExtendedMotion;
	BOOL _supportsSharedQueue;
	BOOL _supportsSystemPairing;
	BOOL _tightlySyncedGroup;
	SCD_Struct_MR24 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedModelName; 
@property (nonatomic,retain) NSString * localizedModelName;                        //@synthesize localizedModelName=_localizedModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemBuildVersion; 
@property (nonatomic,retain) NSString * systemBuildVersion;                        //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * applicationBundleIdentifier;               //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundleVersion; 
@property (nonatomic,retain) NSString * applicationBundleVersion;                  //@synthesize applicationBundleVersion=_applicationBundleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned long long protocolVersion;                   //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasLastSupportedMessageType; 
@property (assign,nonatomic) unsigned lastSupportedMessageType;                    //@synthesize lastSupportedMessageType=_lastSupportedMessageType - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsSystemPairing; 
@property (assign,nonatomic) BOOL supportsSystemPairing;                           //@synthesize supportsSystemPairing=_supportsSystemPairing - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsPairing; 
@property (assign,nonatomic) BOOL allowsPairing;                                   //@synthesize allowsPairing=_allowsPairing - In the implementation block
@property (assign,nonatomic) BOOL hasConnected; 
@property (assign,nonatomic) BOOL connected;                                       //@synthesize connected=_connected - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemMediaApplication; 
@property (nonatomic,retain) NSString * systemMediaApplication;                    //@synthesize systemMediaApplication=_systemMediaApplication - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsACL; 
@property (assign,nonatomic) BOOL supportsACL;                                     //@synthesize supportsACL=_supportsACL - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsSharedQueue; 
@property (assign,nonatomic) BOOL supportsSharedQueue;                             //@synthesize supportsSharedQueue=_supportsSharedQueue - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsExtendedMotion; 
@property (assign,nonatomic) BOOL supportsExtendedMotion;                          //@synthesize supportsExtendedMotion=_supportsExtendedMotion - In the implementation block
@property (nonatomic,readonly) BOOL hasBluetoothAddress; 
@property (nonatomic,retain) NSData * bluetoothAddress;                            //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (assign,nonatomic) BOOL hasSharedQueueVersion; 
@property (assign,nonatomic) unsigned sharedQueueVersion;                          //@synthesize sharedQueueVersion=_sharedQueueVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalReceiverPairingIdentity; 
@property (nonatomic,retain) NSString * localReceiverPairingIdentity;              //@synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity - In the implementation block
@property (nonatomic,readonly) BOOL hasManagedConfigDeviceID; 
@property (nonatomic,retain) NSString * managedConfigDeviceID;                     //@synthesize managedConfigDeviceID=_managedConfigDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                                      //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasGroupedDeviceCount; 
@property (assign,nonatomic) unsigned groupedDeviceCount;                          //@synthesize groupedDeviceCount=_groupedDeviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasTightlySyncedGroup; 
@property (assign,nonatomic) BOOL tightlySyncedGroup;                              //@synthesize tightlySyncedGroup=_tightlySyncedGroup - In the implementation block
@property (assign,nonatomic) BOOL hasIsProxyGroupPlayer; 
@property (assign,nonatomic) BOOL isProxyGroupPlayer;                              //@synthesize isProxyGroupPlayer=_isProxyGroupPlayer - In the implementation block
-(void)setConnected:(BOOL)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(void)setDeviceClass:(int)arg1 ;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(BOOL)hasDeviceClass;
-(int)deviceClass;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(unsigned long long)protocolVersion;
-(BOOL)hasUniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setLastSupportedMessageType:(unsigned)arg1 ;
-(unsigned)lastSupportedMessageType;
-(void)setSupportsExtendedMotion:(BOOL)arg1 ;
-(BOOL)supportsExtendedMotion;
-(void)setIsProxyGroupPlayer:(BOOL)arg1 ;
-(void)setHasIsProxyGroupPlayer:(BOOL)arg1 ;
-(BOOL)hasIsProxyGroupPlayer;
-(void)setSupportsSharedQueue:(BOOL)arg1 ;
-(void)setHasSupportsSharedQueue:(BOOL)arg1 ;
-(BOOL)hasSupportsSharedQueue;
-(BOOL)supportsSharedQueue;
-(void)setHasSupportsExtendedMotion:(BOOL)arg1 ;
-(BOOL)hasSupportsExtendedMotion;
-(NSString *)localizedModelName;
-(NSString *)applicationBundleVersion;
-(NSString *)systemMediaApplication;
-(void)setSystemMediaApplication:(NSString *)arg1 ;
-(void)setLocalReceiverPairingIdentity:(NSString *)arg1 ;
-(NSString *)localReceiverPairingIdentity;
-(NSString *)managedConfigDeviceID;
-(void)setManagedConfigDeviceID:(NSString *)arg1 ;
-(unsigned)groupedDeviceCount;
-(BOOL)tightlySyncedGroup;
-(BOOL)allowsPairing;
-(BOOL)supportsSystemPairing;
-(BOOL)supportsACL;
-(void)setSharedQueueVersion:(unsigned)arg1 ;
-(BOOL)hasSharedQueueVersion;
-(unsigned)sharedQueueVersion;
-(void)setLocalizedModelName:(NSString *)arg1 ;
-(void)setApplicationBundleVersion:(NSString *)arg1 ;
-(void)setGroupedDeviceCount:(unsigned)arg1 ;
-(void)setTightlySyncedGroup:(BOOL)arg1 ;
-(void)setAllowsPairing:(BOOL)arg1 ;
-(void)setSupportsSystemPairing:(BOOL)arg1 ;
-(void)setSupportsACL:(BOOL)arg1 ;
-(BOOL)hasLocalizedModelName;
-(BOOL)hasSystemBuildVersion;
-(BOOL)hasApplicationBundleIdentifier;
-(BOOL)hasApplicationBundleVersion;
-(void)setHasLastSupportedMessageType:(BOOL)arg1 ;
-(BOOL)hasLastSupportedMessageType;
-(void)setHasSupportsSystemPairing:(BOOL)arg1 ;
-(BOOL)hasSupportsSystemPairing;
-(void)setHasAllowsPairing:(BOOL)arg1 ;
-(BOOL)hasAllowsPairing;
-(BOOL)hasSystemMediaApplication;
-(void)setHasSupportsACL:(BOOL)arg1 ;
-(BOOL)hasSupportsACL;
-(BOOL)hasBluetoothAddress;
-(void)setHasSharedQueueVersion:(BOOL)arg1 ;
-(BOOL)hasLocalReceiverPairingIdentity;
-(BOOL)hasManagedConfigDeviceID;
-(void)setHasGroupedDeviceCount:(BOOL)arg1 ;
-(BOOL)hasGroupedDeviceCount;
-(void)setHasTightlySyncedGroup:(BOOL)arg1 ;
-(BOOL)hasTightlySyncedGroup;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSString *)systemBuildVersion;
-(NSData *)bluetoothAddress;
-(void)setBluetoothAddress:(NSData *)arg1 ;
-(BOOL)connected;
-(NSString *)applicationBundleIdentifier;
-(BOOL)hasConnected;
@end
