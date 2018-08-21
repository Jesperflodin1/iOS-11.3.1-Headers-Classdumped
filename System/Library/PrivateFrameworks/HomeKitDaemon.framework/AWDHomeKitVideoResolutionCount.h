/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitVideoResolutionCount : PBCodable <NSCopying> {

	unsigned _count;
	int _resolution;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasResolution; 
@property (assign,nonatomic) int resolution;                  //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                  //@synthesize count=_count - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)resolution;
-(void)setResolution:(int)arg1 ;
-(void)setHasResolution:(BOOL)arg1 ;
-(BOOL)hasResolution;
-(id)resolutionAsString:(int)arg1 ;
-(int)StringAsResolution:(id)arg1 ;
@end

