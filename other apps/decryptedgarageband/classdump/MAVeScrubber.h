//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeContinuousControl.h"

@class MAVeScalableTextLayer, NSFormatter, NSString;

@interface MAVeScrubber : MAVeContinuousControl
{
    struct CGPoint _startingPoint;
    double _startingValue;
    _Bool drawsBackground;
    _Bool smallerSizedUnit;
    _Bool _showsUnit;
    _Bool _touched;
    NSFormatter *_formatter;
    MAVeScalableTextLayer *_textLayer;
    id _foregroundColor;
    id _foregroundHighlightColor;
}

@property(nonatomic) _Bool touched; // @synthesize touched=_touched;
@property(retain, nonatomic) id foregroundHighlightColor; // @synthesize foregroundHighlightColor=_foregroundHighlightColor;
@property(retain, nonatomic) id foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) _Bool showsUnit; // @synthesize showsUnit=_showsUnit;
@property(retain, nonatomic) MAVeScalableTextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) _Bool smallerSizedUnit; // @synthesize smallerSizedUnit;
@property(nonatomic) _Bool drawsBackground; // @synthesize drawsBackground;
- (void).cxx_destruct;
- (void)assetSetHasChanged;
- (void)valueDidChangeUnit:(id)arg1 oldUnit:(id)arg2;
- (void)valueDidChangeStringValue:(id)arg1 oldStringValue:(id)arg2;
- (void)exitedEvent:(id)arg1;
- (void)enteredEvent:(id)arg1;
- (void)gestureDetected:(id)arg1;
- (void)scrollEvent:(id)arg1;
- (double)distanceOfEvent:(id)arg1;
- (_Bool)onUpEvent:(id)arg1;
- (_Bool)onDraggedEvent:(id)arg1;
- (_Bool)onDownEvent:(id)arg1;
- (void)resetValueAtPosition:(struct CGPoint)arg1;
- (void)updateText;
- (void)liveResizeChanged;
@property(nonatomic) NSString *string;
@property(nonatomic, setter=set_mainValueDefault:) double mainValueDefault;
@property(nonatomic, setter=set_mainValueMax:) double mainValueMax;
@property(nonatomic, setter=set_mainValueMin:) double mainValueMin;
@property(nonatomic, setter=set_mainValueNormed:) double mainValueNormed;
@property(nonatomic, setter=set_mainValue:) double mainValue;
@property(nonatomic) int textAlignment;
- (void)setScaleFactor:(double)arg1;
@property(nonatomic) double design_baselinePosition;
@property(readonly, nonatomic) double baselinePosition;
- (void)updateLayers;
- (void)tearDownLayers;
- (void)setUpLayers;
- (void)setupLayersWithRootLayer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

