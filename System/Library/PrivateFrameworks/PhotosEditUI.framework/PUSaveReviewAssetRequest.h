/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXRunNodeDelegate.h>

@protocol PUEditableAsset;
@class PUReviewCreateAssetNode, PUVideoExportNode, PUEditableMediaProvider, NSURL, PLPhotoEditModel, PUPhotoEditIrisModel, PHContentEditingOutput, NSString;

@interface PUSaveReviewAssetRequest : NSObject <PXRunNodeDelegate> {

	/*^block*/id _completionHandler;
	double _beginTimestamp;
	PUReviewCreateAssetNode* _outputNode;
	PUVideoExportNode* _videoExportNode;
	int _identifier;
	id<PUEditableAsset> _editableAsset;
	PUEditableMediaProvider* _editableMediaProvider;
	NSURL* _directory;
	PLPhotoEditModel* _editModel;
	PUPhotoEditIrisModel* _irisModel;
	PHContentEditingOutput* _contentEditingOutput;
	long long _workImageVersion;
	long long _currentState;

}

@property (nonatomic,readonly) int identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> editableAsset;                            //@synthesize editableAsset=_editableAsset - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * editableMediaProvider;              //@synthesize editableMediaProvider=_editableMediaProvider - In the implementation block
@property (nonatomic,readonly) NSURL * directory;                                            //@synthesize directory=_directory - In the implementation block
@property (nonatomic,copy,readonly) PLPhotoEditModel * editModel;                            //@synthesize editModel=_editModel - In the implementation block
@property (nonatomic,copy,readonly) PUPhotoEditIrisModel * irisModel;                        //@synthesize irisModel=_irisModel - In the implementation block
@property (nonatomic,readonly) PHContentEditingOutput * contentEditingOutput;                //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (nonatomic,readonly) long long workImageVersion;                                   //@synthesize workImageVersion=_workImageVersion - In the implementation block
@property (nonatomic,readonly) long long currentState;                                       //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) BOOL supportsProgress; 
@property (nonatomic,readonly) double progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)identifier;
-(long long)currentState;
-(double)progress;
-(PHContentEditingOutput *)contentEditingOutput;
-(void)runNode:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)runNode:(id)arg1 didCancelWithError:(id)arg2 ;
-(void)_transitionToState:(long long)arg1 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6 ;
-(id)initWithAssetForCopying:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 resourceURL:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 editModel:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6 ;
-(id)initWithAssetForRevertToOriginal:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 ;
-(void)cancelSaveOperation;
-(BOOL)supportsProgress;
-(void)beginSaveOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(PLPhotoEditModel *)editModel;
-(long long)workImageVersion;
-(long long)_imageRequestVersion;
-(long long)_videoRequestVersion;
-(PUPhotoEditIrisModel *)irisModel;
-(BOOL)_requiresVideoRender;
-(void)_handleOutputNodeFinishedWithError:(id)arg1 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 editModel:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7 ;
-(void)_performInternalSaveOperation;
-(void)_performSaveOperation;
-(id<PUEditableAsset>)editableAsset;
-(PUEditableMediaProvider *)editableMediaProvider;
-(void)_finishWithAsset:(id)arg1 error:(id)arg2 ;
-(NSURL *)directory;
@end

