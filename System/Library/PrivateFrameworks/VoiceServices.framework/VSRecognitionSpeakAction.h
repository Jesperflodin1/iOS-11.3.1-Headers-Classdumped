/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VSRecognitionAction.h>

@interface VSRecognitionSpeakAction : VSRecognitionAction {

	BOOL _shouldTerminate;

}
-(id)perform;
-(int)completionType;
-(id)initWithSpokenFeedbackString:(id)arg1 willTerminate:(BOOL)arg2 ;
@end
