/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSObject, NSURL;

@interface VTAudioFileLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueExtAudioFileRef _audioFile;
	AudioStreamBasicDescription _asbd;
	NSURL* _url;
	unsigned _audioLength;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)stopRecording;
-(void)startRecording;
-(void)_closeAudioFile;
-(void)appendAudioData:(AudioBuffer*)arg1 ;
@end

