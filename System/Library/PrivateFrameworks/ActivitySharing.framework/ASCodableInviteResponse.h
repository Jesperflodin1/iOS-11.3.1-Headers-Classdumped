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

@class ASCodableActivityDataPreview, NSString, ASCodableShareLocations;

@interface ASCodableInviteResponse : PBCodable <NSCopying> {

	ASCodableActivityDataPreview* _activityDataPreview;
	NSString* _handshakeToken;
	NSString* _inviteeBuildNumber;
	NSString* _inviteeCloudKitAddress;
	ASCodableShareLocations* _inviteeShareLocations;
	unsigned _inviteeVersion;
	int _responseCode;
	SCD_Struct_AS3 _has;

}

@property (nonatomic,readonly) BOOL hasHandshakeToken; 
@property (nonatomic,retain) NSString * handshakeToken;                                       //@synthesize handshakeToken=_handshakeToken - In the implementation block
@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                                                //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteeCloudKitAddress; 
@property (nonatomic,retain) NSString * inviteeCloudKitAddress;                               //@synthesize inviteeCloudKitAddress=_inviteeCloudKitAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteeShareLocations; 
@property (nonatomic,retain) ASCodableShareLocations * inviteeShareLocations;                 //@synthesize inviteeShareLocations=_inviteeShareLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteeBuildNumber; 
@property (nonatomic,retain) NSString * inviteeBuildNumber;                                   //@synthesize inviteeBuildNumber=_inviteeBuildNumber - In the implementation block
@property (assign,nonatomic) BOOL hasInviteeVersion; 
@property (assign,nonatomic) unsigned inviteeVersion;                                         //@synthesize inviteeVersion=_inviteeVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityDataPreview; 
@property (nonatomic,retain) ASCodableActivityDataPreview * activityDataPreview;              //@synthesize activityDataPreview=_activityDataPreview - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setResponseCode:(int)arg1 ;
-(int)responseCode;
-(void)setHandshakeToken:(NSString *)arg1 ;
-(BOOL)hasHandshakeToken;
-(NSString *)handshakeToken;
-(void)setActivityDataPreview:(ASCodableActivityDataPreview *)arg1 ;
-(BOOL)hasActivityDataPreview;
-(ASCodableActivityDataPreview *)activityDataPreview;
-(void)setInviteeCloudKitAddress:(NSString *)arg1 ;
-(void)setInviteeShareLocations:(ASCodableShareLocations *)arg1 ;
-(void)setInviteeBuildNumber:(NSString *)arg1 ;
-(void)setHasResponseCode:(BOOL)arg1 ;
-(BOOL)hasResponseCode;
-(BOOL)hasInviteeCloudKitAddress;
-(BOOL)hasInviteeShareLocations;
-(BOOL)hasInviteeBuildNumber;
-(void)setInviteeVersion:(unsigned)arg1 ;
-(void)setHasInviteeVersion:(BOOL)arg1 ;
-(BOOL)hasInviteeVersion;
-(NSString *)inviteeCloudKitAddress;
-(ASCodableShareLocations *)inviteeShareLocations;
-(NSString *)inviteeBuildNumber;
-(unsigned)inviteeVersion;
@end

