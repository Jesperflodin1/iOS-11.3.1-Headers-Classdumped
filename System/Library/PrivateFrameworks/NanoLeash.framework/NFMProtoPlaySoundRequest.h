/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoLeash/NanoLeash-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFMProtoPlaySoundRequest : PBRequest <NSCopying> {

	double _timeStamp;
	SCD_Struct_NF1 _has;

}

@property (assign,nonatomic) BOOL hasTimeStamp; 
@property (assign,nonatomic) double timeStamp;               //@synthesize timeStamp=_timeStamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(void)setHasTimeStamp:(BOOL)arg1 ;
-(BOOL)hasTimeStamp;
@end

