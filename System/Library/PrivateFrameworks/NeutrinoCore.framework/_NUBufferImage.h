/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUImage.h>
#import <libobjc.A.dylib/NUBufferImage.h>
#import <libobjc.A.dylib/NUMutableBufferImage.h>
#import <libobjc.A.dylib/NUPurgeableBufferImage.h>
#import <libobjc.A.dylib/NUMutablePurgeableBufferImage.h>

@class NSString, NUImageLayout, NUPixelFormat, NUColorSpace, NURegion;

@interface _NUBufferImage : _NUImage <NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU5 size; 
@property (copy,readonly) NURegion * validRegion; 
-(void)readBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)writeBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU6)arg2 toPoint:(SCD_Struct_NU5)arg3 device:(id)arg4 ;
-(BOOL)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU6)arg2 toPoint:(SCD_Struct_NU5)arg3 ;
@end

