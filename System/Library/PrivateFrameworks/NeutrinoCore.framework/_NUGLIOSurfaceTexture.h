/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLTexture.h>

@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture {

	NUIOSurface* _surface;

}

@property (nonatomic,readonly) NUIOSurface * surface;              //@synthesize surface=_surface - In the implementation block
-(id)initWithIOSurface:(id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU5)arg1 format:(id)arg2 ;
-(BOOL)isSurface;
-(void)allocateStorage:(id)arg1 ;
-(NUIOSurface *)surface;
@end

