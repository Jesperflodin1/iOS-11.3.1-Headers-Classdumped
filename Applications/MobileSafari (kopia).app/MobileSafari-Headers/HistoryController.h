//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _WKVisitedLinkStore;

@interface HistoryController : NSObject
{
    _WKVisitedLinkStore *_visitedLinkStore;
}

+ (id)sharedHistoryController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;
- (id)init;

@end
