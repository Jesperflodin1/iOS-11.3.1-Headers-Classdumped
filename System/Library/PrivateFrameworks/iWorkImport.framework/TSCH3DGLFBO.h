/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLFramebuffer.h>

@class TSCH3DFBOLoader, TSCH3DResource;

@interface TSCH3DGLFBO : TSCH3DGLFramebuffer {

	TSCH3DFBOLoader* mLoader;
	TSCH3DResource* mResource;
	BOOL mPreserveProtectedResourceAfterDestroy;

}

@property (assign,nonatomic) BOOL preserveProtectedResourceAfterDestroy; 
+(id)FBOFromContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 textureAttributes:(const FramebufferAttributes*)arg4 resource:(id)arg5 FBOClass:(Class)arg6 RTTRenderbufferAllocatorBlock:(/*^block*/id)arg7 ;
+(id)FBOFromContext:(id)arg1 size:(tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6 ;
+(id)FBOFromContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 textureAttributes:(const FramebufferAttributes*)arg4 resource:(id)arg5 ;
-(BOOL)isTexturable;
-(void)bindColorbufferInSession:(id)arg1 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(BOOL)validForSession:(id)arg1 ;
-(void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2 ;
-(void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2 ;
-(BOOL)bindInSession:(id)arg1 ;
-(id)initFromContext:(id)arg1 size:(tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6 ;
-(void)destroyResourcesInSession:(id)arg1 ;
-(BOOL)preserveProtectedResourceAfterDestroy;
-(id)FBOHandleForSession:(id)arg1 ;
-(SessionLoadResourceResult)loadInsideSession:(id)arg1 ;
-(void)discardColorBuffer;
-(BOOL)isProtectedInSession:(id)arg1 ;
-(id)GLHandleForSession:(id)arg1 ;
-(void)disableSamplingInSession:(id)arg1 ;
-(void)discardDepthBuffer;
-(void)discardBuffers;
-(unsigned long long)estimatedMemroyInBytes;
-(void)setPreserveProtectedResourceAfterDestroy:(BOOL)arg1 ;
-(tvec2<int>)size;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(id)loader;
@end

