/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, NSString;

@interface VTTranscriber : NSObject <_EARSpeechRecognitionResultStream> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _previousUtteranceTokens;
	double _triggerConfidence;
	NSArray* _triggerTokenList;
	/*^block*/id _callback;
	_EARSpeechRecognizer* _recognizer;
	_EARSpeechRecognitionAudioBuffer* _recognizerBuffer;
	BOOL _isTriggerFollowedByWords;
	BOOL _useKeywordSpotting;

}

@property (readonly) double triggerConfidence;                      //@synthesize triggerConfidence=_triggerConfidence - In the implementation block
@property (readonly) BOOL isTriggerFollowedByWords;                 //@synthesize isTriggerFollowedByWords=_isTriggerFollowedByWords - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id)initWithConfiguration:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3 ;
-(void)runRecognitionWithCallback:(/*^block*/id)arg1 ;
-(void)recognizeWavData:(const short*)arg1 length:(int)arg2 ;
-(id)recognizedTokens;
-(BOOL)isTriggerFollowedByWords;
-(double)triggerConfidence;
-(void)endAudio;
-(double)_getConfidence:(id)arg1 ;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
@end

