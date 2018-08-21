/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXRunNode.h>

@class PUEditableMediaProviderAdjustmentDataNode, PUPhotoEditBaseMediaNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode;

@interface PUPhotoEditSnapshotFinishingNode : PXRunNode {

	PUEditableMediaProviderAdjustmentDataNode* _adjustmentNode;
	PUPhotoEditBaseMediaNode* _baseMediaNode;
	PUEditableMediaProviderImageDataNode* _currentImageNode;
	PUEditableMediaProviderVideoAssetNode* _currentVideoNode;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) PUEditableMediaProviderAdjustmentDataNode * adjustmentNode;              //@synthesize adjustmentNode=_adjustmentNode - In the implementation block
@property (nonatomic,readonly) PUPhotoEditBaseMediaNode * baseMediaNode;                                //@synthesize baseMediaNode=_baseMediaNode - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProviderImageDataNode * currentImageNode;                 //@synthesize currentImageNode=_currentImageNode - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProviderVideoAssetNode * currentVideoNode;                //@synthesize currentVideoNode=_currentVideoNode - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)run;
-(id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(PUEditableMediaProviderAdjustmentDataNode *)adjustmentNode;
-(PUPhotoEditBaseMediaNode *)baseMediaNode;
-(PUEditableMediaProviderImageDataNode *)currentImageNode;
-(PUEditableMediaProviderVideoAssetNode *)currentVideoNode;
@end

