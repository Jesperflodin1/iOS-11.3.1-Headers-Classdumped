/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailUserSuggestionsEngagment : PBCodable <NSCopying> {

	long long _searchTermLength;
	BOOL _topHitsPresent;
	BOOL _userSelectedTopHit;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTopHitsPresent; 
@property (assign,nonatomic) BOOL topHitsPresent;                     //@synthesize topHitsPresent=_topHitsPresent - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectedTopHit; 
@property (assign,nonatomic) BOOL userSelectedTopHit;                 //@synthesize userSelectedTopHit=_userSelectedTopHit - In the implementation block
@property (assign,nonatomic) BOOL hasSearchTermLength; 
@property (assign,nonatomic) long long searchTermLength;              //@synthesize searchTermLength=_searchTermLength - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTopHitsPresent:(BOOL)arg1 ;
-(void)setHasTopHitsPresent:(BOOL)arg1 ;
-(BOOL)hasTopHitsPresent;
-(void)setUserSelectedTopHit:(BOOL)arg1 ;
-(void)setHasUserSelectedTopHit:(BOOL)arg1 ;
-(BOOL)hasUserSelectedTopHit;
-(void)setSearchTermLength:(long long)arg1 ;
-(void)setHasSearchTermLength:(BOOL)arg1 ;
-(BOOL)hasSearchTermLength;
-(BOOL)topHitsPresent;
-(BOOL)userSelectedTopHit;
-(long long)searchTermLength;
-(id)initWithSearchTermLength:(unsigned long long)arg1 topHitsPresent:(BOOL)arg2 userSelectedTopHit:(BOOL)arg3 ;
@end

