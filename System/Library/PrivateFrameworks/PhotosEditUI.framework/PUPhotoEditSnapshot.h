/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAdjustmentData, NSData, AVURLAsset;

@interface PUPhotoEditSnapshot : NSObject {

	long long _workImageVersion;
	PHAdjustmentData* _adjustmentData;
	NSData* _imageData;
	NSData* _baseImageData;
	AVURLAsset* _videoComplement;
	AVURLAsset* _baseVideoComplement;

}

@property (assign,setter=_setWorkImageVersion:,nonatomic) long long workImageVersion;                       //@synthesize workImageVersion=_workImageVersion - In the implementation block
@property (setter=_setAdjustmentData:,nonatomic,retain) PHAdjustmentData * adjustmentData;                  //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (setter=_setImageData:,nonatomic,retain) NSData * imageData;                                      //@synthesize imageData=_imageData - In the implementation block
@property (setter=_setBaseImageData:,nonatomic,retain) NSData * baseImageData;                              //@synthesize baseImageData=_baseImageData - In the implementation block
@property (setter=_setVideoComplement:,nonatomic,retain) AVURLAsset * videoComplement;                      //@synthesize videoComplement=_videoComplement - In the implementation block
@property (setter=_setBaseVideoComplement:,nonatomic,retain) AVURLAsset * baseVideoComplement;              //@synthesize baseVideoComplement=_baseVideoComplement - In the implementation block
+(void)captureSnapshotForAsset:(id)arg1 mediaProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)_setImageData:(id)arg1 ;
-(PHAdjustmentData *)adjustmentData;
-(AVURLAsset *)videoComplement;
-(NSData *)imageData;
-(void)_setWorkImageVersion:(long long)arg1 ;
-(id)_copyData:(id)arg1 ;
-(long long)workImageVersion;
-(NSData *)baseImageData;
-(id)_copyAsset:(id)arg1 ;
-(id)_copyDataAtURL:(id)arg1 ;
-(void)_copySourceData:(id)arg1 destinationData:(out id*)arg2 destinationURL:(out id*)arg3 ;
-(void)_setBaseImageData:(id)arg1 ;
-(void)_setVideoComplement:(id)arg1 ;
-(void)_setBaseVideoComplement:(id)arg1 ;
-(void)_setAdjustmentData:(id)arg1 ;
-(AVURLAsset *)baseVideoComplement;
@end

