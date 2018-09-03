//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbSegmentedRegionLayer.h"

@class NSDictionary, NSString;

@interface CbArrangeRegionLayer : CbSegmentedRegionLayer
{
    NSDictionary *_assetSet;
    NSString *_assetSetName;
    _Bool _inOverviewTimerSet;
    double _overviewAlpha;
    double _nameLabelFontSize;
    struct CGPoint _nameLabelPosition;
    double _currentOVNoteHeight;
    double _takeLabelContainerHeight;
    double _takeLabelContainerCornerRadius;
    _Bool _isDrummer;
    _Bool _isMasterTrackRegion;
    NSString *_assetSetNamePostfix;
}

+ (void)_songSaveDidFailHandler:(id)arg1;
+ (void)_songDidSaveHandler:(id)arg1;
+ (void)_songWillSaveHandler:(id)arg1;
+ (_Bool)_abortAllTiledLayerDrawingsWithTimeout:(double)arg1;
+ (int)tilesCurrentlyDrawing;
+ (void)decTilesCurrentlyDrawing;
+ (void)incTilesCurrentlyDrawing;
+ (void)_removeRegionLayerFromOverviewTimer:(id)arg1;
+ (void)_addRegionLayerToOverviewTimer:(id)arg1;
+ (void)_ovRedrawTimerAction:(id)arg1;
+ (void)initialize;
+ (void)registerNotificationHandlers;
@property(retain, nonatomic) NSString *assetSetNamePostfix; // @synthesize assetSetNamePostfix=_assetSetNamePostfix;
- (void).cxx_destruct;
- (void)setOverviewNeedsRedrawIfAndCheckOverviewTimer;
- (void)willBeRemoved;
- (int)_drawDrummerMidiNoteEventCallback:(struct _LgSongIterator *)arg1:(const struct _LgEvent *)arg2;
- (int)_drawMidiNoteEventCallback:(struct _LgSongIterator *)arg1:(const struct _LgEvent *)arg2;
- (int)_drawMasterEventCallback:(struct _LgSongIterator *)arg1:(const struct _LgEvent *)arg2;
- (void)_drawMasterRegionCurves:(struct CbMidiRegionDrawUserInfo_t *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)tiledDrawRect:(struct CGRect)arg1;
- (struct CGImage *)_newAudioRegionOverviewWithHeight:(double)arg1 clipX:(double)arg2 clipWidth:(double)arg3 pxTakeOffset:(double *)arg4;
- (id)_currentTakeLabelContainerColor;
- (id)_currentTakeLabelColor;
- (id)_currentContentLoopColor;
- (id)_currentContentColor;
- (id)_currentLabelColor;
- (struct CGRect)_getOverviewLayerFrameForElementLayer:(id)arg1;
- (void)_getTakeLabelContainerLayerFrame:(struct CGRect *)arg1 andTakeLabelFrame:(struct CGRect *)arg2 forElementLayer:(id)arg3;
- (void)_createAndAddTakeLabelLayersIfNeededForElement:(id)arg1;
- (struct CGRect)_getNameLayerFrameForElementLayer:(id)arg1;
- (id)_createNameLayer;
- (id)getNameLayerColor;
- (id)getNameLayerFont;
- (void)setOverviewAlpha:(double)arg1;
- (void)enableOverview;
- (void)disableOverview;
- (void)_renewOverViewLayerForElementLayer:(id)arg1 fadeOutOldLayerIfNecessary:(_Bool)arg2;
- (_Bool)_initialRedrawFlagOfNonTiledOverviewLayer:(id)arg1;
- (void)_setInitialRedrawOfNonTiledOverviewLayerIfNecessary:(id)arg1;
- (void)_startOverviewFadOutAnimationForElement:(id)arg1 oldOverviewLayer:(id)arg2;
- (void)_stopOverviewFadOutAnimationForElement:(id)arg1;
- (void)_updateImageForElement:(id)arg1 withType:(int)arg2;
- (void)_updateAssetSet;
- (void)_disableAutoOvUpdaterIfNecessary:(_Bool)arg1;
- (void)_enableAutoOvUpdaterIfNecessary;
- (void)setGhostRegionToMidi:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateRegionDecorationContentsAnimatedWithDuration:(double)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)_isMidi;
- (void)_regionSelectionDidChange:(id)arg1;
- (void)_regionGenInstDidChange:(id)arg1;
- (void)_regionNameDidChange:(id)arg1;
- (void)_activeTakeChanged:(id)arg1;
- (void)_regionContentRendered:(id)arg1;
- (id)nameLayer;
- (void)updatePointerViewHiddenState;
- (void)updateDeleteButtonHiddenState;
- (void)setAttachedResizeHandle:(id)arg1;
- (void)updateSelectionDisplayState:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRegion:(id)arg1 overviewEnabled:(_Bool)arg2;

@end

