/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <TVRemoteCore/TVRCTouchProcessor.h>

@class UITapGestureRecognizer, NSTimer;

@interface TVRCStandardTouchProcessor : TVRCTouchProcessor {

	long long _clickVirtualizerState;
	CGPoint _touchBeganLocation;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSTimer* _clickVirtualizerTimer;

}
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchpadView:(id)arg1 ;
-(void)_tap:(id)arg1 ;
-(void)_touchpadClickVirtualizerTimerFired:(id)arg1 ;
@end

