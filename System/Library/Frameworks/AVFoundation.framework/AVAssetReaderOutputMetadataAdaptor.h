/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutputAdaptor.h>

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor> {

	AVAssetReaderOutputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetReaderTrackOutput * assetReaderTrackOutput; 
+(id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1 ;
-(id)initWithAssetReaderTrackOutput:(id)arg1 ;
-(int)addExtractionForOutput:(id)arg1 figAssetReader:(OpaqueFigAssetReaderRef)arg2 options:(id)arg3 withOutputExtactionID:(int*)arg4 ;
-(AVAssetReaderTrackOutput *)assetReaderTrackOutput;
-(id)nextTimedMetadataGroup;
-(id)init;
-(void)dealloc;
-(void)finalize;
@end

