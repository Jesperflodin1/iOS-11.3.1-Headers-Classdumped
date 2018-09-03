//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol GAIReachabilityDelegate;

@interface GAIReachabilityChecker : NSObject
{
    int reachabilityStatus_;
    const struct GAIReachabilityApi *reachabilityApi_;
    struct __SCNetworkReachability *reachability_;
    NSString *host_;
    id <GAIReachabilityDelegate> delegate_;
}

@property(nonatomic) id <GAIReachabilityDelegate> delegate; // @synthesize delegate=delegate_;
@property(copy, nonatomic) NSString *host; // @synthesize host=host_;
@property(nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=reachabilityStatus_;
@property(nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=reachability_;
- (void)reachabilityFlagsChanged:(unsigned int)arg1;
- (int)statusForFlags:(unsigned int)arg1;
- (void)stop;
- (_Bool)start;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 withHost:(id)arg2;
- (id)init;
@property(readonly, nonatomic) _Bool isActive;
@property(nonatomic) const struct GAIReachabilityApi *reachabilityApi; // @synthesize reachabilityApi=reachabilityApi_;

@end

