/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NSDictionary;

@interface PIAutoLoopStabVideoNode : NURenderNode {

	NSDictionary* _bakedRecipe;

}

@property (nonatomic,readonly) NSDictionary * bakedRecipe;              //@synthesize bakedRecipe=_bakedRecipe - In the implementation block
+(id)nodeWithInput:(id)arg1 recipe:(id)arg2 error:(out id*)arg3 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(NSDictionary*)arg2 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 bakedRecipe:(id)arg3 ;
-(NSDictionary *)bakedRecipe;
@end

