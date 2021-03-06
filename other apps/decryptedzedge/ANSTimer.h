//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;
@protocol OS_dispatch_source;

@interface ANSTimer : NSObject
{
    NSString *_timerIdentifier;
    double _timeInterval;
    CDUnknownBlockType _timerBlock;
    NSOperationQueue *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType timerBlock; // @synthesize timerBlock=_timerBlock;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) NSString *timerIdentifier; // @synthesize timerIdentifier=_timerIdentifier;
- (void).cxx_destruct;
- (void)scheduleDispatchTimer;
- (void)executeBlock;
@property(readonly, nonatomic) double tolerance;
- (void)scheduleTimer;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 timerIdentifier:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

