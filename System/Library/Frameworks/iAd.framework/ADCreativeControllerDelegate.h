/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADCreativeControllerDelegate <NSObject>
@required
-(void)creativeControllerViewDidRequestCloseWithTapLocation:(CGPoint)arg1;
-(void)creativeControllerViewDidRequestCreateCalendarEvent:(id)arg1 withTapLocation:(CGPoint)arg2;
-(void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(CGSize)arg2 withTapLocation:(CGPoint)arg3;
-(void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(CGPoint)arg2;
-(void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
-(void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
-(void)creativeControllerVideoCreativeViewLoaded;
-(void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3;
-(void)creativeControllerVideoCompletedWithVolume:(float)arg1;
-(void)creativeControllerVideoMuted:(float)arg1;
-(void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2;

@end

