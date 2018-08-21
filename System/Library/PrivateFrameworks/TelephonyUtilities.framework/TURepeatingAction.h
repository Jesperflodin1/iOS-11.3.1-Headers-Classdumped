/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TURepeatingAction : NSObject {

	/*^block*/id _action;
	/*^block*/id _completion;
	unsigned long long _remainingIterations;
	double _pauseDuration;

}

@property (nonatomic,copy) id action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned long long remainingIterations;              //@synthesize remainingIterations=_remainingIterations - In the implementation block
@property (assign,nonatomic) double pauseDuration;                                //@synthesize pauseDuration=_pauseDuration - In the implementation block
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithAction:(/*^block*/id)arg1 ;
-(void)setRemainingIterations:(unsigned long long)arg1 ;
-(void)setPauseDuration:(double)arg1 ;
-(unsigned long long)remainingIterations;
-(double)pauseDuration;
@end
