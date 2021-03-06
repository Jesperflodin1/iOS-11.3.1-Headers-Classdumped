//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeUIButtonView.h"

@class MAVeButton, MAVeMenuGrid, MAVeUIMenuGridView;

@interface MAVeRemixerUIEffectSelectorButtonView : MAVeUIButtonView
{
    MAVeUIMenuGridView *_menuGridView;
    unsigned long long _actionPhase;
}

+ (Class)drawableClass;
@property(nonatomic) unsigned long long actionPhase; // @synthesize actionPhase=_actionPhase;
@property(nonatomic) MAVeUIMenuGridView *menuGridView; // @synthesize menuGridView=_menuGridView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) MAVeMenuGrid *menuGrid;
@property(readonly, nonatomic) MAVeButton *button;

@end

