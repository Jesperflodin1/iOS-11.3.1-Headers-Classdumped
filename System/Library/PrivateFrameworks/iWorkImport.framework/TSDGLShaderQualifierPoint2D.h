/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier {

	SCD_Struct_TS581 _GLPoint2DValue;
	SCD_Struct_TS581 _proposedGLPoint2DValue;

}

@property (getter=LPoint2DValue,nonatomic,readonly) SCD_Struct_TS581 GLPoint2DValue;              //@synthesize GLPoint2DValue=_GLPoint2DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS581 proposedGLPoint2DValue;                             //@synthesize proposedGLPoint2DValue=_proposedGLPoint2DValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS581)GLPoint2DValue;
-(void)setProposedGLPoint2DValue:(SCD_Struct_TS581)arg1 ;
-(SCD_Struct_TS581)proposedGLPoint2DValue;
@end

