/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError;

@interface SYLogErrorInfo : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;

}

@property (nonatomic,readonly) NSError * cocoaError; 
@property (nonatomic,retain) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                      //@synthesize code=_code - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)domain;
-(long long)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithCocoaError:(id)arg1 ;
-(NSError *)cocoaError;
-(void)setDomain:(NSString *)arg1 ;
-(void)setCode:(long long)arg1 ;
@end

