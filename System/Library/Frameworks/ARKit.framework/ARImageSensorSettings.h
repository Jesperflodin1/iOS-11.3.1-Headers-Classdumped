/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ARVideoFormat, AVCaptureSession;

@interface ARImageSensorSettings : NSObject {

	BOOL _autoFocusEnabled;
	BOOL _mirrorVideoOutput;
	ARVideoFormat* _videoFormat;
	AVCaptureSession* _captureSession;

}

@property (nonatomic,readonly) ARVideoFormat * videoFormat;                  //@synthesize videoFormat=_videoFormat - In the implementation block
@property (assign,nonatomic) BOOL autoFocusEnabled;                          //@synthesize autoFocusEnabled=_autoFocusEnabled - In the implementation block
@property (assign,nonatomic) BOOL mirrorVideoOutput;                         //@synthesize mirrorVideoOutput=_mirrorVideoOutput - In the implementation block
@property (nonatomic,retain) AVCaptureSession * captureSession;              //@synthesize captureSession=_captureSession - In the implementation block
-(ARVideoFormat *)videoFormat;
-(id)initWithVideoFormat:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMirrorVideoOutput:(BOOL)arg1 ;
-(BOOL)mirrorVideoOutput;
-(void)setAutoFocusEnabled:(BOOL)arg1 ;
-(BOOL)autoFocusEnabled;
-(AVCaptureSession *)captureSession;
-(void)setCaptureSession:(AVCaptureSession *)arg1 ;
@end

