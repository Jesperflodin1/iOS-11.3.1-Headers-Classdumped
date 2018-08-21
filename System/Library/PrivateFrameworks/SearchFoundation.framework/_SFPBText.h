/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBText.h>
@class NSString, NSData;


@protocol _SFPBText <NSObject>
@property (copy) NSString * text; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) unsigned maxLines; 
@property (nonatomic,readonly) BOOL hasMaxLines; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(BOOL)hasText;
-(BOOL)hasMaxLines;
-(id)initWithJSON:(id)arg1;
-(void)setMaxLines:(unsigned)arg1;
-(unsigned)maxLines;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBText : PBCodable <_SFPBText, NSSecureCoding> {

	SCD_Struct_SF2 _has;
	unsigned _maxLines;
	NSString* _text;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) unsigned maxLines;                     //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxLines; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)hasText;
-(id)dictionaryRepresentation;
-(BOOL)hasMaxLines;
-(id)initWithJSON:(id)arg1 ;
-(void)setMaxLines:(unsigned)arg1 ;
-(unsigned)maxLines;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
@end

