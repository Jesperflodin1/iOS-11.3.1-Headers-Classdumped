/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	NSUUID* _peerUUID;
	NSDictionary* _peerTrackingDictionary;

}

@property (assign) unsigned char clientType;                           //@synthesize clientType=_clientType - In the implementation block
@property (retain) NSUUID * peerUUID;                                  //@synthesize peerUUID=_peerUUID - In the implementation block
@property (retain) NSDictionary * peerTrackingDictionary;              //@synthesize peerTrackingDictionary=_peerTrackingDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)peerUUID;
-(void)setPeerUUID:(NSUUID *)arg1 ;
-(NSDictionary *)peerTrackingDictionary;
-(void)setPeerTrackingDictionary:(NSDictionary *)arg1 ;
-(void)setClientType:(unsigned char)arg1 ;
-(unsigned char)clientType;
@end

