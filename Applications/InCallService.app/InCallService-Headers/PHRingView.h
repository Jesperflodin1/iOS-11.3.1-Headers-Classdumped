//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer;

@interface PHRingView : UIView
{
    _Bool __selected;
    _Bool __highlighted;
    _Bool __enabled;
    CALayer *_luminanceRingLayer;
    CALayer *_dodgeRingLayer;
    CALayer *_highlightDodgeLayer;
    CALayer *_highlightLuminanceLayer;
    CALayer *_selectionLayer;
    struct CGSize _ringSize;
}

+ (id)_createRingImageWithSize:(struct CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3;
+ (id)ringImageCache;
@property _Bool _enabled; // @synthesize _enabled=__enabled;
@property _Bool _highlighted; // @synthesize _highlighted=__highlighted;
@property _Bool _selected; // @synthesize _selected=__selected;
@property(retain) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain) CALayer *highlightLuminanceLayer; // @synthesize highlightLuminanceLayer=_highlightLuminanceLayer;
@property(retain) CALayer *highlightDodgeLayer; // @synthesize highlightDodgeLayer=_highlightDodgeLayer;
@property(retain) CALayer *dodgeRingLayer; // @synthesize dodgeRingLayer=_dodgeRingLayer;
@property(retain) CALayer *luminanceRingLayer; // @synthesize luminanceRingLayer=_luminanceRingLayer;
@property struct CGSize ringSize; // @synthesize ringSize=_ringSize;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)ringImageWithSize:(struct CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3 cacheIdentifier:(id)arg4;

@end
