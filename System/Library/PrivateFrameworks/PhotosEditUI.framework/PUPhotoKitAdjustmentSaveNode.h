/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXRunNode.h>

@protocol PUVideoURLNode;
@class PUPhotoKitImageDataNode, PUImageDataRenderNode, PUPhotoEditIrisModel;

@interface PUPhotoKitAdjustmentSaveNode : PXRunNode {

	BOOL _success;
	PUPhotoKitImageDataNode* _imageDataNode;
	PUImageDataRenderNode* _imageRenderNode;
	id<PUVideoURLNode> _videoNode;
	PUPhotoEditIrisModel* _livePhotoModel;

}

@property (nonatomic,readonly) PUPhotoKitImageDataNode * imageDataNode;                 //@synthesize imageDataNode=_imageDataNode - In the implementation block
@property (nonatomic,readonly) PUImageDataRenderNode * imageRenderNode;                 //@synthesize imageRenderNode=_imageRenderNode - In the implementation block
@property (nonatomic,readonly) id<PUVideoURLNode> videoNode;                            //@synthesize videoNode=_videoNode - In the implementation block
@property (nonatomic,copy,readonly) PUPhotoEditIrisModel * livePhotoModel;              //@synthesize livePhotoModel=_livePhotoModel - In the implementation block
@property (nonatomic,readonly) BOOL success;                                            //@synthesize success=_success - In the implementation block
-(void)run;
-(BOOL)success;
-(PUPhotoKitImageDataNode *)imageDataNode;
-(PUPhotoEditIrisModel *)livePhotoModel;
-(id)initWithImageDataNode:(id)arg1 imageRenderNode:(id)arg2 videoNode:(id)arg3 livePhotoModel:(id)arg4 ;
-(PUImageDataRenderNode *)imageRenderNode;
-(long long)_baseExifOrientation;
-(double)_baseDuration;
-(id)_exportProperties;
-(long long)_adjustmentBaseVersion;
-(id<PUVideoURLNode>)videoNode;
-(void)_handleDidCompleteChangeWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

