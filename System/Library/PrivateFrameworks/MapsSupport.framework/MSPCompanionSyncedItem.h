/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, MSPBookmarkStorage, MSPPinStorage, MSPHistoryEntryStorage;

@interface MSPCompanionSyncedItem : PBCodable <SYObject, SYChange, SYObject, NSCopying> {

	PBUnknownFields* _unknownFields;
	MSPBookmarkStorage* _bookmark;
	int _changeType;
	MSPPinStorage* _pin;
	MSPHistoryEntryStorage* _searchRequest;
	NSString* _syncId;
	SCD_Struct_MS3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long syChangeType; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (nonatomic,readonly) BOOL hasSyncId; 
@property (nonatomic,retain) NSString * syncId;                                   //@synthesize syncId=_syncId - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasBookmark; 
@property (nonatomic,retain) MSPBookmarkStorage * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasPin; 
@property (nonatomic,retain) MSPPinStorage * pin;                                 //@synthesize pin=_pin - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchRequest; 
@property (nonatomic,retain) MSPHistoryEntryStorage * searchRequest;              //@synthesize searchRequest=_searchRequest - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)syncIdWithPrefix:(id)arg1 identifier:(id)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)objectIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPin:(MSPPinStorage *)arg1 ;
-(MSPPinStorage *)pin;
-(void)setSyncId:(NSString *)arg1 ;
-(MSPBookmarkStorage *)bookmark;
-(void)setBookmark:(MSPBookmarkStorage *)arg1 ;
-(long long)changeType;
-(NSString *)sequencer;
-(NSString *)syncId;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(BOOL)hasSyncId;
-(BOOL)hasBookmark;
-(BOOL)hasPin;
-(BOOL)hasSearchRequest;
-(MSPHistoryEntryStorage *)searchRequest;
-(void)setSearchRequest:(MSPHistoryEntryStorage *)arg1 ;
-(long long)syChangeType;
-(void)setSyChangeType:(long long)arg1 ;
@end
