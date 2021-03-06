//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeGraphControl.h"

@class CALayer, CAShapeLayer, NSDictionary;

@interface MAVeGraphCtrlSurroundPan : MAVeGraphControl
{
    _Bool _separationVisible;
    _Bool _hasDiversity;
    _Bool _hasStereoDots;
    _Bool _hasSeparation;
    unsigned long long _actionRestriction;
    id _actionBackgroundLayerFillColor;
    id _actionBackgroundLayerStrokeColor;
    id _diversityBackgroundColor;
    id _diversityColorC;
    id _diversityColorL;
    id _diversityColorR;
    id _separationLineColor;
    id _separationLineColorHighlighted;
    id _separationFillColorHighlighted;
    unsigned long long _actionMode;
    CAShapeLayer *_actionBackgroundLayer;
    double _actionRestrictionConstValue;
    NSDictionary *_actionStartValues;
    CALayer *_diversityLayer;
    CALayer *_separationLayer;
}

@property(retain, nonatomic) CALayer *separationLayer; // @synthesize separationLayer=_separationLayer;
@property(retain, nonatomic) CALayer *diversityLayer; // @synthesize diversityLayer=_diversityLayer;
@property(retain, nonatomic) NSDictionary *actionStartValues; // @synthesize actionStartValues=_actionStartValues;
@property(nonatomic) double actionRestrictionConstValue; // @synthesize actionRestrictionConstValue=_actionRestrictionConstValue;
@property(retain, nonatomic) CAShapeLayer *actionBackgroundLayer; // @synthesize actionBackgroundLayer=_actionBackgroundLayer;
@property(nonatomic) unsigned long long actionMode; // @synthesize actionMode=_actionMode;
@property(retain, nonatomic) id separationFillColorHighlighted; // @synthesize separationFillColorHighlighted=_separationFillColorHighlighted;
@property(retain, nonatomic) id separationLineColorHighlighted; // @synthesize separationLineColorHighlighted=_separationLineColorHighlighted;
@property(retain, nonatomic) id separationLineColor; // @synthesize separationLineColor=_separationLineColor;
@property(retain, nonatomic) id diversityColorR; // @synthesize diversityColorR=_diversityColorR;
@property(retain, nonatomic) id diversityColorL; // @synthesize diversityColorL=_diversityColorL;
@property(retain, nonatomic) id diversityColorC; // @synthesize diversityColorC=_diversityColorC;
@property(retain, nonatomic) id diversityBackgroundColor; // @synthesize diversityBackgroundColor=_diversityBackgroundColor;
@property(retain, nonatomic) id actionBackgroundLayerStrokeColor; // @synthesize actionBackgroundLayerStrokeColor=_actionBackgroundLayerStrokeColor;
@property(retain, nonatomic) id actionBackgroundLayerFillColor; // @synthesize actionBackgroundLayerFillColor=_actionBackgroundLayerFillColor;
@property(nonatomic) unsigned long long actionRestriction; // @synthesize actionRestriction=_actionRestriction;
@property(nonatomic) _Bool hasSeparation; // @synthesize hasSeparation=_hasSeparation;
@property(nonatomic) _Bool hasStereoDots; // @synthesize hasStereoDots=_hasStereoDots;
@property(nonatomic) _Bool hasDiversity; // @synthesize hasDiversity=_hasDiversity;
- (void).cxx_destruct;
- (struct CGPoint)pointOfLineWithAngle:(double)arg1 nearestTo:(struct CGPoint)arg2;
- (void)initActionRestriction;
- (void)invertAngleAndSpread;
- (void)valueDidChangeValue:(id)arg1 oldValue:(double)arg2;
- (void)resetValueAtPosition:(struct CGPoint)arg1;
- (void)exitedEvent:(id)arg1;
- (void)movedEvent:(id)arg1;
- (void)enteredEvent:(id)arg1;
- (_Bool)onUpEvent:(id)arg1;
- (_Bool)onDraggedEvent:(id)arg1;
- (_Bool)onDownEvent:(id)arg1;
- (id)actionInfoForEvent:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)updateSeparationLayer;
- (void)updateDiversityLayer;
- (void)updateActionBackgroundLayer;
- (void)updateLayers;
- (void)setupLayersWithRootLayer:(id)arg1;
- (id)separationTrianglePointsFromLineStart:(struct CGPoint)arg1 mid:(struct CGPoint)arg2 end:(struct CGPoint)arg3;
- (id)separationPointsWithHighlightX:(_Bool)arg1 highlightY:(_Bool)arg2;
- (void)createContents;
@property(nonatomic) struct CGSize design_separationFullRangeSize;
@property(readonly, nonatomic) struct CGSize separationFullRangeSize;
@property(nonatomic) double design_separationLineWidthHighlighted;
@property(readonly, nonatomic) double separationLineWidthHighlighted;
@property(nonatomic) double design_separationLineWidth;
@property(readonly, nonatomic) double separationLineWidth;
@property(nonatomic) double design_diversityLineWidth;
@property(readonly, nonatomic) double diversityLineWidth;
@property(nonatomic) double design_diversityRadiusOffsetR;
@property(readonly, nonatomic) double diversityRadiusOffsetR;
@property(nonatomic) double design_diversityRadiusOffsetL;
@property(readonly, nonatomic) double diversityRadiusOffsetL;
@property(nonatomic) double design_diversityRadiusOffsetC;
@property(readonly, nonatomic) double diversityRadiusOffsetC;
@property(nonatomic) double design_diversityBaseRadius;
@property(readonly, nonatomic) double diversityBaseRadius;
@property(nonatomic) double design_diversityBackgroundLineWidth;
@property(readonly, nonatomic) double diversityBackgroundLineWidth;
@property(nonatomic) double design_actionBackgroundLayerLineWidth;
@property(readonly, nonatomic) double actionBackgroundLayerLineWidth;
@property(nonatomic) double design_dotActionRadiusMax;
@property(readonly, nonatomic) double dotActionRadiusMax;
- (_Bool)isActionMode:(unsigned long long)arg1;
@property(nonatomic) _Bool separationVisible; // @synthesize separationVisible=_separationVisible;
@property(readonly, nonatomic) _Bool hasCenterDiversity;
- (void)setAssetSetPath:(id)arg1;

@end

