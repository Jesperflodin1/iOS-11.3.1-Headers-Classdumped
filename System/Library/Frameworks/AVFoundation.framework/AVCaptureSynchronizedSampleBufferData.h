/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedSampleBufferDataInternal* _internal;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) BOOL sampleBufferWasDropped; 
@property (readonly) long long droppedReason; 
-(BOOL)sampleBufferWasDropped;
-(long long)droppedReason;
-(BOOL)hasCorrespondingDepthData;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferWasDropped:(BOOL)arg2 ;
-(void)dealloc;
@end

