//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBSDKMessengerSharer : NSObject
{
}

+ (void)shareAudio:(id)arg1 withOptions:(id)arg2;
+ (void)shareAudio:(id)arg1 withMetadata:(id)arg2 withContext:(id)arg3;
+ (void)shareVideo:(id)arg1 withOptions:(id)arg2;
+ (void)shareVideo:(id)arg1 withMetadata:(id)arg2 withContext:(id)arg3;
+ (void)shareAnimatedWebP:(id)arg1 withOptions:(id)arg2;
+ (void)shareAnimatedWebP:(id)arg1 withMetadata:(id)arg2 withContext:(id)arg3;
+ (void)shareAnimatedGIF:(id)arg1 withOptions:(id)arg2;
+ (void)shareAnimatedGIF:(id)arg1 withMetadata:(id)arg2 withContext:(id)arg3;
+ (void)shareImage:(id)arg1 withOptions:(id)arg2;
+ (void)shareImage:(id)arg1 withMetadata:(id)arg2 withContext:(id)arg3;
+ (void)openMessenger;
+ (unsigned long long)messengerPlatformCapabilities;
+ (void)_launchUrl:(id)arg1 withOptions:(id)arg2;
+ (id)messengerVersionCapabilities;
+ (id)currentlyInstalledMessengerVersion;

@end

