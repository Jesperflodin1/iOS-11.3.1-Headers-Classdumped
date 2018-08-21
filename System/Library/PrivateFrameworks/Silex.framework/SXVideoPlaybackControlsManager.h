/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoControlsLockManager;
@class SXVideoControlsVisibilityManager, SXVideoAccessoryBarManager, SXTopVideoControlsManager;

@interface SXVideoPlaybackControlsManager : NSObject {

	SXVideoControlsVisibilityManager* _controlsVisibilityManager;
	SXVideoAccessoryBarManager* _accessoryBarManager;
	SXTopVideoControlsManager* _topControlsManager;
	id<SXVideoControlsLockManager> _controlsLockManager;

}

@property (nonatomic,readonly) SXVideoControlsVisibilityManager * controlsVisibilityManager;              //@synthesize controlsVisibilityManager=_controlsVisibilityManager - In the implementation block
@property (nonatomic,readonly) SXVideoAccessoryBarManager * accessoryBarManager;                          //@synthesize accessoryBarManager=_accessoryBarManager - In the implementation block
@property (nonatomic,readonly) SXTopVideoControlsManager * topControlsManager;                            //@synthesize topControlsManager=_topControlsManager - In the implementation block
@property (nonatomic,readonly) id<SXVideoControlsLockManager> controlsLockManager;                        //@synthesize controlsLockManager=_controlsLockManager - In the implementation block
-(id)initWithVisibilityManger:(id)arg1 topControlsManager:(id)arg2 accessoryBarManager:(id)arg3 controlsLockManager:(id)arg4 ;
-(SXVideoControlsVisibilityManager *)controlsVisibilityManager;
-(SXVideoAccessoryBarManager *)accessoryBarManager;
-(SXTopVideoControlsManager *)topControlsManager;
-(id<SXVideoControlsLockManager>)controlsLockManager;
@end

