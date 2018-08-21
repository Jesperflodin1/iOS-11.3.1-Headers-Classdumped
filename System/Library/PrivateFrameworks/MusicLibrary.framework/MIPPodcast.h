/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying> {

	MIPArtist* _artist;
	NSString* _externalGuid;
	NSString* _feedUrl;
	MIPSeries* _series;

}

@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                   //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalGuid; 
@property (nonatomic,retain) NSString * externalGuid;              //@synthesize externalGuid=_externalGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedUrl; 
@property (nonatomic,retain) NSString * feedUrl;                   //@synthesize feedUrl=_feedUrl - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasArtist;
-(void)setSeries:(MIPSeries *)arg1 ;
-(BOOL)hasSeries;
-(MIPSeries *)series;
-(void)setExternalGuid:(NSString *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(BOOL)hasExternalGuid;
-(BOOL)hasFeedUrl;
-(NSString *)externalGuid;
-(NSString *)feedUrl;
-(MIPArtist *)artist;
-(void)setArtist:(MIPArtist *)arg1 ;
@end

