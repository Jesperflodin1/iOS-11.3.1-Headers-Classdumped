//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVePepperSlider.h"

@interface MAVePepperPlayPositionSlider : MAVePepperSlider
{
}

- (void)updateThumbLayers;
- (void)updateTrackFillLayers;
- (void)tearDownThumbLayers;
- (void)tearDownTrackFillLayers;
- (void)setupThumbLayers;
- (void)setupTrackFillLayers;
- (_Bool)vertical;
@property(nonatomic) double design_thumbDecoLength;
@property(readonly, nonatomic) double thumbDecoLength;
@property(nonatomic) double design_thumbDecoThickness;
@property(readonly, nonatomic) double thumbDecoThickness;

@end
