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

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying> {

	double _date;
	NSString* _phoneSectionID;
	NSString* _publisherMatchID;
	NSString* _replyToken;
	BOOL _didPlayLightsAndSirens;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasDidPlayLightsAndSirens; 
@property (assign,nonatomic) BOOL didPlayLightsAndSirens;                 //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherMatchID; 
@property (nonatomic,retain) NSString * publisherMatchID;                 //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneSectionID; 
@property (nonatomic,retain) NSString * phoneSectionID;                   //@synthesize phoneSectionID=_phoneSectionID - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasReplyToken; 
@property (nonatomic,retain) NSString * replyToken;                       //@synthesize replyToken=_replyToken - In the implementation block
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
-(void)setReplyToken:(NSString *)arg1 ;
-(BOOL)hasReplyToken;
-(NSString *)replyToken;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(BOOL)didPlayLightsAndSirens;
-(NSString *)phoneSectionID;
-(void)setDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasPublisherMatchID;
-(void)setPhoneSectionID:(NSString *)arg1 ;
-(void)setHasDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasDidPlayLightsAndSirens;
-(BOOL)hasPhoneSectionID;
-(BOOL)hasDate;
-(void)setHasDate:(BOOL)arg1 ;
-(NSString *)publisherMatchID;
@end
