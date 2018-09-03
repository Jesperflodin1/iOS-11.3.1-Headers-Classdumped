//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet;
@protocol OS_dispatch_queue;

@interface GADCharacterSets : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSCharacterSet *_characterDelimitedSet;
    NSCharacterSet *_spaceDelimitedSet;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateCharacterSets;
@property(readonly, copy) NSCharacterSet *spaceDelimitedSet;
@property(readonly, copy) NSCharacterSet *characterDelimitedSet;
- (id)init;

@end
