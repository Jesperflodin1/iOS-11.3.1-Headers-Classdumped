/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (assign,nonatomic) BOOL appliesPreferredTrackTransform; 
@property (getter=_isAttachedToAdaptor,nonatomic,readonly) BOOL attachedToAdaptor; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(BOOL)appliesPreferredTrackTransform;
-(BOOL)_isAttachedToAdaptor;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(AVAssetTrack *)track;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAdaptor;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(id)_formatDescriptions;
-(unsigned)_getUniformMediaSubtypeIfExists;
-(id)_attachedAdaptor;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(NSDictionary *)outputSettings;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(id)mediaType;
-(id)_asset;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(void)finalize;
@end

