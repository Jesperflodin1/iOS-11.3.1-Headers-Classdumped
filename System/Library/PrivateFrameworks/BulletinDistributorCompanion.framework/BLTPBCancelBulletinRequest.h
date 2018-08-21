/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying> {

	double _date;
	unsigned _feed;
	NSString* _publisherMatchID;
	NSString* _universalSectionID;
	SCD_Struct_BL3 _has;

}

@property (nonatomic,readonly) BOOL hasUniversalSectionID; 
@property (nonatomic,retain) NSString * universalSectionID;              //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherMatchID; 
@property (nonatomic,retain) NSString * publisherMatchID;                //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (assign,nonatomic) BOOL hasFeed; 
@property (assign,nonatomic) unsigned feed;                              //@synthesize feed=_feed - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                //@synthesize date=_date - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)feed;
-(NSString *)universalSectionID;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(void)setFeed:(unsigned)arg1 ;
-(BOOL)hasUniversalSectionID;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(BOOL)hasPublisherMatchID;
-(void)setHasFeed:(BOOL)arg1 ;
-(BOOL)hasFeed;
-(BOOL)hasDate;
-(void)setHasDate:(BOOL)arg1 ;
-(NSString *)publisherMatchID;
@end

