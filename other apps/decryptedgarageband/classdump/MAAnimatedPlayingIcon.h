//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface MAAnimatedPlayingIcon : UIView
{
    NSMutableArray *_barLayers;
    int _nLayers;
    UIColor *_barColor;
    double _space;
}

@property(nonatomic) double space; // @synthesize space=_space;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stop;
- (void)start;
- (id)randomBarAnimationForBar:(id)arg1;
- (void)setupLayers:(int)arg1;
- (void)setBarColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;

@end
