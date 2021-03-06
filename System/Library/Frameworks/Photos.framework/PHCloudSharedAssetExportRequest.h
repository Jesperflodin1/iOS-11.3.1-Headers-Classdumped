/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetExportRequest.h>

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest {

	int _imageManagerImageRequestId;
	int _imageManagerVideoRequestId;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
-(void)_requestLivePhotoURLsForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)_requestImageURLForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)_requestVideoURLForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

