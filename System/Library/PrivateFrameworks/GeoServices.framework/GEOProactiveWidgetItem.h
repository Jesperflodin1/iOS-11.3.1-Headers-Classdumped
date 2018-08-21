/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOProactiveWidgetItem : PBCodable <NSCopying> {

	int _timeSinceStart;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasTimeSinceStart; 
@property (assign,nonatomic) int timeSinceStart;                  //@synthesize timeSinceStart=_timeSinceStart - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTimeSinceStart:(int)arg1 ;
-(void)setHasTimeSinceStart:(BOOL)arg1 ;
-(BOOL)hasTimeSinceStart;
-(int)timeSinceStart;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

