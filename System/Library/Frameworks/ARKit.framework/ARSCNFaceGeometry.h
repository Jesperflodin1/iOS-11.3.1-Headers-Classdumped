/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;
@interface ARSCNFaceGeometry : SCNGeometry {

	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _normalBuffer;
	id<MTLBuffer> _textureBuffer;

}

@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;               //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> normalBuffer;               //@synthesize normalBuffer=_normalBuffer - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> textureBuffer;              //@synthesize textureBuffer=_textureBuffer - In the implementation block
+(id)faceGeometryWithDevice:(id)arg1 eyesFilled:(BOOL)arg2 mouthFilled:(BOOL)arg3 ;
+(id)faceGeometryWithDevice:(id)arg1 ;
+(id)faceGeometryWithDevice:(id)arg1 fillMesh:(BOOL)arg2 ;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(void)setNormalBuffer:(id<MTLBuffer>)arg1 ;
-(void)setTextureBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)vertexBuffer;
-(id<MTLBuffer>)normalBuffer;
-(void)updateFromFaceGeometry:(id)arg1 ;
-(id<MTLBuffer>)textureBuffer;
@end

