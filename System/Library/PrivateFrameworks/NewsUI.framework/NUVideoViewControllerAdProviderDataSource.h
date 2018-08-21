/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoAdProviderDataSource.h>

@class UIViewController, NUVideoPlaybackCounter, NSString;

@interface NUVideoViewControllerAdProviderDataSource : NSObject <NUVideoAdProviderDataSource> {

	UIViewController* _viewController;
	NUVideoPlaybackCounter* _videoPlaybackCounter;
	long long _onboardingVersion;

}

@property (nonatomic,readonly) NUVideoPlaybackCounter * videoPlaybackCounter;              //@synthesize videoPlaybackCounter=_videoPlaybackCounter - In the implementation block
@property (nonatomic,readonly) long long onboardingVersion;                                //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                   //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIViewController *)viewController;
-(long long)onboardingVersion;
-(NUVideoPlaybackCounter *)videoPlaybackCounter;
-(id)viewControllerForVideoAdProvider:(id)arg1 ;
-(long long)onboardingVersionForVideoAdProvider:(id)arg1 ;
-(unsigned long long)numberOfVideosPlayedInSessionForVideoAdProvider:(id)arg1 ;
-(unsigned long long)numberOfVideosPlayedSinceLastAdForVideoAdProvider:(id)arg1 ;
-(double)aspectRatioOfPlayerForVideoAdProvider:(id)arg1 ;
-(id)initWithViewController:(id)arg1 videoPlaybackCounter:(id)arg2 onboardingVersion:(long long)arg3 ;
@end

