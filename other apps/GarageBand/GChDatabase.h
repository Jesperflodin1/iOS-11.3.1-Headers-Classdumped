//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GChChord, GChLibrary, GChTuning, NSMutableArray, NSString;

@interface GChDatabase : NSObject
{
    NSMutableArray *allTunings;
    GChTuning *activeTuning;
    NSString *defaultUserPackagePath;
    NSMutableArray *filesToDelete;
    NSString *defaultTuningName;
    GChChord *chordNotInLibrary;
    GChChord *editedChord;
    GChChord *undoChord;
    GChChord *originalChord;
    GChLibrary *sourceLibrary;
    unsigned long long dbChordCount0;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfActiveBasicChords;
- (unsigned long long)numberOfActiveChords;
- (id)allChordsFilteringLibrary:(id)arg1 createRanges:(_Bool)arg2;
- (id)additionalChordToDisplay;
- (_Bool)hasAdditionalChordToDisplay;
- (id)originalBasicChord;
- (id)originalChord;
- (void)setOriginalChord:(id)arg1;
- (id)editedBasicChord;
- (id)undoChord;
- (void)setUndoChord:(id)arg1;
- (id)editedChord;
- (void)setEditedChord:(id)arg1;
- (id)sourceLibrary;
- (void)setChordNotInLibrary:(id)arg1;
- (id)chordNotInLibrary;
- (_Bool)editedChordIsEmpty;
- (_Bool)basicChordWasChanged;
- (_Bool)editedChordHasChanges;
- (id)description;
- (id)allUserLibrariesForAnyTuning;
- (id)allLibrariesForAnyTuning;
- (id)tuningWithRuntimeID:(long long)arg1;
- (id)tuningWithShortTuning:(char *)arg1 tuningName:(id)arg2;
- (id)tuningWithDefaultGuitarTuning;
- (id)activeTuning;
- (_Bool)setActiveTuning:(id)arg1;
- (id)allTunings;
- (void)replaceChord1Range1:(id)arg1 withChord:(id)arg2;
- (void)deleteChord1Range:(id)arg1;
- (_Bool)removeTuning:(id)arg1;
- (_Bool)removeLibrary:(id)arg1;
- (id)localizedDefaultTuningName;
- (void)setLocalizedDefaultTuningName:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)updateDatabaseFiles;
- (_Bool)readOneRegularFile:(id)arg1 libraryPath:(id)arg2;

@end
