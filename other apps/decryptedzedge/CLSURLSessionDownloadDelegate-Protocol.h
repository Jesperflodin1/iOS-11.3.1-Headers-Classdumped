//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLSURLSessionDataDelegate-Protocol.h"

@class CLSURLSessionDownloadTask, NSURL;

@protocol CLSURLSessionDownloadDelegate <CLSURLSessionDataDelegate>
- (void)downloadTask:(CLSURLSessionDownloadTask *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
@end

