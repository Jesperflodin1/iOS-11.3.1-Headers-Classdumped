//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderAudioMixOutput, AVAssetReaderVideoCompositionOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAudioMix, AVVideoComposition, NSArray, NSDictionary, NSError, NSString, NSURL;
@protocol OS_dispatch_queue, SDAVAssetExportSessionDelegate;

@interface SDAVAssetExportSession : NSObject
{
    NSError *_error;
    double duration;
    CDStruct_1b6d18a9 lastSamplePresentationTime;
    _Bool _shouldOptimizeForNetworkUse;
    float _progress;
    id <SDAVAssetExportSessionDelegate> _delegate;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    NSString *_outputFileType;
    NSURL *_outputURL;
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    NSArray *_metadata;
    AVAssetReader *_reader;
    AVAssetReaderVideoCompositionOutput *_videoOutput;
    AVAssetReaderAudioMixOutput *_audioOutput;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoPixelBufferAdaptor;
    AVAssetWriterInput *_audioInput;
    NSObject<OS_dispatch_queue> *_inputQueue;
    CDUnknownBlockType _completionHandler;
    CDStruct_e83c9415 _timeRange;
}

+ (id)exportSessionWithAsset:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoPixelBufferAdaptor; // @synthesize videoPixelBufferAdaptor=_videoPixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) AVAssetReaderAudioMixOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) AVAssetReaderVideoCompositionOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSDictionary *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(copy, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(copy, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(copy, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <SDAVAssetExportSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)cancelExport;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSError *error;
- (void)complete;
- (void)finish;
- (id)buildDefaultVideoComposition;
- (_Bool)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1;

@end

