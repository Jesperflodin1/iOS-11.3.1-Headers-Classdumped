/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVAsset, AVVideoComposition, NUImageGeometry;


@protocol NULivePhotoRenderResult <NURenderResult>
@property (readonly) AVAsset * video; 
@property (readonly) AVVideoComposition * videoComposition; 
@property (readonly) CGImageRef photo; 
@property (readonly) SCD_Struct_NU7 photoTime; 
@property (readonly) NUImageGeometry * videoGeometry; 
@required
-(CGImageRef)photo;
-(NUImageGeometry *)videoGeometry;
-(AVVideoComposition *)videoComposition;
-(SCD_Struct_NU7)photoTime;
-(AVAsset *)video;

@end

