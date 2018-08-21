/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLLibrary, MTLDevice, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSDictionary;

@interface EspressoMetalKernelsCache : NSObject {

	id<MTLLibrary> m_ShaderLibrary;
	id<MTLLibrary> m_DefaultLibrary;
	id<MTLDevice> _device;
	BOOL isSupportingiOSGPUFamilyV2;
	NSObject*<OS_dispatch_queue> dictionary_write_queue;
	NSMutableDictionary* auxLibraries;
	NSMutableDictionary* m_kernelCache_rw;
	NSString* _kernelPrefix;
	NSDictionary* _m_kernelCache;

}

@property (retain) NSDictionary * m_kernelCache;                   //@synthesize m_kernelCache=_m_kernelCache - In the implementation block
@property (nonatomic,retain) NSString * kernelPrefix;              //@synthesize kernelPrefix=_kernelPrefix - In the implementation block
-(id)kernelForFunction:(const char*)arg1 cacheString:(const char*)arg2 withConstants:(id)arg3 ;
-(void)setKernelPrefix:(NSString *)arg1 ;
-(BOOL)shouldUseTexArray;
-(NSDictionary *)m_kernelCache;
-(void)setM_kernelCache:(NSDictionary *)arg1 ;
-(void)loadLibraryNamed:(id)arg1 ;
-(void)addLibraryAtPath:(id)arg1 ;
-(id)kernelForFunction:(const char*)arg1 ;
-(NSString *)kernelPrefix;
-(id)initWithDevice:(id)arg1 ;
@end

