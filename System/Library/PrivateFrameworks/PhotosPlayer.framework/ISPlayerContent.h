/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVPlayerItem, NSNumber;

@interface ISPlayerContent : NSObject {

	BOOL _photoHasColorAdjustments;
	BOOL _photoIsOriginal;
	int _photoEXIFOrientation;
	CGImageRef _photo;
	AVPlayerItem* _videoPlayerItem;
	NSNumber* _variationIdentifier;
	SCD_Struct_IS4 _photoTime;
	SCD_Struct_IS4 _videoDuration;
	SCD_Struct_IS4 _prePhotoFrameTime;
	SCD_Struct_IS4 _postPhotoFrameTime;

}

@property (nonatomic,readonly) CGImageRef photo;                               //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                       //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 photoTime;                       //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 videoDuration;                   //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * videoPlayerItem;                 //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (nonatomic,readonly) BOOL photoHasColorAdjustments;                  //@synthesize photoHasColorAdjustments=_photoHasColorAdjustments - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 prePhotoFrameTime;               //@synthesize prePhotoFrameTime=_prePhotoFrameTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 postPhotoFrameTime;              //@synthesize postPhotoFrameTime=_postPhotoFrameTime - In the implementation block
@property (nonatomic,readonly) BOOL photoIsOriginal;                           //@synthesize photoIsOriginal=_photoIsOriginal - In the implementation block
@property (nonatomic,readonly) NSNumber * variationIdentifier;                 //@synthesize variationIdentifier=_variationIdentifier - In the implementation block
-(CGImageRef)photo;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_IS4)photoTime;
-(SCD_Struct_IS4)videoDuration;
-(AVPlayerItem *)videoPlayerItem;
-(BOOL)photoHasColorAdjustments;
-(SCD_Struct_IS4)prePhotoFrameTime;
-(SCD_Struct_IS4)postPhotoFrameTime;
-(BOOL)photoIsOriginal;
-(NSNumber *)variationIdentifier;
-(id)initWithPhoto:(CGImageRef)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 photoTime:(SCD_Struct_IS4)arg4 videoDuration:(SCD_Struct_IS4)arg5 photoHasColorAdjustments:(BOOL)arg6 videoPlayerItem:(id)arg7 prePhotoFrameTime:(SCD_Struct_IS4)arg8 postPhotoFrameTime:(SCD_Struct_IS4)arg9 variationIdentifier:(id)arg10 ;
-(int)photoEXIFOrientation;
@end
