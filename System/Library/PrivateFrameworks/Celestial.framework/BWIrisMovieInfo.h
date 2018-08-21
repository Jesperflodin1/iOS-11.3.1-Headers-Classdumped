/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FigCaptureMovieFileRecordingSettings, NSURL, NSArray;

@interface BWIrisMovieInfo : NSObject <NSCopying> {

	FigCaptureMovieFileRecordingSettings* _settings;
	NSURL* _outputMovieURL;
	NSURL* _temporaryMovieURL;
	SCD_Struct_BW2 _stillImageCaptureTime;
	SCD_Struct_BW2 _stillImageCaptureHostTime;
	SCD_Struct_BW2 _movieStartTime;
	SCD_Struct_BW2 _movieEndTime;
	SCD_Struct_BW2 _movieTrimStartTime;
	SCD_Struct_BW2 _movieTrimEndTime;
	SCD_Struct_BW2 _audioOffset;
	SCD_Struct_BW2 _masterMovieStartTime;
	NSURL* _masterMovieURL;
	BOOL _finalReferenceMovie;
	BOOL _stillImageEncoderKeyFrameEmitted;
	BOOL _stillImageVISKeyFrameTagged;
	BOOL _finalEnqueuedIrisRequest;
	BOOL _originalPhotoRecording;
	unsigned _requestedSDOFVariants;
	NSURL* _temporaryURLForSDOFOriginalMovie;
	NSURL* _outputURLForSDOFOriginalMovie;
	NSArray* _movieLevelMetadataForSDOFOriginalMovie;

}

@property (nonatomic,retain) NSURL * outputMovieURL;                                                       //@synthesize outputMovieURL=_outputMovieURL - In the implementation block
@property (assign,getter=isOriginalPhotoRecording,nonatomic) BOOL originalPhotoRecording;                  //@synthesize originalPhotoRecording=_originalPhotoRecording - In the implementation block
@property (nonatomic,readonly) FigCaptureMovieFileRecordingSettings * settings;                            //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 stillImageCaptureTime;                                         //@synthesize stillImageCaptureTime=_stillImageCaptureTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 stillImageCaptureHostTime;                                   //@synthesize stillImageCaptureHostTime=_stillImageCaptureHostTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieStartTime;                                                //@synthesize movieStartTime=_movieStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieEndTime;                                                  //@synthesize movieEndTime=_movieEndTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieTrimStartTime;                                            //@synthesize movieTrimStartTime=_movieTrimStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieTrimEndTime;                                              //@synthesize movieTrimEndTime=_movieTrimEndTime - In the implementation block
@property (nonatomic,readonly) BOOL containsTrims; 
@property (assign,nonatomic) SCD_Struct_BW2 masterMovieStartTime;                                          //@synthesize masterMovieStartTime=_masterMovieStartTime - In the implementation block
@property (nonatomic,retain) NSURL * masterMovieURL;                                                       //@synthesize masterMovieURL=_masterMovieURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryMovieURL;                                                    //@synthesize temporaryMovieURL=_temporaryMovieURL - In the implementation block
@property (assign,getter=isFinalReferenceMovie,nonatomic) BOOL finalReferenceMovie;                        //@synthesize finalReferenceMovie=_finalReferenceMovie - In the implementation block
@property (assign,nonatomic) BOOL stillImageEncoderKeyFrameEmitted;                                        //@synthesize stillImageEncoderKeyFrameEmitted=_stillImageEncoderKeyFrameEmitted - In the implementation block
@property (assign,nonatomic) BOOL stillImageVISKeyFrameTagged;                                             //@synthesize stillImageVISKeyFrameTagged=_stillImageVISKeyFrameTagged - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 audioOffset;                                                   //@synthesize audioOffset=_audioOffset - In the implementation block
@property (assign,getter=isFinalEnqueuedIrisRequest,nonatomic) BOOL finalEnqueuedIrisRequest;              //@synthesize finalEnqueuedIrisRequest=_finalEnqueuedIrisRequest - In the implementation block
@property (nonatomic,readonly) int numberOfRequestedVariants; 
@property (assign,nonatomic) unsigned requestedSDOFVariants;                                               //@synthesize requestedSDOFVariants=_requestedSDOFVariants - In the implementation block
@property (nonatomic,copy) NSURL * temporaryURLForSDOFOriginalMovie;                                       //@synthesize temporaryURLForSDOFOriginalMovie=_temporaryURLForSDOFOriginalMovie - In the implementation block
@property (nonatomic,copy) NSURL * outputURLForSDOFOriginalMovie;                                          //@synthesize outputURLForSDOFOriginalMovie=_outputURLForSDOFOriginalMovie - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadataForSDOFOriginalMovie;                               //@synthesize movieLevelMetadataForSDOFOriginalMovie=_movieLevelMetadataForSDOFOriginalMovie - In the implementation block
+(id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(SCD_Struct_BW2)arg2 stillImageCaptureHostTime:(SCD_Struct_BW2)arg3 originalPhotoRecording:(BOOL)arg4 ;
-(SCD_Struct_BW2)movieTrimStartTime;
-(SCD_Struct_BW2)movieStartTime;
-(SCD_Struct_BW2)movieTrimEndTime;
-(SCD_Struct_BW2)stillImageCaptureTime;
-(id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(SCD_Struct_BW2)arg2 stillImageCaptureHostTime:(SCD_Struct_BW2)arg3 originalPhotoRecording:(BOOL)arg4 ;
-(int)numberOfRequestedVariants;
-(void)setRequestedSDOFVariants:(unsigned)arg1 ;
-(void)setOriginalPhotoRecording:(BOOL)arg1 ;
-(void)setFinalEnqueuedIrisRequest:(BOOL)arg1 ;
-(void)setFinalReferenceMovie:(BOOL)arg1 ;
-(NSURL *)outputURLForSDOFOriginalMovie;
-(void)setOutputMovieURL:(NSURL *)arg1 ;
-(NSURL *)temporaryURLForSDOFOriginalMovie;
-(void)setTemporaryMovieURL:(NSURL *)arg1 ;
-(NSArray *)movieLevelMetadataForSDOFOriginalMovie;
-(void)setMovieLevelMetadataForSDOFOriginalMovie:(NSArray *)arg1 ;
-(void)setOutputURLForSDOFOriginalMovie:(NSURL *)arg1 ;
-(void)setTemporaryURLForSDOFOriginalMovie:(NSURL *)arg1 ;
-(NSURL *)outputMovieURL;
-(NSURL *)temporaryMovieURL;
-(NSURL *)masterMovieURL;
-(void)setMasterMovieURL:(NSURL *)arg1 ;
-(void)setMovieStartTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)movieEndTime;
-(void)setMovieEndTime:(SCD_Struct_BW2)arg1 ;
-(void)setMovieTrimStartTime:(SCD_Struct_BW2)arg1 ;
-(void)setMovieTrimEndTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)masterMovieStartTime;
-(void)setMasterMovieStartTime:(SCD_Struct_BW2)arg1 ;
-(BOOL)isFinalReferenceMovie;
-(BOOL)stillImageEncoderKeyFrameEmitted;
-(void)setStillImageEncoderKeyFrameEmitted:(BOOL)arg1 ;
-(BOOL)stillImageVISKeyFrameTagged;
-(void)setStillImageVISKeyFrameTagged:(BOOL)arg1 ;
-(SCD_Struct_BW2)audioOffset;
-(void)setAudioOffset:(SCD_Struct_BW2)arg1 ;
-(BOOL)isFinalEnqueuedIrisRequest;
-(unsigned)requestedSDOFVariants;
-(BOOL)containsTrims;
-(id)copyMovieInfosForRequestedSDOFVariants;
-(void)setStillImageCaptureTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)stillImageCaptureHostTime;
-(BOOL)isOriginalPhotoRecording;
-(void)dealloc;
-(id)description;
-(FigCaptureMovieFileRecordingSettings *)settings;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

