/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIIntervalAnimating.h>

@class NSString;

@interface UIViewFrictionBounceAnimation : NSObject <UIIntervalAnimating> {

	id _stableTarget;
	id _target;
	id _intermediate;
	id _current;
	double _deceleration;
	double _bounce;
	/*^block*/id _targetValueGetter;

}

@property (nonatomic,copy) id targetValueGetter;                    //@synthesize targetValueGetter=_targetValueGetter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVelocity:(id)arg1 ;
-(id)velocity;
-(id)initWithCurrent:(id)arg1 targetValueGetter:(/*^block*/id)arg2 ;
-(id)targetValue;
-(void)setTargetValueGetter:(id)arg1 ;
-(id)updatedTarget;
-(id)initWithCurrent:(id)arg1 target:(id)arg2 ;
-(id)stepWithDelta:(double)arg1 ;
-(BOOL)isStable;
-(id)targetValueGetter;
@end

