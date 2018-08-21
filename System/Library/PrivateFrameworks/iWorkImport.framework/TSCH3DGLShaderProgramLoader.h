/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@interface TSCH3DGLShaderProgramLoader : TSCH3DResourceLoader
+(id)loader;
-(id)generateHandleWithConfig:(void*)arg1 ;
-(unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(void)compileShaderSource:(IteratorRange<const char *>)arg1 forHandle:(id)arg2 ;
-(void)postbindHandle:(id)arg1 config:(void*)arg2 ;
-(id)activateShader:(id)arg1 insideSession:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

