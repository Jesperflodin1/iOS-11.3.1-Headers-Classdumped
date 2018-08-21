/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIView.h>

@protocol TSWPTextMagnifierRendererDelegate;
@class CALayer;

@interface TSWPTextMagnifierRenderer : UIView {

	id<TSWPTextMagnifierRendererDelegate> _delegate;
	CALayer* _underlayLayer;
	CALayer* _canvasLayer;
	CALayer* _overlayLayer;
	int _autoscrollDirections;

}

@property (assign,nonatomic) id<TSWPTextMagnifierRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int autoscrollDirections;                                    //@synthesize autoscrollDirections=_autoscrollDirections - In the implementation block
-(void)tearDown;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<TSWPTextMagnifierRendererDelegate>)delegate;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<TSWPTextMagnifierRendererDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)canvasNeedsDisplay;
-(id)p_createChildLayer;
-(int)autoscrollDirections;
@end

