//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbSIIMFretsAndComperInstrumentController.h"

@class APDCoachingTipsManager, CbPluginCtrlsMappingController, CbSIIMStompBoxControl, CbSIIMStringsComperController, CbSIIMStringsComperView;

@interface CbGuitarIMViewController : CbSIIMFretsAndComperInstrumentController
{
    CbSIIMStompBoxControl *_stompBoxControl1;
    CbSIIMStompBoxControl *_stompBoxControl2;
    APDCoachingTipsManager *_apdCoachingTipsManager;
    CbPluginCtrlsMappingController *_parameterMappingController;
}

@property(retain, nonatomic) CbPluginCtrlsMappingController *parameterMappingController; // @synthesize parameterMappingController=_parameterMappingController;
@property(retain, nonatomic) APDCoachingTipsManager *apdCoachingTipsManager; // @synthesize apdCoachingTipsManager=_apdCoachingTipsManager;
@property CbSIIMStompBoxControl *stompBoxControl2; // @synthesize stompBoxControl2=_stompBoxControl2;
@property CbSIIMStompBoxControl *stompBoxControl1; // @synthesize stompBoxControl1=_stompBoxControl1;
- (void).cxx_destruct;
- (void)updateHelpOverlay;
- (void)updateVisibleHelpSets;
- (id)visibleHelpIndices;
- (id)allHelpIndices;
- (void)_pluginParamChangedHandler:(id)arg1;
- (_Bool)_skinTransitionShouldRasterize;
- (void)chordEditingModeDidEnd;
- (void)showChordEditingMode;
- (id)passthroughViews;
- (void)trackDidChangeWithOldTrack:(id)arg1;
- (void)channelDidLoadChannelStrip:(_Bool)arg1 isUndoRedo:(_Bool)arg2;
- (void)mapUnmapControls:(_Bool)arg1;
- (void)controllerDidOpen;
- (id)defaultFallBackGrooveSetName;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 andControllerID:(id)arg2 track:(id)arg3;
- (id)nibName;

// Remaining properties
@property(retain, nonatomic) CbSIIMStringsComperController *comperController; // @dynamic comperController;
@property(retain, nonatomic) CbSIIMStringsComperView *comperView; // @dynamic comperView;

@end

