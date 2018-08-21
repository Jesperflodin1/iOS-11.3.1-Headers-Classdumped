/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISpeechSynthesisElementDelegate;
@class NSString, SAUIAudioData, VSSpeechRequest, VSPresynthesizedAudioRequest, NSDictionary;

@interface AFUISpeechSynthesisElement : NSObject {

	NSString* _text;
	BOOL _isPhonetic;
	BOOL _eligibleForSynthesis;
	BOOL _provisional;
	BOOL _preprationBlockCompleted;
	BOOL _durationHasElapsed;
	SAUIAudioData* _audioData;
	NSString* _identifier;
	NSString* _language;
	NSString* _gender;
	VSSpeechRequest* _speechRequest;
	VSPresynthesizedAudioRequest* _presynthesizedAudioRequest;
	long long _synthesisResult;
	id<AFUISpeechSynthesisElementDelegate> _delegate;
	NSString* _animationIdentifier;
	NSDictionary* _analyticsContext;
	NSDictionary* _speakableContextInfo;
	/*^block*/id _completion;

}

@property (assign,setter=_setEligibleForSynthesis:,getter=isEligibleForSynthesis,nonatomic) BOOL eligibleForSynthesis;              //@synthesize eligibleForSynthesis=_eligibleForSynthesis - In the implementation block
@property (getter=_completion,nonatomic,readonly) id completion;                                                                    //@synthesize completion=_completion - In the implementation block
@property (setter=_setText:,nonatomic,copy) NSString * text;                                                                        //@synthesize text=_text - In the implementation block
@property (setter=_setPreparationBlockCompleted:) BOOL preprationBlockCompleted;                                                    //@synthesize preprationBlockCompleted=_preprationBlockCompleted - In the implementation block
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;                                                                 //@synthesize durationHasElapsed=_durationHasElapsed - In the implementation block
@property (nonatomic,readonly) SAUIAudioData * audioData;                                                                           //@synthesize audioData=_audioData - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * language;                                                                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * gender;                                                                                   //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) BOOL isPhonetic;                                                                                       //@synthesize isPhonetic=_isPhonetic - In the implementation block
@property (getter=isProvisional,nonatomic,readonly) BOOL provisional;                                                               //@synthesize provisional=_provisional - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;                                                                       //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,retain) VSPresynthesizedAudioRequest * presynthesizedAudioRequest;                                             //@synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest - In the implementation block
@property (assign,nonatomic) long long synthesisResult;                                                                             //@synthesize synthesisResult=_synthesisResult - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISpeechSynthesisElementDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * animationIdentifier;                                                                      //@synthesize animationIdentifier=_animationIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * analyticsContext;                                                                     //@synthesize analyticsContext=_analyticsContext - In the implementation block
@property (nonatomic,retain) NSDictionary * speakableContextInfo;                                                                   //@synthesize speakableContextInfo=_speakableContextInfo - In the implementation block
-(BOOL)isPhonetic;
-(id)init;
-(id<AFUISpeechSynthesisElementDelegate>)delegate;
-(void)setDelegate:(id<AFUISpeechSynthesisElementDelegate>)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)text;
-(void)_setText:(id)arg1 ;
-(NSString *)language;
-(SAUIAudioData *)audioData;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(NSString *)gender;
-(void)_setDurationHasElapsed:(BOOL)arg1 ;
-(void)_setPreparationBlockCompleted:(BOOL)arg1 ;
-(BOOL)durationHasElapsed;
-(BOOL)preprationBlockCompleted;
-(void)_updateSynthesisEligibility;
-(id)initWithText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 provisional:(BOOL)arg6 eligibleAfterDuration:(double)arg7 preparation:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 animationIdentifier:(id)arg10 analyticsContext:(id)arg11 speakableContextInfo:(id)arg12 ;
-(BOOL)isProvisional;
-(BOOL)isEligibleForSynthesis;
-(void)_setEligibleForSynthesis:(BOOL)arg1 ;
-(void)executeCompletion;
-(void)setIsPhonetic:(BOOL)arg1 ;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(long long)synthesisResult;
-(void)setSynthesisResult:(long long)arg1 ;
-(NSString *)animationIdentifier;
-(NSDictionary *)analyticsContext;
-(/*^block*/id)_completion;
@end

