/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLBindable.h>

@class NSString;

@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable> {

	unsigned mTexture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTexturable;
+(id)colorbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)depthbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)bufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 internalFormat:(unsigned)arg2 format:(unsigned)arg3 attachment:(unsigned)arg4 ;
+(BOOL)isEqual:(id)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(void)deactivateInContext:(id)arg1 ;
-(id)initWithGLTexture:(unsigned)arg1 ;
-(void)bindInSession:(id)arg1 ;
-(void)dealloc;
-(BOOL)valid;
@end

