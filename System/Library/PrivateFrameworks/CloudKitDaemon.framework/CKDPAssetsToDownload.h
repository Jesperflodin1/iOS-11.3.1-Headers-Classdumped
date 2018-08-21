/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {

	CKDPRequestedFields* _assetFields;
	BOOL _allAssets;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasAllAssets; 
@property (assign,nonatomic) BOOL allAssets;                                 //@synthesize allAssets=_allAssets - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFields; 
@property (nonatomic,retain) CKDPRequestedFields * assetFields;              //@synthesize assetFields=_assetFields - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAssetFields:(CKDPRequestedFields *)arg1 ;
-(CKDPRequestedFields *)assetFields;
-(void)setAllAssets:(BOOL)arg1 ;
-(BOOL)hasAssetFields;
-(void)setHasAllAssets:(BOOL)arg1 ;
-(BOOL)hasAllAssets;
-(BOOL)allAssets;
@end

