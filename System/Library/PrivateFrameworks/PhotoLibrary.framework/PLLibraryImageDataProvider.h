/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLImageCache, PLImageLoadingQueue, NSMutableDictionary;

@interface PLLibraryImageDataProvider : NSObject {

	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	NSMutableDictionary* _imageSources;

}
-(id)init;
-(void)dealloc;
-(void)pauseLoading;
-(void)resumeLoading;
-(id)_imageSourceForFormat:(int)arg1 ;
-(id)loadImageSynchronously:(BOOL)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelLoadForAsset:(id)arg1 ;
-(void)cancelLoadForAsset:(id)arg1 format:(int)arg2 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2 ;
@end

