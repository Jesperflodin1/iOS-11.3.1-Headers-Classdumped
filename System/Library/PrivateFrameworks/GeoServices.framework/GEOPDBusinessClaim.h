/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _buttonLabel;
	NSString* _descriptionText;
	NSString* _titleText;
	BOOL _buttonEnabled;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasButtonLabel; 
@property (nonatomic,retain) NSString * buttonLabel;                         //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (assign,nonatomic) BOOL hasButtonEnabled; 
@property (assign,nonatomic) BOOL buttonEnabled;                             //@synthesize buttonEnabled=_buttonEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleText; 
@property (nonatomic,retain) NSString * titleText;                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptionText; 
@property (nonatomic,retain) NSString * descriptionText;                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)businessClaimForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasButtonLabel;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(void)setHasButtonEnabled:(BOOL)arg1 ;
-(BOOL)hasButtonEnabled;
-(BOOL)hasTitleText;
-(BOOL)hasDescriptionText;
-(NSString *)buttonLabel;
-(void)setButtonLabel:(NSString *)arg1 ;
-(BOOL)buttonEnabled;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTitleText:(NSString *)arg1 ;
@end

