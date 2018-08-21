/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {

	NSMutableArray* _changedRecords;
	NSMutableArray* _changedShares;
	NSData* _clientChangeToken;
	int _status;
	NSData* _syncContinuationToken;
	BOOL _pendingArchivedRecords;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,retain) NSMutableArray * changedRecords;              //@synthesize changedRecords=_changedRecords - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (nonatomic,readonly) BOOL hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                   //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * changedShares;               //@synthesize changedShares=_changedShares - In the implementation block
@property (assign,nonatomic) BOOL hasPendingArchivedRecords; 
@property (assign,nonatomic) BOOL pendingArchivedRecords;                  //@synthesize pendingArchivedRecords=_pendingArchivedRecords - In the implementation block
+(Class)changedRecordType;
+(Class)changedShareType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(BOOL)hasClientChangeToken;
-(NSData *)clientChangeToken;
-(void)addChangedRecord:(id)arg1 ;
-(void)addChangedShare:(id)arg1 ;
-(unsigned long long)changedRecordsCount;
-(void)clearChangedRecords;
-(id)changedRecordAtIndex:(unsigned long long)arg1 ;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(unsigned long long)changedSharesCount;
-(void)clearChangedShares;
-(id)changedShareAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSyncContinuationToken;
-(void)setPendingArchivedRecords:(BOOL)arg1 ;
-(void)setHasPendingArchivedRecords:(BOOL)arg1 ;
-(BOOL)hasPendingArchivedRecords;
-(NSMutableArray *)changedRecords;
-(void)setChangedRecords:(NSMutableArray *)arg1 ;
-(NSData *)syncContinuationToken;
-(NSMutableArray *)changedShares;
-(void)setChangedShares:(NSMutableArray *)arg1 ;
-(BOOL)pendingArchivedRecords;
@end

