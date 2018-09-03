//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MAMetroAnalysisDataSource, MAMetroHints, MAMetroResult, NSDictionary;
@protocol OS_dispatch_queue;

@interface MAMetroAnalysis : NSObject
{
    CMetroAnalyzer_54fbe830 *_analyzer;
    NSDictionary *_analysisParams;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    struct CAnalysisDelegate *_delegateWrapper;
    int _nChannels;
    double _expectedTotalInputLength;
    MAMetroAnalysisDataSource *_dataSource;
    MAMetroResult *_result;
    MAMetroHints *_hints;
    _Bool _deleteAnalyzerWhenFinished;
    _Bool _synchronous;
    _Bool _timesShouldBeRelativeToMusicStart;
    int _state;
    NSObject<OS_dispatch_queue> *notifyProgressQueue;
    NSObject<OS_dispatch_queue> *notifyNewResultAvailableQueue;
    NSObject<OS_dispatch_queue> *notifyFinishedQueue;
}

+ (void)initialize;
+ (void)waitForLatestAnalyzerEnd;
+ (void)waitForAnalysisEnd:(id)arg1;
+ (_Bool)didAnalysisEnd:(id)arg1;
+ (void)setupMetroAnalysis;
+ (id)defaultFileAnalysisParamsForLength:(double)arg1;
@property int state; // @synthesize state=_state;
@property(nonatomic) _Bool timesShouldBeRelativeToMusicStart; // @synthesize timesShouldBeRelativeToMusicStart=_timesShouldBeRelativeToMusicStart;
@property(nonatomic) _Bool synchronous; // @synthesize synchronous=_synchronous;
@property(nonatomic) double expectedInputLength; // @synthesize expectedInputLength=_expectedTotalInputLength;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyFinishedQueue; // @synthesize notifyFinishedQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyNewResultAvailableQueue; // @synthesize notifyNewResultAvailableQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyProgressQueue; // @synthesize notifyProgressQueue;
- (void).cxx_destruct;
- (void)setContinuousProgress:(_Bool)arg1;
- (void)setResult:(id)arg1;
- (id)result;
- (void)cancel;
- (CMetroAnalyzer_54fbe830 *)analyzer;
- (void)notifyAnalysisEvent:(long long)arg1 type:(int)arg2;
- (void)synchroEvent:(long long)arg1 type:(int)arg2;
- (void)notifyProgress;
- (void)notifyNewResultAvailable;
- (void)notifyFinished;
- (void)cleanupBlocks;
- (void)finish;
- (void)analyzeNonInterleaved:(const float **)arg1 length:(unsigned long long)arg2 nChannels:(int)arg3;
- (void)analyze:(const float *)arg1 length:(unsigned long long)arg2;
- (void)changeState:(int)arg1;
- (void)setHints:(id)arg1;
- (double)sampleRate;
- (void)setDeleteAnalyzerWhenFinished:(_Bool)arg1;
@property(readonly, nonatomic) int numChannels;
- (void)dealloc;
- (id)initWithSampleRate:(double)arg1 interleavedChannels:(int)arg2 analysisParameters:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5 analysisType:(int)arg6;
- (id)initWithAnalyzer:(CMetroAnalyzer_54fbe830 *)arg1 sampleRate:(double)arg2 interleavedChannels:(int)arg3 analysisParameters:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)setParameters:(id)arg1 analyzer:(CMetroAnalyzer_54fbe830 *)arg2;
- (void)analyzeFromStartTime:(double)arg1 length:(double)arg2;
- (void)analyzeFrom:(long long)arg1 length:(long long)arg2;
- (void)analyzeSynchronousFromStartTime:(double)arg1 length:(double)arg2;
- (void)analyze;
- (void)analyzeSynchronous;
- (id)initWithURL:(id)arg1 analysisParameters:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 analysisType:(int)arg5;
- (id)initWithDataSource:(id)arg1 analysisParameters:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 analysisType:(int)arg5;
- (id)initWithURL:(id)arg1 analyzer:(CMetroAnalyzer_54fbe830 *)arg2 analysisParameters:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

