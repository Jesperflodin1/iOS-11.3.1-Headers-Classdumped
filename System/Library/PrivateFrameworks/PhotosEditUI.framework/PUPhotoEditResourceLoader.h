/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUEditableAsset;
@class PUEditableMediaProvider, PUPhotoEditResourceLoadRequest, NSMutableArray, PHResourceDownloadRequest;

@interface PUPhotoEditResourceLoader : NSObject {

	BOOL _loadingMedia;
	id<PUEditableAsset> _asset;
	PUEditableMediaProvider* _mediaProvider;
	long long _resourcesAvailability;
	PUPhotoEditResourceLoadRequest* __currentRequest;
	NSMutableArray* __enqueuedRequests;
	PHResourceDownloadRequest* __downloadRequest;

}

@property (assign,setter=_setResourcesAvailability:,nonatomic) long long resourcesAvailability;                        //@synthesize resourcesAvailability=_resourcesAvailability - In the implementation block
@property (assign,setter=_setLoadingMedia:,getter=isLoadingMedia,nonatomic) BOOL loadingMedia;                         //@synthesize loadingMedia=_loadingMedia - In the implementation block
@property (setter=_setCurrentRequest:,nonatomic,retain) PUPhotoEditResourceLoadRequest * _currentRequest;              //@synthesize _currentRequest=__currentRequest - In the implementation block
@property (setter=_setEnqueuedRequests:,nonatomic,retain) NSMutableArray * _enqueuedRequests;                          //@synthesize _enqueuedRequests=__enqueuedRequests - In the implementation block
@property (setter=_setDownloadRequest:,nonatomic,retain) PHResourceDownloadRequest * _downloadRequest;                 //@synthesize _downloadRequest=__downloadRequest - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> asset;                                                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;                                                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (getter=areResourcesAvailable,nonatomic,readonly) BOOL resourcesAvailable; 
@property (getter=isDownloadingResources,nonatomic,readonly) BOOL downloadingResources; 
-(void)enqueueRequest:(id)arg1 ;
-(id<PUEditableAsset>)asset;
-(PUPhotoEditResourceLoadRequest *)_currentRequest;
-(void)_setCurrentRequest:(id)arg1 ;
-(PUEditableMediaProvider *)mediaProvider;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)cancelAllRequests;
-(long long)resourcesAvailability;
-(BOOL)isLoadingMedia;
-(BOOL)areResourcesAvailable;
-(BOOL)isDownloadingResources;
-(NSMutableArray *)_enqueuedRequests;
-(void)_setEnqueuedRequests:(id)arg1 ;
-(void)_initiateRequest:(id)arg1 ;
-(PHResourceDownloadRequest *)_downloadRequest;
-(void)_setDownloadRequest:(id)arg1 ;
-(void)_checkIfDownloadRequiredWithRequest:(id)arg1 ;
-(void)_fetchResourcesWithRequest:(id)arg1 ;
-(void)_setResourcesAvailability:(long long)arg1 ;
-(void)_handleDownloadRequired:(BOOL)arg1 withRequest:(id)arg2 downloadRequest:(id)arg3 ;
-(void)_handleDownloadCompletedWithRequest:(id)arg1 success:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4 ;
-(void)_dequeueRequestIfNeeded;
-(void)_setLoadingMedia:(BOOL)arg1 ;
-(void)_fetchMediaForRequest:(id)arg1 result:(id)arg2 ;
-(void)_loadAdjustmentsIfNeededWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_assetNeedsImageURLLoaded;
-(BOOL)_assetNeedsVideoLoaded;
-(int)_loadImageIfNeededWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_loadImageURLIfNeededWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_loadVideoIfNeededWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSuccess:(BOOL)arg1 withResult:(id)arg2 forRequest:(id)arg3 error:(id)arg4 ;
-(void)_handleDidLoadAdjustmentData:(id)arg1 forAsset:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateEditModel:(id)arg1 withAsset:(id)arg2 ;
@end
