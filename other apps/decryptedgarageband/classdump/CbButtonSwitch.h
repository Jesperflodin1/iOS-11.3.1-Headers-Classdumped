//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "CbScreenshotable-Protocol.h"

@class CbStrokeLabel, UIButton, UIImage, UIImageView;

@interface CbButtonSwitch : UIControl <CbScreenshotable>
{
    int value;
    struct CGPoint initialPoint;
    struct CGPoint initialCenter;
    double buttonInset;
    double leftButtonInset;
    UIButton *button;
    CbStrokeLabel *label;
    UIImageView *track;
    struct CGRect trackFrame;
    UIImage *normalImage;
    UIImage *pressedImage;
    _Bool buttonInvertsImageStatesWhenLocked;
}

@property(nonatomic) int value; // @synthesize value;
- (void).cxx_destruct;
- (void)restoreFromScreenshotType:(int)arg1;
- (void)prepareForScreenshotType:(int)arg1;
- (void)setAssetSet:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)updatePositionAnimated:(_Bool)arg1;
- (void)updateForPoint:(struct CGPoint)arg1;
- (void)setValue:(int)arg1 animated:(_Bool)arg2;
- (void)setLatchLabel:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

