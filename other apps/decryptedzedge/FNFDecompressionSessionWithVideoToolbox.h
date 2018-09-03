//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFDecompressionSession-Protocol.h"

@protocol FNFDecompressionSessionDelegate, OS_dispatch_queue;

@interface FNFDecompressionSessionWithVideoToolbox : NSObject <FNFDecompressionSession>
{
    struct OpaqueVTDecompressionSession *_decompressionSession;
    NSObject<OS_dispatch_queue> *_decompressionSessionQueue;
    id <FNFDecompressionSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <FNFDecompressionSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 iFrame:(unsigned long long)arg2;
- (void)closeSession;
- (id)initWithDelegate:(id)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 videoSize:(struct CGSize)arg3 async:(_Bool)arg4 timerManager:(id)arg5;

@end
