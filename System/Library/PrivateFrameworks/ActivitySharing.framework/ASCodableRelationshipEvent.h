/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableRelationshipEvent : PBCodable <NSCopying> {

	long long _anchor;
	double _timestamp;
	long long _type;
	long long _version;
	SCD_Struct_AS1 _has;

}

@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) long long anchor;               //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setType:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(long long)anchor;
-(void)setAnchor:(long long)arg1 ;
-(void)setHasAnchor:(BOOL)arg1 ;
-(BOOL)hasAnchor;
@end

