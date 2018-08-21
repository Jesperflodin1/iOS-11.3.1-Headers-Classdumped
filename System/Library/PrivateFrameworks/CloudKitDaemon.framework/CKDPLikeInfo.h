/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPLikeInfo : PBCodable <NSCopying> {

	int _likeCount;
	BOOL _likedByCurrentUser;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasLikeCount; 
@property (assign,nonatomic) int likeCount;                           //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) BOOL hasLikedByCurrentUser; 
@property (assign,nonatomic) BOOL likedByCurrentUser;                 //@synthesize likedByCurrentUser=_likedByCurrentUser - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)likeCount;
-(void)setLikeCount:(int)arg1 ;
-(void)setHasLikeCount:(BOOL)arg1 ;
-(BOOL)hasLikeCount;
-(void)setLikedByCurrentUser:(BOOL)arg1 ;
-(void)setHasLikedByCurrentUser:(BOOL)arg1 ;
-(BOOL)hasLikedByCurrentUser;
-(BOOL)likedByCurrentUser;
@end
