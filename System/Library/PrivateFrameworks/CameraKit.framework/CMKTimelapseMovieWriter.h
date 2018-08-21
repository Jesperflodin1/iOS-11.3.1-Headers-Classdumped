/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <libobjc.A.dylib/CMKTimelapseMovieWriterProtocol.h>

@protocol OS_dispatch_queue;
@class NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSString;

@interface CMKTimelapseMovieWriter : NSObject <CMKTimelapseMovieWriterProtocol> {

	NSArray* __frameFilePaths;
	long long __nextReadFileIndex;
	long long __residentImageDataCount;
	long long __residentPixelBufferCount;
	NSMutableDictionary* __availableImageData;
	NSMutableDictionary* __availablePixelBuffers;
	NSMutableSet* __inFlightReadFrameIndexes;
	NSObject*<OS_dispatch_queue> __synchronizationQueue;
	NSOperationQueue* __imageReadQueue;
	NSOperationQueue* __imageDecodeQueue;
	NSObject*<OS_dispatch_queue> __movieWritingQueue;
	AVAssetWriter* __writer;
	AVAssetWriterInput* __videoInput;
	AVAssetWriterInputPixelBufferAdaptor* __pixelBufferAdaptor;
	long long __framesPerSecond;
	long long __nextWriteFileIndex;
	long long __currentOutputFrameIndex;
	/*^block*/id __completion;

}

@property (nonatomic,readonly) NSArray * _frameFilePaths;                                               //@synthesize _frameFilePaths=__frameFilePaths - In the implementation block
@property (nonatomic,readonly) long long _nextReadFileIndex;                                            //@synthesize _nextReadFileIndex=__nextReadFileIndex - In the implementation block
@property (nonatomic,readonly) long long _residentImageDataCount;                                       //@synthesize _residentImageDataCount=__residentImageDataCount - In the implementation block
@property (nonatomic,readonly) long long _residentPixelBufferCount;                                     //@synthesize _residentPixelBufferCount=__residentPixelBufferCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _availableImageData;                               //@synthesize _availableImageData=__availableImageData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _availablePixelBuffers;                            //@synthesize _availablePixelBuffers=__availablePixelBuffers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _inFlightReadFrameIndexes;                                //@synthesize _inFlightReadFrameIndexes=__inFlightReadFrameIndexes - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _synchronizationQueue;                      //@synthesize _synchronizationQueue=__synchronizationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * _imageReadQueue;                                      //@synthesize _imageReadQueue=__imageReadQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * _imageDecodeQueue;                                    //@synthesize _imageDecodeQueue=__imageDecodeQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _movieWritingQueue;                         //@synthesize _movieWritingQueue=__movieWritingQueue - In the implementation block
@property (nonatomic,readonly) AVAssetWriter * _writer;                                                 //@synthesize _writer=__writer - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * _videoInput;                                        //@synthesize _videoInput=__videoInput - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor;              //@synthesize _pixelBufferAdaptor=__pixelBufferAdaptor - In the implementation block
@property (nonatomic,readonly) long long _framesPerSecond;                                              //@synthesize _framesPerSecond=__framesPerSecond - In the implementation block
@property (nonatomic,readonly) long long _nextWriteFileIndex;                                           //@synthesize _nextWriteFileIndex=__nextWriteFileIndex - In the implementation block
@property (nonatomic,readonly) long long _currentOutputFrameIndex;                                      //@synthesize _currentOutputFrameIndex=__currentOutputFrameIndex - In the implementation block
@property (nonatomic,copy,readonly) id _completion;                                                     //@synthesize _completion=__completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_reset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(BOOL)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(opaqueCMFormatDescriptionRef)arg4 transform:(CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 videoMetadata:(id)arg8 ;
-(void)_finishMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1 ;
-(NSArray *)_frameFilePaths;
-(NSObject*<OS_dispatch_queue>)_movieWritingQueue;
-(AVAssetWriter *)_writer;
-(AVAssetWriterInput *)_videoInput;
-(AVAssetWriterInputPixelBufferAdaptor *)_pixelBufferAdaptor;
-(id)_completion;
-(long long)_framesPerSecond;
-(CGSize)_desiredOutputSizeForFrameSize:(CGSize)arg1 ;
-(void)_enqueueNextRead;
-(void)_enqueueNextDecode;
-(void)_enqueueNextWrite;
-(BOOL)_appendPixelBuffer:(CVBufferRef)arg1 ;
-(long long)_nextReadFileIndex;
-(long long)_residentImageDataCount;
-(long long)_residentPixelBufferCount;
-(NSMutableDictionary *)_availableImageData;
-(NSMutableDictionary *)_availablePixelBuffers;
-(NSMutableSet *)_inFlightReadFrameIndexes;
-(NSObject*<OS_dispatch_queue>)_synchronizationQueue;
-(NSOperationQueue *)_imageReadQueue;
-(NSOperationQueue *)_imageDecodeQueue;
-(long long)_nextWriteFileIndex;
-(long long)_currentOutputFrameIndex;
@end

