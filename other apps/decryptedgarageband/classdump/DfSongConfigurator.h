//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DfDocument, NSMutableArray;

@interface DfSongConfigurator : NSObject
{
    DfDocument *m_pDocument;
    struct LGDOCUMENT *m_hLogicDocument;
    long long m_countRealOrGuitarTracks;
    long long m_countSoftwareTracks;
    int m_lastStatus;
    NSMutableArray *m_tmpAGCTracks;
    NSMutableArray *m_tmpFBDTracks;
    _Bool m_hasAnyRecEnabledGuitarTrack;
}

+ (void)replacePrePokerCompressorSettingOfChannel:(id)arg1;
+ (void)makeSureChannelIsForcedToNoTransposeModeIfNeeded:(id)arg1;
+ (id)configuratorWithDocument:(id)arg1;
+ (id)defaultConfigurator;
- (void).cxx_destruct;
- (int)saveAllSamplerFilesToPath:(id)arg1;
- (id)protectFeedbackAndReturnChannels;
- (void)updateInputChannelsAndEnabledStates;
- (void)updateInputConfiguration;
- (void)updateAllInstrumentNumberOfVoices;
- (int)setMasterPhoneConfig:(_Bool)arg1;
- (unsigned char)setOrCheckDefaultMasterConfig:(_Bool)arg1;
- (unsigned char)_legacySetDefaultTrackConfig:(id)arg1 checkDefaultsOnly:(_Bool)arg2;
- (unsigned char)setDefaultTrackConfig:(id)arg1 checkDefaultsOnly:(_Bool)arg2;
- (void)setDefaultSongConfig;
- (int)lastStatus;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)_removeUserSlotGapsForChannel:(id)arg1 slotOffset:(int)arg2;
- (unsigned char)_setDefaultBusConfig:(long long)arg1 checkDefaultsOnly:(_Bool)arg2;
- (unsigned char)_setDefaultInstrument:(id)arg1;
- (int)_saveAllSamplerFilesIterator:(struct _LgSongIterator *)arg1 withTrackHandle:(const struct _LgTrack *)arg2;
- (int)_saveSamplerFilesInChannel:(id)arg1 toPath:(id)arg2;
- (void)_setCrosstalkCompensation:(_Bool)arg1;
- (int)_protectFeedbackIterator:(struct _LgSongIterator *)arg1 withTrackHandle:(const struct _LgTrack *)arg2;
- (int)_updateInputChannelsAndEnabledStatesIterator:(struct _LgSongIterator *)arg1 withTrackHandle:(const struct _LgTrack *)arg2;
- (int)_updateInputConfigurationIterator:(struct _LgSongIterator *)arg1 withTrackHandle:(const struct _LgTrack *)arg2;
- (int)_updateNumberOfVoicesIterator:(struct _LgSongIterator *)arg1 withTrackHandle:(const struct _LgTrack *)arg2;
- (int)_updateNumberOfVoicesInChannel:(id)arg1;
- (int)_defaultSongIterator:(struct _LgSongIterator *)arg1 withTrackHandle:(const struct _LgTrack *)arg2;
- (void)dumpTrackSettings;
- (void)dumpEffectSettings;
- (void)dumpPluginsFromBus:(id)arg1;

@end

