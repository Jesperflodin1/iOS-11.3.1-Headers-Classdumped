//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInstreamAdVideoView, NSError;

@protocol FBInstreamAdVideoViewDelegate <NSObject>
- (void)videoView:(FBInstreamAdVideoView *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoViewDidEnd:(FBInstreamAdVideoView *)arg1;
- (void)videoViewDidProgress:(FBInstreamAdVideoView *)arg1;
- (void)videoViewTapped:(FBInstreamAdVideoView *)arg1;
- (void)videoViewDidLoad:(FBInstreamAdVideoView *)arg1;
@end

