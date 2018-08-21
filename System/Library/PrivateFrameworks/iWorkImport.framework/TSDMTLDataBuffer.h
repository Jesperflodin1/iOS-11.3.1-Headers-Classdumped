/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMTLDataBuffer <NSObject,TSDGPUDataBufferSharedAccessors>
@property (assign,nonatomic) unsigned long long metalDrawMode; 
@property (readonly) unsigned long long positionAttributeIndex; 
@property (readonly) unsigned long long texCoordAttributeIndex; 
@property (readonly) unsigned long long centerAttributeIndex; 
@required
+(id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(BOOL)arg4 device:(id)arg5;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 device:(id)arg4;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 device:(id)arg5;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 device:(id)arg6;
+(id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(CGSize)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 textureFlipped:(BOOL)arg3 device:(id)arg4;
-(void)setMetalDrawMode:(unsigned long long)arg1;
-(unsigned long long)metalDrawMode;
-(void)enableDataBuffer;
-(void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(NSRange)arg3;
-(void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)disableWithDevice:(id)arg1;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)updateDataBufferAttributesWithBlock:(/*^block*/id)arg1;
-(unsigned long long)positionAttributeIndex;
-(unsigned long long)texCoordAttributeIndex;
-(unsigned long long)centerAttributeIndex;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(BOOL)arg4;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5;

@end

