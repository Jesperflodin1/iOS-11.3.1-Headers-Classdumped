/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol MTLDevice, MTLLibrary, OS_dispatch_queue, OS_dispatch_semaphore;
@class NSURL, NSOperationQueue, NSSet, NSObject, NSDictionary, NSMapTable, NSString;

@interface SCNMetalLibraryManager : NSObject <NSFilePresenter> {

	id<MTLDevice> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLLibrary> _frameworkLibrary;
	NSURL* _resourcesFolderURL;
	NSOperationQueue* _watchingFolderQueue;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	BOOL _traceResources;
	id<MTLLibrary> _commonProfileCacheLibrary;
	NSDictionary* _commonProfilePrecompiledFunctions;
	_C3DFXMetalProgram* _defaultProgram;
	_C3DFXMetalProgram* _defaultProgramForTessellation;
	_C3DFXMetalProgram* _isolateProgram;
	NSObject*<OS_dispatch_semaphore> _sharedHashCodeSemaphore;
	CFStringRef _sharedHashCodeString;
	NSMapTable* _availableLibraries;
	CFDictionaryRef _availableCompiledLibraries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(void)dealloc;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidChange;
-(id)frameworkLibrary;
-(_C3DFXProgram*)defaultProgramUsingTessellation:(BOOL)arg1 ;
-(id)deviceQueue;
-(id)libraryForCommonProfileCache;
-(id)hashCodeForSource:(id)arg1 macros:(id)arg2 hashStorageLock:(id*)arg3 ;
-(id)newCommonProfileFunctionWithName:(id)arg1 ;
-(_C3DFXProgram*)isolateProgram;
-(void)libraryForSourceCode:(id)arg1 preprocessorsMacros:(id)arg2 programDelegate:(_C3DFXProgramDelegate*)arg3 programDesc:(SCD_Struct_SC81*)arg4 async:(BOOL)arg5 group:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)libraryForFile:(id)arg1 ;
-(void)clearCompiledLibraries;
-(id)computePipelineForSourceCode:(id)arg1 functionName:(id)arg2 compileOptions:(id)arg3 ;
-(void)reloadFrameworkLibrary;
-(id)initWithDevice:(id)arg1 ;
@end

