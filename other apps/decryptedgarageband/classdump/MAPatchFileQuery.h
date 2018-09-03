//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileWrapper, NSOrderedSet, NSString;

@interface MAPatchFileQuery : NSObject
{
    NSFileWrapper *patchFileWrapper;
}

+ (id)queryFileAtURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *storedPatchName;
@property(readonly, nonatomic) NSOrderedSet *containedCsts;
- (id)willCreateChannelsOfTypeFromDatas:(id)arg1;
- (id)willCreateChannelsOfTypeCreatingTracks:(long long *)arg1;
@property(readonly, nonatomic) _Bool canAppOpenPatch;
@property(readonly, nonatomic) long long matchAgainstCurrentVersion;
@property(readonly, nonatomic) unsigned long long patchVersion;
@property(readonly, nonatomic) _Bool isStack;
- (id)initWithFileWrapper:(id)arg1;
- (id)taggedAsset;
- (id)willCreateChannelsOfTypeFromDatas:(id)arg1;

@end
