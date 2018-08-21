/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTimeRange;

@interface VCPProtoMovieSceneResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _distanceToPreviousScene;
	float _flickerScore;
	float _qualityScore;
	VCPProtoTimeRange* _timeRange;
	SCD_Struct_VC32 _has;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;                //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) float qualityScore;                           //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToPreviousScene; 
@property (assign,nonatomic) float distanceToPreviousScene;                //@synthesize distanceToPreviousScene=_distanceToPreviousScene - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerScore; 
@property (assign,nonatomic) float flickerScore;                           //@synthesize flickerScore=_flickerScore - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(void)setDistanceToPreviousScene:(float)arg1 ;
-(void)setHasDistanceToPreviousScene:(BOOL)arg1 ;
-(BOOL)hasDistanceToPreviousScene;
-(void)setFlickerScore:(float)arg1 ;
-(void)setHasFlickerScore:(BOOL)arg1 ;
-(BOOL)hasFlickerScore;
-(float)distanceToPreviousScene;
-(float)flickerScore;
-(float)qualityScore;
-(void)setQualityScore:(float)arg1 ;
@end

