//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PUPlayheadView;

@interface _PUScrubberContainerView : UIView
{
    double __edgeInset;
    UIView *__movieScrubber;
    PUPlayheadView *__playheadView;
}

@property(retain, nonatomic, setter=_setPlayheadView:) PUPlayheadView *_playheadView; // @synthesize _playheadView=__playheadView;
@property(retain, nonatomic, setter=_setMovieScrubber:) UIView *_movieScrubber; // @synthesize _movieScrubber=__movieScrubber;
@property(nonatomic, setter=_setEdgeInset:) double _edgeInset; // @synthesize _edgeInset=__edgeInset;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;

@end

