/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>
#import <libobjc.A.dylib/NUGLFramebufferAttachable.h>

@protocol EAGLDrawable;
@class NUPixelFormat;

@interface NUGLRenderbuffer : NUGLObject <NUGLFramebufferAttachable> {

	id<EAGLDrawable> _drawable;
	NUPixelFormat* _format;
	SCD_Struct_NU5 _size;

}

@property (nonatomic,readonly) SCD_Struct_NU5 size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;              //@synthesize format=_format - In the implementation block
-(void)delete;
-(id)init;
-(SCD_Struct_NU5)size;
-(NUPixelFormat *)format;
-(id)initWithSize:(SCD_Struct_NU5)arg1 format:(id)arg2 ;
-(void)read:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)attachToFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(id)initWithDrawable:(id)arg1 ;
-(void)generate:(id)arg1 ;
-(void)flushDrawableWithContext:(id)arg1 ;
-(void)draw:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyRect:(SCD_Struct_NU6)arg1 toBuffer:(id)arg2 atPoint:(SCD_Struct_NU5)arg3 context:(id)arg4 ;
@end

