//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMAttitude, CMMotionManager, UIButton, UISlider;

@interface CbFXInputMotionController : NSObject
{
    _Bool _recoverTouchDown;
    _Bool _switchFXOff;
    float _referenceNomalizedYValue;
    float _referenceNomalizedXValue;
    long long _tag;
    UISlider *_xParamControlProxy;
    UISlider *_yParamControlProxy;
    UIButton *_touchDownControlProxy;
    CMMotionManager *_motionManager;
    CMAttitude *_referenceAttitude;
}

@property(nonatomic) _Bool switchFXOff; // @synthesize switchFXOff=_switchFXOff;
@property(nonatomic) float referenceNomalizedXValue; // @synthesize referenceNomalizedXValue=_referenceNomalizedXValue;
@property(nonatomic) float referenceNomalizedYValue; // @synthesize referenceNomalizedYValue=_referenceNomalizedYValue;
@property(copy, nonatomic) CMAttitude *referenceAttitude; // @synthesize referenceAttitude=_referenceAttitude;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) _Bool recoverTouchDown; // @synthesize recoverTouchDown=_recoverTouchDown;
@property(readonly, nonatomic) UIButton *touchDownControlProxy; // @synthesize touchDownControlProxy=_touchDownControlProxy;
@property(readonly, nonatomic) UISlider *yParamControlProxy; // @synthesize yParamControlProxy=_yParamControlProxy;
@property(readonly, nonatomic) UISlider *xParamControlProxy; // @synthesize xParamControlProxy=_xParamControlProxy;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)setNormalizedXValue:(float)arg1 andNormalizedYValue:(float)arg2 andSendActionForState:(long long)arg3;
- (void)idleCallHandler:(id)arg1;
- (void)stopMotionSwitchFXOff:(_Bool)arg1;
- (void)startMotionWithReferenceValueX:(id)arg1 andReferenceValueY:(id)arg2;
@property(readonly, nonatomic) _Bool motionIsActive;
- (void)dealloc;
- (void)internalInit;
- (id)init;

@end

