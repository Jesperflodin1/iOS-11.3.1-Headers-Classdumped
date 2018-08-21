/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _UITapticEngine, NSMutableSet, NSObject;

@interface SBFTapticEngine : NSObject {

	_UITapticEngine* _tapticEngine;
	NSMutableSet* _previewReasons;
	NSMutableSet* _commitReasons;
	NSMutableSet* _cancelledReasons;
	NSObject*<OS_dispatch_queue> _previewReasonsQueue;
	NSObject*<OS_dispatch_queue> _commitReasonsQueue;
	NSObject*<OS_dispatch_queue> _cancelledReasonsQueue;
	BOOL _supportsFeedbackActuation;

}

@property (nonatomic,readonly) BOOL supportsFeedbackActuation;              //@synthesize supportsFeedbackActuation=_supportsFeedbackActuation - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)actuateFeedback:(long long)arg1 ;
-(BOOL)supportsFeedbackActuation;
-(void)warmUpForFeedback:(unsigned long long)arg1 withReason:(id)arg2 ;
-(void)coolDownForFeedback:(unsigned long long)arg1 withReason:(id)arg2 ;
@end

