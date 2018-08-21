/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBRangeValue, _INPBPriceRangeValue, NSString;

@interface _INPBRidePartySizeOption : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBRangeValue* _partySizeRange;
	_INPBPriceRangeValue* _priceRange;
	NSString* _sizeDescription;

}

@property (nonatomic,readonly) BOOL hasPartySizeRange; 
@property (nonatomic,retain) _INPBRangeValue * partySizeRange;               //@synthesize partySizeRange=_partySizeRange - In the implementation block
@property (nonatomic,readonly) BOOL hasSizeDescription; 
@property (nonatomic,retain) NSString * sizeDescription;                     //@synthesize sizeDescription=_sizeDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceRange; 
@property (nonatomic,retain) _INPBPriceRangeValue * priceRange;              //@synthesize priceRange=_priceRange - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasPriceRange;
-(_INPBPriceRangeValue *)priceRange;
-(void)setPriceRange:(_INPBPriceRangeValue *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBRangeValue *)partySizeRange;
-(NSString *)sizeDescription;
-(void)setPartySizeRange:(_INPBRangeValue *)arg1 ;
-(void)setSizeDescription:(NSString *)arg1 ;
-(BOOL)hasPartySizeRange;
-(BOOL)hasSizeDescription;
@end

