/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, CALayer;

@interface RCRecorderStateButton : UIButton {

	UIColor* _outerColor;
	CALayer* _innerLayer;
	UIColor* _innerColor;
	BOOL _realEnabledState;
	BOOL _isForceDisabled;
	long long _AVCaptureState;

}

@property (assign,nonatomic) long long AVCaptureState;              //@synthesize AVCaptureState=_AVCaptureState - In the implementation block
@property (assign,nonatomic) BOOL isForceDisabled;                  //@synthesize isForceDisabled=_isForceDisabled - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isForceDisabled;
-(double)_currentStateTopLevelDrawingAlpha;
-(void)_drawOuterCircle;
-(double)_currentStateInnerDrawingAlpha;
-(void)setAVCaptureState:(long long)arg1 ;
-(void)setIsForceDisabled:(BOOL)arg1 ;
-(long long)AVCaptureState;
@end

