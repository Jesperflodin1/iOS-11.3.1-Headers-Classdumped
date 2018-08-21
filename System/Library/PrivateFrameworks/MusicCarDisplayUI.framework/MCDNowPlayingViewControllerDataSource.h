/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDataSource <NSObject>
@optional
-(long long)shuffleTypeForNowPlayingViewController:(id)arg1;
-(long long)repeatTypeForNowPlayingViewController:(id)arg1;
-(BOOL)likedForNowPlayingViewController:(id)arg1;

@required
-(id)artistTextForNowPlayingController:(id)arg1;
-(id)albumTextForNowPlayingController:(id)arg1;
-(id)titleForNowPlayingController:(id)arg1;
-(id)backgroundArtForNowPlayingController:(id)arg1;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
-(SCD_Struct_MC0*)durationSnapshotForNowPlayingViewController:(id)arg1;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;

@end

