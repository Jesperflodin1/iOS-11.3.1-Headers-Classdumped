//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MASearchKitIndexing-Protocol.h"

@class MASearchKitIndex, NSString;

@interface MASearchKitBinaryFileIndexer : NSObject <MASearchKitIndexing>
{
    MASearchKitIndex *index;
    id _indexObserver;
}

@property(retain, nonatomic) id indexObserver; // @synthesize indexObserver=_indexObserver;
@property(retain) MASearchKitIndex *index; // @synthesize index;
- (void).cxx_destruct;
- (id)_extractMetaDataFromURL:(id)arg1;
- (void)indexURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

