//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeRoundSlider.h"

@class CALayer;

@interface MAVePepperRoundSlider : MAVeRoundSlider
{
    CALayer *_trackGapLayer;
}

@property(retain, nonatomic) CALayer *trackGapLayer; // @synthesize trackGapLayer=_trackGapLayer;
- (void).cxx_destruct;
- (void)updateTrackLayer;
- (void)updateTrackGapLayer;
- (void)tearDownLayers;
- (void)updateLayers;
- (void)setupLayers;
- (void)addMaskLayerToLayer:(id)arg1;

@end
