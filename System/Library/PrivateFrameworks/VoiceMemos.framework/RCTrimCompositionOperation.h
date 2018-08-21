/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCTrimTimeRangeOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, RCTrimAudioFileOperation, NSError, RCComposition, NSURL;

@interface RCTrimCompositionOperation : RCTrimTimeRangeOperation {

	NSObject*<OS_dispatch_queue> _serialQueue;
	double _durationOfFragmentsBeingTrimmed;
	double _subTaskProgressAmounts[2];
	double _lastPostedProgress;
	NSOperationQueue* _subOperationQueue;
	RCTrimAudioFileOperation* _trimAudioFileSubOperation;
	BOOL _success;
	NSError* _error;
	double _exportedDuration;
	RCComposition* _sourceComposition;
	NSURL* _destinationComposedAVURL;

}

@property (nonatomic,copy,readonly) RCComposition * sourceComposition;              //@synthesize sourceComposition=_sourceComposition - In the implementation block
@property (nonatomic,copy,readonly) NSURL * destinationComposedAVURL;               //@synthesize destinationComposedAVURL=_destinationComposedAVURL - In the implementation block
+(id)_intermediateTrimmedAVOutputURLForFragment:(id)arg1 ;
+(id)_intermediateTrimmedWaveformURLForFragment:(id)arg1 ;
-(void)cancel;
-(void)main;
-(double)progress;
-(BOOL)success;
-(id)error;
-(double)exportedDuration;
-(id)initWithSourceComposition:(id)arg1 destinationComposedAVURL:(id)arg2 timeRange:(SCD_Struct_RC4)arg3 trimMode:(long long)arg4 ;
-(BOOL)_isSaveToCopyOperation;
-(id)performTrimOnFragmentsWithDestinationComposition:(id)arg1 ;
-(id)performTrimOnComposedAVURLWithDestinationComposition:(id)arg1 ;
-(void)_performSyncOnSerialQueue:(/*^block*/id)arg1 ;
-(RCComposition *)sourceComposition;
-(NSURL *)destinationComposedAVURL;
@end
