//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAUIColoredBackgroundButton.h"

@class UIImage, UIView;

@interface CbFxInputFxSelectorButton : MAUIColoredBackgroundButton
{
    UIView *_buttonsContainerView;
    UIImage *_normalImage;
}

@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(nonatomic) UIView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)dealloc;

@end

