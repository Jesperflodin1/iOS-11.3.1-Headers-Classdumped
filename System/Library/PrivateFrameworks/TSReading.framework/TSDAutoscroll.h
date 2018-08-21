/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAutoscrollDelegate;
#import <TSReading/TSReading-Structs.h>
@class NSObject, NSTimer;

@interface TSDAutoscroll : NSObject {

	NSObject*<TSDAutoscrollDelegate> mTarget;
	CGPoint mPoint;
	int mDirections;
	double mRepeatInterval;
	NSTimer* mTimer;
	unsigned long long mCount;
	BOOL mActive;
	CGPoint mLastAutoscrollDelta;
	double mLastFired;
	BOOL mTargetIsAutoscrolling;

}

@property (nonatomic,retain) NSObject*<TSDAutoscrollDelegate> target; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL targetIsAutoscrolling; 
@property (nonatomic,readonly) CGPoint lastAutoscrollDelta; 
+(void)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 ;
-(unsigned long long)count;
-(void)invalidate;
-(void)dealloc;
-(void)setRepeatInterval:(double)arg1 ;
-(NSObject*<TSDAutoscrollDelegate>)target;
-(void)setTarget:(NSObject*<TSDAutoscrollDelegate>)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setCount:(unsigned long long)arg1 ;
-(int)directions;
-(CGPoint)point;
-(void)timerFired:(id)arg1 ;
-(double)repeatInterval;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setDirections:(int)arg1 ;
-(void)p_cleanup;
-(BOOL)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4 ;
-(BOOL)targetIsAutoscrolling;
-(unsigned long long)p_deltaForCount:(unsigned long long)arg1 ;
-(void)setTargetIsAutoscrolling:(BOOL)arg1 ;
-(CGPoint)lastAutoscrollDelta;
@end
