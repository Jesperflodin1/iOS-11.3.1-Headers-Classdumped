/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceContainerNode.h>

@class NUSourceNode;

@interface NUSingleSourceContainerNode : NUSourceContainerNode {

	NUSourceNode* _source;

}
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(SCD_Struct_NU5*)arg2 error:(out id*)arg3 ;
-(id)initWithSourceNode:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)primarySourceNode;
@end
