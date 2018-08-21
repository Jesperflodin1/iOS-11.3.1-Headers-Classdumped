/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLMixinFramebuffer.h>
#import <iWorkImport/TSCH3DGLResolveFramebuffer.h>

@class TSCH3DGLFramebufferMultisample;

@interface TSCH3DGLMultisampleFramebuffer : TSCH3DGLMixinFramebuffer <TSCH3DGLResolveFramebuffer> {

	TSCH3DGLFramebufferMultisample* mMultisample;
	BOOL mDisableDestroyAssertion;

}

@property (nonatomic,readonly) FramebufferAttributes resolveAttributes; 
@property (assign,nonatomic) BOOL disableDestroyAssertion; 
+(id)multisampleFramebufferWithFramebufferAttributes:(const FramebufferAttributes*)arg1 ;
+(FramebufferAttributes)resolveAttributesFromFramebufferAttribute:(const FramebufferAttributes*)arg1 ;
-(void)bindColorbufferInSession:(id)arg1 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(BOOL)validForSession:(id)arg1 ;
-(id)initWithFramebufferAttributes:(const FramebufferAttributes*)arg1 ;
-(id)resolvingFramebuffer;
-(BOOL)bindInSession:(id)arg1 ;
-(FramebufferAttributes)resolveAttributes;
-(void)destroyResourcesInSession:(id)arg1 ;
-(void)disableSamplingInSession:(id)arg1 ;
-(id)resolveFramebufferContext;
-(BOOL)activateResolveFramebufferInsideSession:(id)arg1 ;
-(tvec2<int>)resolveFramebufferSize;
-(BOOL)resolveFramebufferValidForSession:(id)arg1 ;
-(id)resolveFramebufferHandleForSession:(id)arg1 ;
-(FramebufferAttributes)resolveFramebufferAttributes;
-(BOOL)p_usingMultisample;
-(BOOL)disableDestroyAssertion;
-(void)setDisableDestroyAssertion:(BOOL)arg1 ;
-(void)dealloc;
@end

