//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdNetworkExtras-Protocol.h"

@class NSString;

@interface FlurryAdNetworkExtras : NSObject <GADAdNetworkExtras>
{
    _Bool isDebugLogEnabled;
    int logLevel;
}

@property int logLevel; // @synthesize logLevel;
@property _Bool isDebugLogEnabled; // @synthesize isDebugLogEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

