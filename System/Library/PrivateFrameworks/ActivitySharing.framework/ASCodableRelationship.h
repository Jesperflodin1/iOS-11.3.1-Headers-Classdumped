/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface ASCodableRelationship : PBCodable <NSCopying> {

	long long _version;
	NSMutableArray* _addresses;
	NSString* _cloudKitAddress;
	NSString* _incomingHandshakeToken;
	NSString* _outgoingHandshakeToken;
	NSString* _preferredReachableAddress;
	NSString* _preferredReachableService;
	NSMutableArray* _relationshipEvents;
	NSData* _relationshipShareID;
	NSData* _remoteActivityShareID;
	NSData* _remoteRelationshipShareID;
	NSData* _systemFieldsOnlyRecord;
	NSData* _uuid;
	SCD_Struct_AS5 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasIncomingHandshakeToken; 
@property (nonatomic,retain) NSString * incomingHandshakeToken;                 //@synthesize incomingHandshakeToken=_incomingHandshakeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasOutgoingHandshakeToken; 
@property (nonatomic,retain) NSString * outgoingHandshakeToken;                 //@synthesize outgoingHandshakeToken=_outgoingHandshakeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudKitAddress; 
@property (nonatomic,retain) NSString * cloudKitAddress;                        //@synthesize cloudKitAddress=_cloudKitAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredReachableAddress; 
@property (nonatomic,retain) NSString * preferredReachableAddress;              //@synthesize preferredReachableAddress=_preferredReachableAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredReachableService; 
@property (nonatomic,retain) NSString * preferredReachableService;              //@synthesize preferredReachableService=_preferredReachableService - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemFieldsOnlyRecord; 
@property (nonatomic,retain) NSData * systemFieldsOnlyRecord;                   //@synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationshipShareID; 
@property (nonatomic,retain) NSData * relationshipShareID;                      //@synthesize relationshipShareID=_relationshipShareID - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteRelationshipShareID; 
@property (nonatomic,retain) NSData * remoteRelationshipShareID;                //@synthesize remoteRelationshipShareID=_remoteRelationshipShareID - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteActivityShareID; 
@property (nonatomic,retain) NSData * remoteActivityShareID;                    //@synthesize remoteActivityShareID=_remoteActivityShareID - In the implementation block
@property (nonatomic,retain) NSMutableArray * addresses;                        //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * relationshipEvents;               //@synthesize relationshipEvents=_relationshipEvents - In the implementation block
+(Class)addressesType;
+(Class)relationshipEventsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(NSData *)uuid;
-(void)setUuid:(NSData *)arg1 ;
-(void)setAddresses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)addresses;
-(BOOL)hasUuid;
-(NSData *)systemFieldsOnlyRecord;
-(NSData *)remoteRelationshipShareID;
-(NSString *)incomingHandshakeToken;
-(void)setIncomingHandshakeToken:(NSString *)arg1 ;
-(NSString *)outgoingHandshakeToken;
-(void)setOutgoingHandshakeToken:(NSString *)arg1 ;
-(NSString *)cloudKitAddress;
-(void)setCloudKitAddress:(NSString *)arg1 ;
-(NSString *)preferredReachableAddress;
-(void)setPreferredReachableAddress:(NSString *)arg1 ;
-(NSString *)preferredReachableService;
-(void)setPreferredReachableService:(NSString *)arg1 ;
-(NSMutableArray *)relationshipEvents;
-(void)setRemoteRelationshipShareID:(NSData *)arg1 ;
-(void)setRelationshipShareID:(NSData *)arg1 ;
-(void)setSystemFieldsOnlyRecord:(NSData *)arg1 ;
-(void)setRelationshipEvents:(NSMutableArray *)arg1 ;
-(NSData *)relationshipShareID;
-(void)setRemoteActivityShareID:(NSData *)arg1 ;
-(NSData *)remoteActivityShareID;
-(void)addAddresses:(id)arg1 ;
-(void)addRelationshipEvents:(id)arg1 ;
-(unsigned long long)addressesCount;
-(void)clearAddresses;
-(id)addressesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)relationshipEventsCount;
-(void)clearRelationshipEvents;
-(id)relationshipEventsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIncomingHandshakeToken;
-(BOOL)hasOutgoingHandshakeToken;
-(BOOL)hasCloudKitAddress;
-(BOOL)hasPreferredReachableAddress;
-(BOOL)hasPreferredReachableService;
-(BOOL)hasSystemFieldsOnlyRecord;
-(BOOL)hasRelationshipShareID;
-(BOOL)hasRemoteRelationshipShareID;
-(BOOL)hasRemoteActivityShareID;
@end
