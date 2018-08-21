/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCommandValue.h>
@class _SFPBReferentialCommand, NSData;


@protocol _SFPBCommandValue <NSObject>
@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand; 
@property (nonatomic,readonly) BOOL hasReferentialCommand; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(id)arg1;
-(BOOL)hasReferentialCommand;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBReferentialCommand, NSData, NSString;

@interface _SFPBCommandValue : PBCodable <_SFPBCommandValue, NSSecureCoding> {

	_SFPBReferentialCommand* _referentialCommand;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand;              //@synthesize referentialCommand=_referentialCommand - In the implementation block
@property (nonatomic,readonly) BOOL hasReferentialCommand; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(_SFPBReferentialCommand *)arg1 ;
-(BOOL)hasReferentialCommand;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
@end
