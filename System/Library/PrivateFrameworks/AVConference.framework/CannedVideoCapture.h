/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>

@protocol CannedVideoFrameFeeder;
@interface CannedVideoCapture : NSObject <VideoCaptureProtocol> {

	CannedVideoCapturePrivate* _pimpl;
	id<CannedVideoFrameFeeder> _frameFeeder;

}

@property (nonatomic,readonly) CannedVideoCapturePrivate* pimpl;                  //@synthesize pimpl=_pimpl - In the implementation block
@property (nonatomic,retain) id<CannedVideoFrameFeeder> frameFeeder;              //@synthesize frameFeeder=_frameFeeder - In the implementation block
+(int)cannedVideoTypeForPath:(id)arg1 ;
+(int)createPixelBufferPool:(_CVPixelBufferPool*)arg1 withWidth:(int)arg2 height:(int)arg3 ;
-(void)dealloc;
-(int)startPreview;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(BOOL)isPreviewRunning;
-(int)setCameraWithUID:(id)arg1 ;
-(id)getCameraUID;
-(BOOL)isFrontCamera;
-(id)initWithOptions:(void*)arg1 callback:(/*function pointer*/void*)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraUID:(id)arg6 folder:(id)arg7 withError:(int*)arg8 ;
-(void)stopThreads;
-(int)startThreads;
-(CannedVideoCapturePrivate*)pimpl;
-(id<CannedVideoFrameFeeder>)frameFeeder;
-(void)setFrameFeeder:(id<CannedVideoFrameFeeder>)arg1 ;
-(int)stop:(BOOL)arg1 ;
-(int)setFrameRate:(int)arg1 ;
@end

