/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OFAudioRecorderDelegate;
@class AVCaptureSession, AVCaptureMovieFileOutput, NSURL, NSObject, NSString;

@interface OFAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate> {

	AVCaptureSession* _session;
	AVCaptureMovieFileOutput* _movieFileOutput;
	NSURL* _outputFileURL;
	NSObject*<OFAudioRecorderDelegate> _delegate;

}

@property (nonatomic,retain) AVCaptureSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * movieFileOutput;               //@synthesize movieFileOutput=_movieFileOutput - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                      //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,readonly) BOOL recordsAudio; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (assign,nonatomic) NSObject*<OFAudioRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OFAudioRecorderDelegate>)delegate;
-(void)setDelegate:(NSObject*<OFAudioRecorderDelegate>)arg1 ;
-(void)dealloc;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(BOOL)isRecording;
-(void)stopRecording;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)startRecording;
-(id)initWithSession:(id)arg1 outputFileURL:(id)arg2 ;
-(BOOL)recordsAudio;
-(void)setMovieFileOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(id)_connectionWithMediaType:(id)arg1 ;
-(AVCaptureMovieFileOutput *)movieFileOutput;
@end
