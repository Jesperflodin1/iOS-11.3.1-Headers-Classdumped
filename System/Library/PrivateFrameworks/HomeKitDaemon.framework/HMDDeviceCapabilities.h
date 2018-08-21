/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDDeviceCapabilities : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _supportsKeychainSync;
	BOOL _supportsDeviceSetup;
	BOOL _supportsKeyTransferClient;
	BOOL _supportsKeyTransferServer;
	BOOL _supportsStandaloneMode;
	BOOL _supportsCloudDataSync;
	BOOL _supportsWholeHouseAudio;
	BOOL _supportsAssistantAccessControl;
	BOOL _residentCapable;
	BOOL _remoteGatewayCapable;

}

@property (nonatomic,readonly) BOOL supportsKeychainSync;                                            //@synthesize supportsKeychainSync=_supportsKeychainSync - In the implementation block
@property (nonatomic,readonly) BOOL supportsDeviceSetup;                                             //@synthesize supportsDeviceSetup=_supportsDeviceSetup - In the implementation block
@property (nonatomic,readonly) BOOL supportsKeyTransferClient;                                       //@synthesize supportsKeyTransferClient=_supportsKeyTransferClient - In the implementation block
@property (nonatomic,readonly) BOOL supportsKeyTransferServer;                                       //@synthesize supportsKeyTransferServer=_supportsKeyTransferServer - In the implementation block
@property (nonatomic,readonly) BOOL supportsStandaloneMode;                                          //@synthesize supportsStandaloneMode=_supportsStandaloneMode - In the implementation block
@property (nonatomic,readonly) BOOL supportsCloudDataSync;                                           //@synthesize supportsCloudDataSync=_supportsCloudDataSync - In the implementation block
@property (nonatomic,readonly) BOOL supportsWholeHouseAudio;                                         //@synthesize supportsWholeHouseAudio=_supportsWholeHouseAudio - In the implementation block
@property (nonatomic,readonly) BOOL supportsAssistantAccessControl;                                  //@synthesize supportsAssistantAccessControl=_supportsAssistantAccessControl - In the implementation block
@property (getter=isResidentCapable,nonatomic,readonly) BOOL residentCapable;                        //@synthesize residentCapable=_residentCapable - In the implementation block
@property (getter=isRemoteGatewayCapable,nonatomic,readonly) BOOL remoteGatewayCapable;              //@synthesize remoteGatewayCapable=_remoteGatewayCapable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)deviceCapabilities;
+(BOOL)supportsLocalization;
+(BOOL)isAppleMediaAccessory;
+(BOOL)supportsHomeApp;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)shortDescription;
-(BOOL)isResidentCapable;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isRemoteGatewayCapable;
-(BOOL)supportsKeyTransferServer;
-(BOOL)supportsDeviceSetup;
-(BOOL)supportsKeychainSync;
-(BOOL)supportsCloudDataSync;
-(BOOL)supportsStandaloneMode;
-(BOOL)supportsKeyTransferClient;
-(id)initWithProductInfo:(id)arg1 ;
-(BOOL)supportsWholeHouseAudio;
-(BOOL)supportsAssistantAccessControl;
@end

