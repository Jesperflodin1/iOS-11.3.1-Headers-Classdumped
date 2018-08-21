/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, PFVideoSharingOperation, PFPhotoSharingOperation;

@interface PFSharingRemakerOperation : NSObject {

	NSURL* _imageOutputURL;
	NSURL* _videoOutputURL;
	NSString* __uuid;
	long long __inputType;
	PFVideoSharingOperation* __videoOperation;
	PFPhotoSharingOperation* __imageOperation;

}

@property (setter=_setUUID:,nonatomic,copy) NSString * _uuid;                                                   //@synthesize _uuid=__uuid - In the implementation block
@property (assign,setter=_setInputType:,nonatomic) long long _inputType;                                        //@synthesize _inputType=__inputType - In the implementation block
@property (setter=_setVideoOperation:,nonatomic,retain) PFVideoSharingOperation * _videoOperation;              //@synthesize _videoOperation=__videoOperation - In the implementation block
@property (setter=_setImageOperation:,nonatomic,retain) PFPhotoSharingOperation * _imageOperation;              //@synthesize _imageOperation=__imageOperation - In the implementation block
@property (setter=_setImageOutputURL:,nonatomic,copy) NSURL * imageOutputURL;                                   //@synthesize imageOutputURL=_imageOutputURL - In the implementation block
@property (setter=_setVideoOutputURL:,nonatomic,copy) NSURL * videoOutputURL;                                   //@synthesize videoOutputURL=_videoOutputURL - In the implementation block
+(id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4 ;
-(id)init;
-(NSString *)_uuid;
-(void)_setVideoOperation:(id)arg1 ;
-(void)_setImageOperation:(id)arg1 ;
-(void)_setImageOutputURL:(id)arg1 ;
-(void)_setVideoOutputURL:(id)arg1 ;
-(PFVideoSharingOperation *)_videoOperation;
-(PFPhotoSharingOperation *)_imageOperation;
-(NSURL *)videoOutputURL;
-(NSURL *)imageOutputURL;
-(long long)_inputType;
-(void)_setInputType:(long long)arg1 ;
-(void)_setUUID:(id)arg1 ;
@end

