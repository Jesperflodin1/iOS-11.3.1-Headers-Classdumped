//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class CGenGlobalLuaScript, NSMutableDictionary;

@interface CGenGlobalLuaScriptsPool : NSObject <NSCopying>
{
    _Bool _hasReadFilesFromDisc;
    struct IGeneratorLibraryBundleLocations *_libraryBundleLocations;
    NSMutableDictionary *_cache;
    CGenGlobalLuaScript *_dummyLuaScript;
}

@property _Bool hasReadFilesFromDisc; // @synthesize hasReadFilesFromDisc=_hasReadFilesFromDisc;
@property(retain) CGenGlobalLuaScript *dummyLuaScript; // @synthesize dummyLuaScript=_dummyLuaScript;
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) struct IGeneratorLibraryBundleLocations *libraryBundleLocations; // @synthesize libraryBundleLocations=_libraryBundleLocations;
- (void).cxx_destruct;
- (void)addObject:(id)arg1 toCacheWithIdentifier:(id)arg2;
- (void)cleanupFilesOnDisc;
- (void)updateIdentifiersFromFilesOnDisc;
- (void)enumerateFilesOnDiscWithBlock:(CDUnknownBlockType)arg1;
- (id)objectForIdentifier:(id)arg1;
- (id)dataForIdentifier:(id)arg1;
- (void)removeObjectForIdentifier:(id)arg1 postNotifications:(_Bool)arg2;
- (int)fileTypeForURL:(id)arg1;
- (id)identifiersAtIndexes:(id)arg1;
- (_Bool)cacheContainsIdentifier:(id)arg1;
- (void)removeObjectsForIndexes:(id)arg1;
- (void)removeObjectForIdentifier:(id)arg1;
- (void)postDidChangeNotification;
- (void)postWillChangeNotification;
- (_Bool)saveToDisc;
- (void)updateFromDisc;
- (_Bool)renameIdentifier:(id)arg1 toIdentifier:(id)arg2;
- (_Bool)renameIdentifierAtIdx:(unsigned long long *)arg1 toIdentifier:(id)arg2;
- (_Bool)setObject:(id)arg1 forIdentifier:(id)arg2;
- (id)objectsForIdentifiers:(id)arg1;
- (id)objectsForIndexes:(id)arg1;
- (_Bool)hasObjectForIdentifier:(id)arg1;
- (void)purge;
- (id)identifiers;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLibraryBundleLocations:(struct IGeneratorLibraryBundleLocations *)arg1;
- (id)init;

@end

