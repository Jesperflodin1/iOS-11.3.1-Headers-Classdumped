/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRColorProtobuf : PBCodable <NSCopying> {

	float _alpha;
	float _blue;
	float _green;
	float _red;
	SCD_Struct_MR16 _has;

}

@property (assign,nonatomic) BOOL hasRed; 
@property (assign,nonatomic) float red;                  //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) BOOL hasGreen; 
@property (assign,nonatomic) float green;                //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) BOOL hasBlue; 
@property (assign,nonatomic) float blue;                 //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) BOOL hasAlpha; 
@property (assign,nonatomic) float alpha;                //@synthesize alpha=_alpha - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(float)alpha;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)red;
-(float)green;
-(float)blue;
-(id)dictionaryRepresentation;
-(void)setRed:(float)arg1 ;
-(void)setGreen:(float)arg1 ;
-(void)setBlue:(float)arg1 ;
-(void)setHasRed:(BOOL)arg1 ;
-(BOOL)hasRed;
-(void)setHasGreen:(BOOL)arg1 ;
-(BOOL)hasGreen;
-(void)setHasBlue:(BOOL)arg1 ;
-(BOOL)hasBlue;
-(void)setHasAlpha:(BOOL)arg1 ;
-(BOOL)hasAlpha;
@end

