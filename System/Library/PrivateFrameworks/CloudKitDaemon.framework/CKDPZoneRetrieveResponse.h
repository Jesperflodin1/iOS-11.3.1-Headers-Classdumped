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

@class NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _zoneSummarys;

}

@property (nonatomic,retain) NSMutableArray * zoneSummarys;              //@synthesize zoneSummarys=_zoneSummarys - In the implementation block
+(Class)zoneSummaryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addZoneSummary:(id)arg1 ;
-(unsigned long long)zoneSummarysCount;
-(void)clearZoneSummarys;
-(id)zoneSummaryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)zoneSummarys;
-(void)setZoneSummarys:(NSMutableArray *)arg1 ;
@end

