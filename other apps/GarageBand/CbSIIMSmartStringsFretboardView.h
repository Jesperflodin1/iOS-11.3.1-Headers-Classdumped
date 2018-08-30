//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbSIIMFretboardView.h"

#import "CbSmartStringsDatasourceProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CbBowingRecognizer, CbNotesModeBowGestureProcessor, CbSmartStringsArticulationSwitch, CbSmartStringsFretboardController, NSArray, NSMutableArray, NSString, UIImageView;

@interface CbSIIMSmartStringsFretboardView : CbSIIMFretboardView <UIGestureRecognizerDelegate, CbSmartStringsDatasourceProtocol>
{
    NSMutableArray *_allPizzRecognizers;
    NSMutableArray *_allStaccatoRecognizers;
    NSMutableArray *_allBowRecognizers;
    CbBowingRecognizer *_bowRecognizer;
    CbNotesModeBowGestureProcessor *_bowGestureProcessor;
    CbSmartStringsArticulationSwitch *_bowingButton;
    long long _bowingStringHit;
    long long _bowingFretHit;
    _Bool _performingBowedGesture;
    long long _bowingMode;
    int _currentVelocity;
    UIImageView *_bowSwipeImageView;
    UIImageView *_bowTouchImageView;
    double _bowSwipeYOffset;
    NSArray *_bowTouchStringOffsets;
}

@property(copy, nonatomic) NSArray *bowTouchStringOffsets; // @synthesize bowTouchStringOffsets=_bowTouchStringOffsets;
@property(nonatomic) double bowSwipeYOffset; // @synthesize bowSwipeYOffset=_bowSwipeYOffset;
@property(readonly, nonatomic) UIImageView *bowTouchImageView; // @synthesize bowTouchImageView=_bowTouchImageView;
@property(readonly, nonatomic) UIImageView *bowSwipeImageView; // @synthesize bowSwipeImageView=_bowSwipeImageView;
@property(nonatomic) int currentVelocity; // @synthesize currentVelocity=_currentVelocity;
@property(nonatomic) long long bowingMode; // @synthesize bowingMode=_bowingMode;
@property(readonly, nonatomic) CbSmartStringsArticulationSwitch *bowingButton; // @synthesize bowingButton=_bowingButton;
@property(nonatomic) _Bool performingBowedGesture; // @synthesize performingBowedGesture=_performingBowedGesture;
- (void).cxx_destruct;
- (void)_setGestureRecognizers:(id)arg1 toEnabled:(_Bool)arg2;
- (void)updateInteraction:(id)arg1 withRecognizer:(id)arg2;
- (void)_setStringAndFretIndexForRecognizer:(id)arg1;
- (void)gestureBecamePossible:(id)arg1;
- (void)_handleBowingModeChange:(id)arg1;
- (void)setStringsViewDimensions;
- (void)reset;
- (void)hideArcoView;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNumStrings:(unsigned long long)arg1;
@property(nonatomic) CbSmartStringsFretboardController *controller; // @dynamic controller;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
