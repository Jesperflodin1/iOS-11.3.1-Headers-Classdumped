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

@class BLTPBBulletinSummary;

@interface BLTPBAddBulletinSummaryRequest : PBRequest <NSCopying> {

	BLTPBBulletinSummary* _bulletin;

}

@property (nonatomic,readonly) BOOL hasBulletin; 
@property (nonatomic,retain) BLTPBBulletinSummary * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BLTPBBulletinSummary *)bulletin;
-(void)setBulletin:(BLTPBBulletinSummary *)arg1 ;
-(BOOL)hasBulletin;
@end

