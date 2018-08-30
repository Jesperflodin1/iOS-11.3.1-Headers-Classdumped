//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSFileWrapper, NSString, _CLgMainStageBundleWrapper;

@interface CLgMainStageImporter : NSObject
{
    _CLgMainStageBundleWrapper *_bundleWrapper;
    NSString *_fileType;
    _CLgMainStageBundleWrapper *_concertBundleWrapper;
    NSFileWrapper *v2RootWrapper;
    NSString *patchCategory;
    bitset_dc343b9a patchImportOptions;
}

+ (void)loadCSTLikePatch:(id)arg1 toTrack:(struct TPosOneBasedTrackNr)arg2 seqID:(int)arg3 intoDocument:(struct CDocumentLogic *)arg4 withName:(id)arg5 andCategory:(id)arg6 filterOptions:(unsigned int)arg7;
+ (void)setSendSlot:(int)arg1 inDest:(int)arg2 toSendDest:(int)arg3 orType:(struct TAuConfType)arg4 andIndex:(int)arg5 resetToSendInfo:(id)arg6 forSong:(struct CSong *)arg7;
+ (id)loadTaggedAuxForGIndex:(int)arg1 inSong:(struct CSong *)arg2 withProps:(id)arg3 returnFreshSet:(id)arg4;
+ (int)instIDForAuxName:(id)arg1 inSong:(struct CSong *)arg2 returnFreshSet:(id)arg3;
+ (id)importerWithFileWrapper:(id)arg1 ofType:(id)arg2 error:(out id *)arg3;
+ (id)importerWithURL:(id)arg1 error:(out id *)arg2;
+ (void)initialize;
@property bitset_dc343b9a patchImportOptions; // @synthesize patchImportOptions;
@property(copy, nonatomic) NSString *patchCategory; // @synthesize patchCategory;
- (id).cxx_construct;
- (void)instantiateAChannelFor:(int)arg1 inSong:(struct CSong *)arg2 withImportFlags:(unsigned int)arg3;
- (id)instantiateReferencedChannelsAt:(struct TPosOneBasedTrackNr)arg1 inSong:(struct CSong *)arg2;
- (_Bool)adjustContentPatchMappings:(id)arg1;
- (id)readChannelArray;
- (id)flattenedInfoForChannelArray:(id)arg1;
- (void)flattenedInfoIntoDictionary:(id)arg1 forChannelArray:(id)arg2;
- (void)storePatchMappings:(id)arg1 ontoGInstID:(int)arg2 resolvingChannels:(id)arg3 inSong:(struct CSong *)arg4;
- (id)trackCreationArrayForWrapper:(id)arg1;
- (struct TPosOneBasedTrackNr)createTracksInSong:(struct CSong *)arg1 atTrackNr:(struct TPosOneBasedTrackNr)arg2 inFolder:(int)arg3 withCollapseLevel:(int)arg4 trackHierarchy:(id)arg5 info:(id)arg6;
- (id)importPatchWithChannelsInSong:(struct CSong *)arg1 channels:(id)arg2 toTrack:(struct TPosOneBasedTrackNr)arg3 inFolder:(int)arg4 resolvingChannelsLater:(id)arg5 outInstID:(int *)arg6;
- (id)restoreChannelsFromPatchInSong:(struct CSong *)arg1 channels:(id)arg2 rerouting:(id)arg3 resolveMainStageIDs:(id)arg4 resolvingChannelsLater:(id)arg5;
- (long long)patchIconID;
- (id)contentTagLayoutName;
- (id)uiData;
- (id)mappings;
- (void)close;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, retain, nonatomic) _CLgMainStageBundleWrapper *concert;
@property(readonly, copy, nonatomic) NSData *logicSongData;
@property(readonly, nonatomic) unsigned long long documentVersion;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (id)initWithFileWrapper:(id)arg1 ofType:(id)arg2 error:(out id *)arg3;
- (id)_failInitWithErrorPointer:(id *)arg1 description:(id)arg2 suggestionFormat:(id)arg3;
- (id)initWithURL:(id)arg1 error:(out id *)arg2;

@end
