/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NACancelable;
@interface HUEffectiveProgressObserver : NSObject {

	/*^block*/id _observerBlock;
	double _targetEffectiveProgress;
	id<NACancelable> _timerCancellationToken;

}

@property (nonatomic,copy,readonly) id observerBlock;                              //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,readonly) double targetEffectiveProgress;                     //@synthesize targetEffectiveProgress=_targetEffectiveProgress - In the implementation block
@property (nonatomic,retain) id<NACancelable> timerCancellationToken;              //@synthesize timerCancellationToken=_timerCancellationToken - In the implementation block
-(id)observerBlock;
-(id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(/*^block*/id)arg2 ;
-(double)targetEffectiveProgress;
-(id<NACancelable>)timerCancellationToken;
-(void)setTimerCancellationToken:(id<NACancelable>)arg1 ;
@end

