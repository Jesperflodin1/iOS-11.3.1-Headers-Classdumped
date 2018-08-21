/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotosEditUI/PhotosEditUI-Structs.h>
@class AVAssetImageGenerator, NSObject, NSMutableDictionary, NSMutableArray, AVAsset, AVVideoComposition;

@interface PUVideoEditScrubberImageSource : NSObject {

	AVAssetImageGenerator* _imageGenerator;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _cachedImages;
	NSMutableDictionary* _requestCompletionHandlers;
	NSMutableArray* _pendingTimestampRequests;
	AVAsset* _videoAsset;
	AVVideoComposition* _videoComposition;
	CGSize _maximumThumbnailSize;

}

@property (nonatomic,readonly) AVAsset * videoAsset;                               //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) CGSize maximumThumbnailSize;                          //@synthesize maximumThumbnailSize=_maximumThumbnailSize - In the implementation block
-(id)init;
-(void)dealloc;
-(AVAsset *)videoAsset;
-(AVVideoComposition *)videoComposition;
-(id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2 ;
-(void)cancelPendingThumbnailRequests;
-(void)_performThumbnailRequestForTimestamp:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_isolationQueue_processPendingRequests;
-(void)_handleGeneratorResult:(long long)arg1 image:(CGImageRef)arg2 requestedTime:(SCD_Struct_PU4)arg3 actualTime:(SCD_Struct_PU4)arg4 error:(id)arg5 cmTimeToDouble:(id)arg6 ;
-(void)_isolationQueue_handleGeneratorResult:(long long)arg1 image:(CGImageRef)arg2 requestedTime:(SCD_Struct_PU4)arg3 actualTime:(SCD_Struct_PU4)arg4 error:(id)arg5 cmTimeToDouble:(id)arg6 ;
-(id)initWithAVAsset:(id)arg1 ;
-(void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)processPendingThumbnailRequests;
-(void)setMaximumThumbnailSize:(CGSize)arg1 ;
-(CGSize)maximumThumbnailSize;
@end

