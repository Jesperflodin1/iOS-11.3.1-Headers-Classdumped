/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIFeedbackGeneratorUserInteractionDriven;
#import <TVRemoteModule/TVRemoteModule-Structs.h>
@interface TVRSiriHaptic : NSObject {

	id<UIFeedbackGeneratorUserInteractionDriven> _behavior;
	long long _state;

}

@property (nonatomic,retain) id<UIFeedbackGeneratorUserInteractionDriven> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
-(CFDictionaryRef)_copySiriAudioOptions;
-(void)performSiriStartWithCompletion:(/*^block*/id)arg1 ;
-(void)siriButtonTouchesEnded;
-(void)performSiriEndWithSuccess:(BOOL)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(id)initWithButton:(id)arg1 ;
@end
