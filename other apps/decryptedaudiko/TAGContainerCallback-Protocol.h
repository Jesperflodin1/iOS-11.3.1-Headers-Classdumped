//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TAGContainer;

@protocol TAGContainerCallback <NSObject>
- (void)containerRefreshFailure:(TAGContainer *)arg1 failure:(int)arg2 refreshType:(int)arg3;
- (void)containerRefreshSuccess:(TAGContainer *)arg1 refreshType:(int)arg2;
- (void)containerRefreshBegin:(TAGContainer *)arg1 refreshType:(int)arg2;
@end

