//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSURLSessionTask;

@interface FBAdURLSessionTaskContainer : NSObject
{
    NSURLSessionTask *_task;
    NSDate *_requestStart;
}

@property(retain, nonatomic) NSDate *requestStart; // @synthesize requestStart=_requestStart;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly) long long state;
- (id)init;

@end

