//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbSIIMStringsComperView.h"

@class CbSIIMBassComperController;

@interface CbSIIMBassComperView : CbSIIMStringsComperView
{
    _Bool _lowStringIsOnTop;
}

@property(nonatomic) _Bool lowStringIsOnTop; // @synthesize lowStringIsOnTop=_lowStringIsOnTop;
- (void)hideStringsAnimated:(_Bool)arg1;
- (void)showStringsAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_putLowStringOnTopIfNeeded;

// Remaining properties
@property(nonatomic) CbSIIMBassComperController *controller; // @dynamic controller;

@end
