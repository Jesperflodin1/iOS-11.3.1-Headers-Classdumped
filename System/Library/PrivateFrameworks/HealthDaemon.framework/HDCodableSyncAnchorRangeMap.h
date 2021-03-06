/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableSyncAnchorRangeMap : PBCodable <NSCopying> {

	NSMutableArray* _anchorRanges;

}

@property (nonatomic,retain) NSMutableArray * anchorRanges;              //@synthesize anchorRanges=_anchorRanges - In the implementation block
+(Class)anchorRangesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addAnchorRanges:(id)arg1 ;
-(unsigned long long)anchorRangesCount;
-(void)clearAnchorRanges;
-(id)anchorRangesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)anchorRanges;
-(void)setAnchorRanges:(NSMutableArray *)arg1 ;
@end

