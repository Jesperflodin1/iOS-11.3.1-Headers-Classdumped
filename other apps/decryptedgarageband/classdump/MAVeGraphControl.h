//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeContinuousControl.h"

@class NSDictionary, NSMutableDictionary;

@interface MAVeGraphControl : MAVeContinuousControl
{
    NSMutableDictionary *_actionInfo;
    NSMutableDictionary *_graphLayers;
    NSDictionary *_incrementDecrementInfo;
}

@property(retain, nonatomic) NSDictionary *incrementDecrementInfo; // @synthesize incrementDecrementInfo=_incrementDecrementInfo;
@property(retain, nonatomic) NSMutableDictionary *graphLayers; // @synthesize graphLayers=_graphLayers;
@property(retain, nonatomic) NSMutableDictionary *actionInfo; // @synthesize actionInfo=_actionInfo;
- (void).cxx_destruct;
- (_Bool)rotationGestureEnabled;
- (void)gestureDetected:(id)arg1;
- (_Bool)magnificationGestureEnabled;
- (_Bool)doubleTabGestureEnabled;
- (_Bool)swipeGestureEnabled;
- (void)resetValueAtPosition:(struct CGPoint)arg1;
- (void)decrementValue;
- (void)incrementValue;
- (void)exitedEvent:(id)arg1;
- (void)movedEvent:(id)arg1;
- (void)enteredEvent:(id)arg1;
- (_Bool)onDraggedEvent:(id)arg1;
- (_Bool)onUpEvent:(id)arg1;
- (_Bool)onDownEvent:(id)arg1;
- (id)actionInfoForEvent:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (id)zOrderedGraphShapes;
- (id)graphShapeWithID:(id)arg1;
- (id)allGraphShapes;
- (id)zOrderedGraphLayers;
- (void)setGraphLayersWithIDs:(id)arg1 visible:(_Bool)arg2;
- (void)removeAllGraphLayers;
- (void)removeGraphLayerWithID:(id)arg1;
- (id)graphLayerWithID:(id)arg1;
- (id)allGraphLayers;
- (id)addGraphLayer:(id)arg1 withID:(id)arg2;
- (void)updateLayers;
- (void)tearDownLayers;
- (void)setupLayersWithRootLayer:(id)arg1;
- (id)addValue:(id)arg1 withID:(id)arg2;
- (void)setScaleFactor:(double)arg1;
- (_Bool)customActionTrigger;

@end

