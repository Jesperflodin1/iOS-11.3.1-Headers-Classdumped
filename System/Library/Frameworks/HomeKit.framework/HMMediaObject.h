/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMMediaSession, HMAccessorySettings;


@protocol HMMediaObject <NSObject>
@property (__weak) id<HMMediaObjectDelegate> delegate; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings; 
@required
-(id<HMMediaObjectDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMAccessorySettings *)settings;
-(HMMediaSession *)mediaSession;

@end

