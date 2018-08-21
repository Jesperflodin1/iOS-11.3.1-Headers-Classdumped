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

@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _faceSharpness;
	float _sharpness;
	SCD_Struct_VC31 _has;

}

@property (assign,nonatomic) float sharpness;                    //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) BOOL hasFaceSharpness; 
@property (assign,nonatomic) float faceSharpness;                //@synthesize faceSharpness=_faceSharpness - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSharpness:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setFaceSharpness:(float)arg1 ;
-(void)setHasFaceSharpness:(BOOL)arg1 ;
-(BOOL)hasFaceSharpness;
-(float)faceSharpness;
-(float)sharpness;
@end

