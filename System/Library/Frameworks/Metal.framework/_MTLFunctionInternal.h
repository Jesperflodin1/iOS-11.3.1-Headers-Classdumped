/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLFunction.h>

@class NSString;

@interface _MTLFunctionInternal : _MTLFunction {

	MTLFunctionData _functionData;
	unsigned char _publicMetadataInitialized;
	unsigned char _privateMetadataInitialized;
	MTLProgramObject* _programObject;
	NSString* _filePath;
	long long _lineNumber;

}
-(void)setArguments:(id)arg1 ;
-(unsigned long long)patchType;
-(long long)patchControlPointCount;
-(id)stageInputAttributes;
-(id)functionConstantsDictionary;
-(BOOL)needsFunctionConstantValues;
-(id)functionConstants;
-(unsigned char)bitcodeType;
-(unsigned long long)bitCodeFileSize;
-(unsigned long long)bitCodeOffset;
-(const SCD_Struct_MT44*)bitCodeHash;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 functionData:(MTLFunctionData*)arg4 device:(id)arg5 ;
-(void)setReturnType:(id)arg1 ;
-(void)setFunctionConstants:(id)arg1 ;
-(void)setVertexAttributes:(id)arg1 ;
-(id)newSpecializedFunctionWithConstants:(id)arg1 functionCache:(id)arg2 error:(id*)arg3 ;
-(void)newSpecializedFunctionWithConstants:(id)arg1 functionCache:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)initializePublicMetadata;
-(void)initializePrivateMetadata;
-(const MTLFunctionData*)functionData;
-(void)setStageInputAttributes:(id)arg1 ;
-(id)functionInputs;
-(void)setLineNumber:(long long)arg1 ;
-(long long)lineNumber;
-(id)returnType;
-(void)dealloc;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(id)vertexAttributes;
-(MTLProgramObject*)programObject;
-(id)arguments;
@end
