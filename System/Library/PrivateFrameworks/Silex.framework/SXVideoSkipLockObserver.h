/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoSkipLockObserving.h>

@protocol SXVideoSkipThresholdObserving;
@class SXTimeline, SXTimeBasedAction, NSMutableArray, NSString;

@interface SXVideoSkipLockObserver : NSObject <SXVideoSkipLockObserving> {

	BOOL _locked;
	double _countdown;
	/*^block*/id _unlockBlock;
	/*^block*/id _countdownBlock;
	SXTimeline* _timeline;
	id<SXVideoSkipThresholdObserving> _thresholdObserver;
	SXTimeBasedAction* _unlockAction;
	NSMutableArray* _countdownActions;

}

@property (nonatomic,readonly) SXTimeline * timeline;                                            //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SXVideoSkipThresholdObserving> thresholdObserver;              //@synthesize thresholdObserver=_thresholdObserver - In the implementation block
@property (assign,nonatomic) BOOL locked;                                                        //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) double countdown;                                                   //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,retain) SXTimeBasedAction * unlockAction;                                   //@synthesize unlockAction=_unlockAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * countdownActions;                                  //@synthesize countdownActions=_countdownActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onUnlock:,nonatomic,copy) id unlockBlock;                                      //@synthesize unlockBlock=_unlockBlock - In the implementation block
@property (setter=onCountDown:,nonatomic,copy) id countdownBlock;                                //@synthesize countdownBlock=_countdownBlock - In the implementation block
-(void)dealloc;
-(void)setLocked:(BOOL)arg1 ;
-(double)countdown;
-(void)setCountdown:(double)arg1 ;
-(id<SXVideoSkipThresholdObserving>)thresholdObserver;
-(BOOL)lockStateForThresholdObserver:(id)arg1 onTimeline:(id)arg2 ;
-(void)scheduleUnlockActionWithThreshold:(double)arg1 ;
-(void)scheduleCountdownActionsWithThreshold:(double)arg1 ;
-(SXTimeBasedAction *)unlockAction;
-(NSMutableArray *)countdownActions;
-(void)setCountdownActions:(NSMutableArray *)arg1 ;
-(void)setUnlockAction:(SXTimeBasedAction *)arg1 ;
-(id)unlockBlock;
-(id)countdownBlock;
-(void)onUnlock:(/*^block*/id)arg1 ;
-(void)onCountDown:(/*^block*/id)arg1 ;
-(id)initWithTimeline:(id)arg1 thresholdObserver:(id)arg2 ;
-(SXTimeline *)timeline;
-(BOOL)locked;
@end

