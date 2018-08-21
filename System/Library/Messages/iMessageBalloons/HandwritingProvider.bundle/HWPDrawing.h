/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface HWPDrawing : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _compressionAlgorithm;
	unsigned _decompressedLength;
	NSData* _encodedCanvasSize;
	NSData* _encodedStrokesFrame;
	unsigned _strokeDataFieldCount;
	NSData* _strokes;
	unsigned _strokesCount;
	unsigned _version;
	SCD_Struct_HW3 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasEncodedCanvasSize; 
@property (nonatomic,retain) NSData * encodedCanvasSize;                     //@synthesize encodedCanvasSize=_encodedCanvasSize - In the implementation block
@property (nonatomic,readonly) BOOL hasEncodedStrokesFrame; 
@property (nonatomic,retain) NSData * encodedStrokesFrame;                   //@synthesize encodedStrokesFrame=_encodedStrokesFrame - In the implementation block
@property (assign,nonatomic) BOOL hasStrokesCount; 
@property (assign,nonatomic) unsigned strokesCount;                          //@synthesize strokesCount=_strokesCount - In the implementation block
@property (assign,nonatomic) BOOL hasCompressionAlgorithm; 
@property (assign,nonatomic) int compressionAlgorithm;                       //@synthesize compressionAlgorithm=_compressionAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL hasDecompressedLength; 
@property (assign,nonatomic) unsigned decompressedLength;                    //@synthesize decompressedLength=_decompressedLength - In the implementation block
@property (assign,nonatomic) BOOL hasStrokeDataFieldCount; 
@property (assign,nonatomic) unsigned strokeDataFieldCount;                  //@synthesize strokeDataFieldCount=_strokeDataFieldCount - In the implementation block
@property (nonatomic,readonly) BOOL hasStrokes; 
@property (nonatomic,retain) NSData * strokes;                               //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setEncodedCanvasSize:(NSData *)arg1 ;
-(void)setEncodedStrokesFrame:(NSData *)arg1 ;
-(int)compressionAlgorithm;
-(unsigned)decompressedLength;
-(NSData *)encodedCanvasSize;
-(NSData *)encodedStrokesFrame;
-(unsigned)strokesCount;
-(unsigned)strokeDataFieldCount;
-(void)setCompressionAlgorithm:(int)arg1 ;
-(void)setDecompressedLength:(unsigned)arg1 ;
-(void)setStrokesCount:(unsigned)arg1 ;
-(void)setStrokeDataFieldCount:(unsigned)arg1 ;
-(void)setHasCompressionAlgorithm:(BOOL)arg1 ;
-(BOOL)hasCompressionAlgorithm;
-(int)StringAsCompressionAlgorithm:(id)arg1 ;
-(id)compressionAlgorithmAsString:(int)arg1 ;
-(BOOL)hasStrokesCount;
-(BOOL)hasDecompressedLength;
-(BOOL)hasEncodedCanvasSize;
-(void)setHasDecompressedLength:(BOOL)arg1 ;
-(void)setHasStrokesCount:(BOOL)arg1 ;
-(BOOL)hasEncodedStrokesFrame;
-(void)setHasStrokeDataFieldCount:(BOOL)arg1 ;
-(BOOL)hasStrokeDataFieldCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(NSData *)strokes;
-(void)setStrokes:(NSData *)arg1 ;
-(BOOL)hasStrokes;
@end

