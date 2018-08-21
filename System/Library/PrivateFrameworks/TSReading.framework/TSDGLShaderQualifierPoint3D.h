/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier {

	SCD_Struct_TS81 _GLPoint3DValue;
	SCD_Struct_TS81 _proposedGLPoint3DValue;

}

@property (getter=LPoint3DValue,nonatomic,readonly) SCD_Struct_TS81 GLPoint3DValue;              //@synthesize GLPoint3DValue=_GLPoint3DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS81 proposedGLPoint3DValue;                             //@synthesize proposedGLPoint3DValue=_proposedGLPoint3DValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS81)GLPoint3DValue;
-(void)setProposedGLPoint3DValue:(SCD_Struct_TS81)arg1 ;
-(SCD_Struct_TS81)proposedGLPoint3DValue;
@end

