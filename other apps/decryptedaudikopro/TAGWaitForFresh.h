//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGContainerCallback-Protocol.h"

@class NSString, TAGContainerOpener;

@interface TAGWaitForFresh : NSObject <TAGContainerCallback>
{
    double _oldestTimeToBeFresh;
    TAGContainerOpener *_containerOpener;
}

@property(retain) TAGContainerOpener *containerOpener; // @synthesize containerOpener=_containerOpener;
@property double oldestTimeToBeFresh; // @synthesize oldestTimeToBeFresh=_oldestTimeToBeFresh;
- (void).cxx_destruct;
- (_Bool)isFresh;
- (void)containerRefreshFailure:(id)arg1 failure:(int)arg2 refreshType:(int)arg3;
- (void)containerRefreshSuccess:(id)arg1 refreshType:(int)arg2;
- (void)containerRefreshBegin:(id)arg1 refreshType:(int)arg2;
- (id)initWithContainerOpener:(id)arg1 oldestTimeToBeFresh:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

