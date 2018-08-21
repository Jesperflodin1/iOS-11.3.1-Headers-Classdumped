/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL, NSArray, NSDate, CAMStillImageCaptureCoordinationInfo, NSError;

@interface CAMVideoCaptureResult : NSObject {

	NSURL* _localDestinationURL;
	NSURL* _filteredLocalDestinationURL;
	NSArray* _metadata;
	double _videoZoomFactor;
	long long _reason;
	IOSurfaceRef _videoPreviewSurface;
	NSDate* _captureDate;
	CAMStillImageCaptureCoordinationInfo* _coordinationInfo;
	NSError* _error;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,readonly) NSURL * localDestinationURL;                                          //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,readonly) NSURL * filteredLocalDestinationURL;                                  //@synthesize filteredLocalDestinationURL=_filteredLocalDestinationURL - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                                      //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata;                                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) double videoZoomFactor;                                               //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) long long reason;                                                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef videoPreviewSurface;                                     //@synthesize videoPreviewSurface=_videoPreviewSurface - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,readonly) CAMStillImageCaptureCoordinationInfo * coordinationInfo;              //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                      //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(SCD_Struct_CA2)duration;
-(long long)reason;
-(NSArray *)metadata;
-(NSDate *)captureDate;
-(SCD_Struct_CA2)stillDisplayTime;
-(NSError *)error;
-(CAMStillImageCaptureCoordinationInfo *)coordinationInfo;
-(double)videoZoomFactor;
-(NSURL *)localDestinationURL;
-(NSURL *)filteredLocalDestinationURL;
-(id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 duration:(SCD_Struct_CA2)arg3 stillDisplayTime:(SCD_Struct_CA2)arg4 metadata:(id)arg5 videoZoomFactor:(double)arg6 reason:(long long)arg7 videoPreviewSurface:(void*)arg8 coordinationInfo:(id)arg9 error:(id)arg10 ;
-(IOSurfaceRef)videoPreviewSurface;
@end

