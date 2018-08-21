/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSAudioCircularBuffer, NSString;

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSAudioCircularBuffer* _audioBuffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) CSAudioCircularBuffer * audioBuffer;              //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSAudioCircularBuffer *)audioBuffer;
-(void)setAudioBuffer:(CSAudioCircularBuffer *)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(id)initWithAudioBuffer:(id)arg1 ;
-(id)_audioLogDirectory;
-(id)_timeStampString;
-(id)_metaFilenameWithPrefix:(id)arg1 ;
-(void)_writeDictionary:(id)arg1 toPath:(id)arg2 ;
-(void)_clearOldLoggingFiles;
@end

