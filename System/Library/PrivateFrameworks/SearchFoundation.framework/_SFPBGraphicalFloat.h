/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBGraphicalFloat.h>
@class NSData;


@protocol _SFPBGraphicalFloat <NSObject>
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,readonly) BOOL hasDoubleValue; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setDoubleValue:(double)arg1;
-(BOOL)hasDoubleValue;
-(double)doubleValue;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBGraphicalFloat : PBCodable <_SFPBGraphicalFloat, NSSecureCoding> {

	SCD_Struct_SF2 _has;
	double _doubleValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double doubleValue;                    //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDoubleValue; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(BOOL)hasDoubleValue;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithCGFloat:(double)arg1 ;
-(NSData *)jsonData;
@end

