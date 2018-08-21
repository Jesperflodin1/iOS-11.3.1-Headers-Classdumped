/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedback.h>
#import <UIKit/_UIFeedbackDiscretePlayable.h>
#import <UIKit/_UIFeedbackContinuousPlayable.h>

@class NSArray, NSTimer, NSString;

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable> {

	BOOL _highPriority;
	BOOL _isRepeating;
	double _duration;
	NSArray* _feedbacks;
	NSTimer* _repeatTimer;

}

@property (nonatomic,retain) NSArray * feedbacks;                                    //@synthesize feedbacks=_feedbacks - In the implementation block
@property (nonatomic,readonly) BOOL isRepeating;                                     //@synthesize isRepeating=_isRepeating - In the implementation block
@property (nonatomic,retain) NSTimer * repeatTimer;                                  //@synthesize repeatTimer=_repeatTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
+(id)type;
+(BOOL)supportsSecureCoding;
+(id)feedbackPattern;
+(Class)_parametersClass;
-(BOOL)isEqual:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(float)arg1 ;
-(void)stop;
-(NSArray *)feedbacks;
-(void)setFeedbacks:(NSArray *)arg1 ;
-(id)_allEventTypes;
-(id)_playableProtocol;
-(BOOL)isPlaying;
-(BOOL)isHighPriority;
-(id)dictionaryRepresentation;
-(void)addFeedback:(id)arg1 atTime:(double)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)_effectivePlayableFeedbackTypes;
-(id)_debugDictionary;
-(id)_allFeedbacks;
-(id)_allSystemSoundIDs;
-(void)play;
-(void)_playPattern;
-(void)setRepeatTimer:(NSTimer *)arg1 ;
-(BOOL)isRepeating;
-(NSTimer *)repeatTimer;
@end

