/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYSyncBatchResponse : PBCodable <NSCopying> {

	unsigned long long _index;
	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSString* _sessionID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(BOOL)hasError;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)setError:(SYErrorInfo *)arg1 ;
-(SYErrorInfo *)error;
@end

