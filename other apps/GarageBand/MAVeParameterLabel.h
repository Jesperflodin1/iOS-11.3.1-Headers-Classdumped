//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeContinuousControl.h"

@class MAVeScalableTextLayer, NSString;

@interface MAVeParameterLabel : MAVeContinuousControl
{
    struct CGPoint _startingPoint;
    double _startingValue;
    unsigned long long _showValueFlags;
    _Bool drawsBackground;
    _Bool smallerSizedUnit;
    _Bool _showsUnit;
    _Bool _inEditMode;
    MAVeScalableTextLayer *_valueLayer;
    MAVeScalableTextLayer *_labelLayer;
}

@property(nonatomic) _Bool inEditMode; // @synthesize inEditMode=_inEditMode;
@property(nonatomic) _Bool showsUnit; // @synthesize showsUnit=_showsUnit;
@property(retain, nonatomic) MAVeScalableTextLayer *labelLayer; // @synthesize labelLayer=_labelLayer;
@property(retain, nonatomic) MAVeScalableTextLayer *valueLayer; // @synthesize valueLayer=_valueLayer;
@property(nonatomic) _Bool smallerSizedUnit; // @synthesize smallerSizedUnit;
@property(nonatomic) _Bool drawsBackground; // @synthesize drawsBackground;
- (void).cxx_destruct;
- (void)updateParameterLabelState;
- (void)showValueString:(_Bool)arg1 dragging:(_Bool)arg2;
- (void)assetSetHasChanged;
- (void)valueDidChangeUnit:(id)arg1 oldUnit:(id)arg2;
- (void)valueDidChangeStringValue:(id)arg1 oldStringValue:(id)arg2;
- (void)gestureDetected:(id)arg1;
- (void)scrollEvent:(id)arg1;
- (double)distanceOfEvent:(id)arg1;
- (void)exitedEvent:(id)arg1;
- (void)enteredEvent:(id)arg1;
- (_Bool)onUpEvent:(id)arg1;
- (_Bool)onDraggedEvent:(id)arg1;
- (_Bool)onDownEvent:(id)arg1;
- (void)resetValueAtPosition:(struct CGPoint)arg1;
- (void)updateValue;
- (void)liveResizeChanged;
@property(nonatomic) NSString *labelString;
@property(nonatomic) NSString *valueString;
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
