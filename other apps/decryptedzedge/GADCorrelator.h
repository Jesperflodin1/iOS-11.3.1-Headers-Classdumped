//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GADCorrelator : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned int _correlationID;
}

- (void).cxx_destruct;
@property(readonly) unsigned int correlationID;
- (void)reset;
- (id)init;

@end

