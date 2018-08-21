/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NTPBDate, NSString;

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying> {

	NSData* _changeToken;
	NTPBDate* _lastCleanDate;
	NTPBDate* _lastDirtyDate;
	NSString* _zoneName;

}

@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                   //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeToken; 
@property (nonatomic,retain) NSData * changeToken;                  //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasLastCleanDate; 
@property (nonatomic,retain) NTPBDate * lastCleanDate;              //@synthesize lastCleanDate=_lastCleanDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastDirtyDate; 
@property (nonatomic,retain) NTPBDate * lastDirtyDate;              //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasLastCleanDate;
-(BOOL)hasLastDirtyDate;
-(BOOL)hasZoneName;
-(BOOL)hasChangeToken;
-(NTPBDate *)lastCleanDate;
-(NTPBDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NTPBDate *)arg1 ;
-(void)setLastCleanDate:(NTPBDate *)arg1 ;
-(NSData *)changeToken;
-(void)setChangeToken:(NSData *)arg1 ;
-(NSString *)zoneName;
-(void)setZoneName:(NSString *)arg1 ;
@end
