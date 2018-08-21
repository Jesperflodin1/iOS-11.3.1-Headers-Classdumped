/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <NeutrinoKit/NURenderView.h>

@class UILongPressGestureRecognizer, CMMotionManager;

@interface NUDebugRenderView : NURenderView {

	UILongPressGestureRecognizer* _doubleTap;
	BOOL _showDebug;
	CMMotionManager* _motionManager;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)debugMode;
-(void)_debugToggle:(id)arg1 ;
-(void)_stopDeviceMotion;
-(void)_startDeviceMotion;
-(void)_setupDeviceMotion;
-(void)_resetOrientation:(id)arg1 ;
-(void)_orientWithX:(double)arg1 andY:(double)arg2 ;
@end

