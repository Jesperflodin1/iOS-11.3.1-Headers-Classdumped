//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol CbCheckSongOpenAlertDelegate <NSObject>
- (void)checkSongOpenAlertDidFinishWithButtonIndex:(long long)arg1 alertInfo:(id)arg2 alertTag:(long long)arg3;

@optional
- (void)checkSongOpenCloudSongThatWillGetNonReadableOnOldDevicesAlertPressedContinueWithURL:(NSURL *)arg1;
- (void)checkSongOpenDuplicateSongDueToMissingFeaturesAlertPressedContinueWithURL:(NSURL *)arg1;
@end

