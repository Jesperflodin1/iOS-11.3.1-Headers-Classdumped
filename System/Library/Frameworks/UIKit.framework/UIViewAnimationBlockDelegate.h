/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewAnimationState;

@interface UIViewAnimationBlockDelegate : NSObject {

	BOOL _didBeginBlockAnimation;
	BOOL _allowUserInteraction;
	BOOL _isZeroDuration;
	BOOL _allowsUserInteractionToCutOffEndOfAnimation;
	BOOL _allowsHitTesting;
	BOOL _animationDidStopSent;
	/*^block*/id _start;
	/*^block*/id _completion;
	NSMutableArray* _systemPostAnimationActions;
	BOOL __forcingImmediateCompletion;
	UIViewAnimationState* _animationState;

}

@property (nonatomic,readonly) BOOL _allowsUserInteraction;                                                        //@synthesize allowUserInteraction=_allowUserInteraction - In the implementation block
@property (assign,setter=_setForcingImmediateCompletion:,nonatomic) BOOL _forcingImmediateCompletion;              //@synthesize _forcingImmediateCompletion=__forcingImmediateCompletion - In the implementation block
@property (assign,nonatomic,__weak) UIViewAnimationState * _animationState;                                        //@synthesize animationState=_animationState - In the implementation block
+(id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)set_animationState:(UIViewAnimationState *)arg1 ;
-(void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2 ;
-(void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_setForcingImmediateCompletion:(BOOL)arg1 ;
-(BOOL)_allowsUserInteraction;
-(BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
-(BOOL)_allowsHitTesting;
-(BOOL)_forcingImmediateCompletion;
-(void)_sendDeferredCompletion:(id)arg1 ;
-(UIViewAnimationState *)_animationState;
@end

