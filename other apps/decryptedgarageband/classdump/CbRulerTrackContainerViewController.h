//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DfDocument, NSMutableArray;

@interface CbRulerTrackContainerViewController : UIViewController
{
    NSMutableArray *_trackControllers;
    double _normalizedClippingHeight;
    double _normalizedClippingY;
    DfDocument *_document;
    _Bool _onlyCreateCurrentTrack;
    int _specialMode;
}

@property(nonatomic) int specialMode; // @synthesize specialMode=_specialMode;
@property(nonatomic) _Bool onlyCreateCurrentTrack; // @synthesize onlyCreateCurrentTrack=_onlyCreateCurrentTrack;
@property(readonly, nonatomic) __weak DfDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)_updateTrackSelectionHandler:(id)arg1;
- (void)_updateGridTracksHandler:(id)arg1;
- (void)_updateTracksHandler:(id)arg1;
- (void)_trackWillBeRemovedFromModelHandler:(id)arg1;
- (void)_handleTimeSignatureChange:(id)arg1;
- (void)setNormalizedVisibleContentY:(double)arg1;
- (void)setNormalizedVisibleContentHeight:(double)arg1;
- (void)updateTrackViews;
- (void)recreateAllTrackViews;
- (void)relayoutTrackViews;
- (void)relayoutRegionLayersInAllTracks;
- (void)updateRegionsInAllTracks;
- (void)removeAllTrackViews;
- (void)setTrackViewsAlpha:(double)arg1 onlyNonCurrentTracks:(_Bool)arg2;
- (id)trackControllerForTrack:(id)arg1;
- (id)singleTrackViewController;
- (id)model;
- (void)loadView;
- (void)close;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

