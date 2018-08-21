/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface _NMROriginProtobuf : PBCodable <NSCopying> {

	NSData* _deviceInfoData;
	NSString* _displayName;
	int _uniqueIdentifier;
	SCD_Struct_NM7 _has;

}

@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) int uniqueIdentifier;                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoData; 
@property (nonatomic,retain) NSData * deviceInfoData;               //@synthesize deviceInfoData=_deviceInfoData - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(int)uniqueIdentifier;
-(void)setUniqueIdentifier:(int)arg1 ;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(NSData *)deviceInfoData;
-(void)setDeviceInfoData:(NSData *)arg1 ;
-(BOOL)hasDeviceInfoData;
@end

