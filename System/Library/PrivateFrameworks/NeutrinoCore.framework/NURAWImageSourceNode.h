/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUCGImageSourceNode.h>

@class NSCache;

@interface NURAWImageSourceNode : NUCGImageSourceNode {

	NSCache* _propertiesByOptionCache;

}
-(BOOL)load:(out id*)arg1 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 ;
-(void)_addDefaultFinalizedSourceOptions:(id)arg1 ;
-(int)_filterTypeForClassName:(id)arg1 ;
-(id)_RAWCameraSpaceProperties:(id)arg1 RAWProperties:(id)arg2 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(void)_processRAWProperties:(id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)_neutralColorArrayForSettings:(id)arg1 ;
-(id)_neutralColorVectorForSettings:(id)arg1 ;
-(id)_rawMethodVersionForSettings:(id)arg1 error:(out id*)arg2 ;
-(id)_cachedRawImagePropertiesForOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_sourceOptionsForSettings:(id)arg1 rawMethodVersion:(id)arg2 sushiLevel:(id)arg3 ;
-(id)sourceOptionsForSettings:(id)arg1 error:(out id*)arg2 ;
-(id)_appendFilter:(id)arg1 filterType:(int)arg2 settings:(id)arg3 source:(id)arg4 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 identifier:(id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
@end
