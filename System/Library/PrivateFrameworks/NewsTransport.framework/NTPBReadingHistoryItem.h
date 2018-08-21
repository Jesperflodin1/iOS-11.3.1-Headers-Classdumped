/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <NSCopying> {

	long long _maxVersionRead;
	long long _maxVersionSeen;
	NSString* _articleID;
	NTPBDate* _firstSeenDate;
	NTPBDate* _firstSeenDateOfMaxVersionSeen;
	unsigned _flags;
	NTPBDate* _lastVisitedDate;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedDate;                            //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                        //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionRead; 
@property (assign,nonatomic) long long maxVersionRead;                              //@synthesize maxVersionRead=_maxVersionRead - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDate; 
@property (nonatomic,retain) NTPBDate * firstSeenDate;                              //@synthesize firstSeenDate=_firstSeenDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDateOfMaxVersionSeen; 
@property (nonatomic,retain) NTPBDate * firstSeenDateOfMaxVersionSeen;              //@synthesize firstSeenDateOfMaxVersionSeen=_firstSeenDateOfMaxVersionSeen - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionSeen; 
@property (assign,nonatomic) long long maxVersionSeen;                              //@synthesize maxVersionSeen=_maxVersionSeen - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)flags;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasArticleID;
-(BOOL)hasLastVisitedDate;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setHasMaxVersionRead:(BOOL)arg1 ;
-(BOOL)hasMaxVersionRead;
-(BOOL)hasFirstSeenDate;
-(BOOL)hasFirstSeenDateOfMaxVersionSeen;
-(void)setHasMaxVersionSeen:(BOOL)arg1 ;
-(BOOL)hasMaxVersionSeen;
-(NSString *)articleID;
-(long long)maxVersionSeen;
-(void)setMaxVersionSeen:(long long)arg1 ;
-(long long)maxVersionRead;
-(void)setMaxVersionRead:(long long)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(NTPBDate *)lastVisitedDate;
-(void)setLastVisitedDate:(NTPBDate *)arg1 ;
-(NTPBDate *)firstSeenDate;
-(void)setFirstSeenDate:(NTPBDate *)arg1 ;
-(NTPBDate *)firstSeenDateOfMaxVersionSeen;
-(void)setFirstSeenDateOfMaxVersionSeen:(NTPBDate *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
@end

