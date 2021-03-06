/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@interface CAMTouchingGestureRecognizer : UIGestureRecognizer {

	unsigned long long __touchCount;

}

@property (assign,setter=_setTouchCount:,nonatomic) unsigned long long _touchCount;              //@synthesize _touchCount=__touchCount - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)_touchCount;
-(void)_setTouchCount:(unsigned long long)arg1 ;
-(void)_incrementTouchesBy:(unsigned long long)arg1 ;
-(void)_decrementTouchesBy:(unsigned long long)arg1 ;
-(void)_updateStateFromTouchCount:(unsigned long long)arg1 toTouchCount:(unsigned long long)arg2 ;
-(void)cancelGesture;
@end

