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

@class VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _bounds;
	int _faceID;
	int _mouthExpression;
	int _position;
	VCPProtoTimeRange* _timeRange;
	BOOL _isCloseup;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) int mouthExpression;                        //@synthesize mouthExpression=_mouthExpression - In the implementation block
@property (assign,nonatomic) int position;                               //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) VCPProtoBounds * bounds;                    //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL isCloseup;                             //@synthesize isCloseup=_isCloseup - In the implementation block
@property (assign,nonatomic) int faceID;                                 //@synthesize faceID=_faceID - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(void)setFaceID:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoBounds *)bounds;
-(void)setBounds:(VCPProtoBounds *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(int)mouthExpression;
-(void)setMouthExpression:(int)arg1 ;
-(BOOL)isCloseup;
-(void)setIsCloseup:(BOOL)arg1 ;
-(int)faceID;
@end

