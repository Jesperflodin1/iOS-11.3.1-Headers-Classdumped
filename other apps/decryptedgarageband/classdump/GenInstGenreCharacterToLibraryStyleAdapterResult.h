//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GenInstGenreCharacterToLibraryStyleAdapterResult-Protocol.h"

@class NSNumber, NSString;

@interface GenInstGenreCharacterToLibraryStyleAdapterResult : NSObject <GenInstGenreCharacterToLibraryStyleAdapterResult>
{
    NSString *_genre;
    NSNumber *_instType;
    NSNumber *_styleIndex;
}

+ (id)resultWithGenre:(id)arg1 instType:(id)arg2 styleIndex:(id)arg3;
@property(retain) NSNumber *styleIndex; // @synthesize styleIndex=_styleIndex;
@property(retain) NSNumber *instType; // @synthesize instType=_instType;
@property(retain) NSString *genre; // @synthesize genre=_genre;
- (void).cxx_destruct;
- (id)initWithGenre:(id)arg1 instType:(id)arg2 styleIndex:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

