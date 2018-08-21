/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer, UIColor;

@interface RCOverlayBarLayer : CALayer {

	CALayer* _topKnob;
	CALayer* _bar;
	CALayer* _bottomKnob;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(double)selectionKnobRadius;
+(double)selectionBarWidth;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4 ;
-(void)_loadWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4 ;
-(id)barComponents;
@end

