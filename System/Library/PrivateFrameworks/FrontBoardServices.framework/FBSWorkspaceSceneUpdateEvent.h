/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneSettingsDiff, FBSSceneTransitionContext;

@interface FBSWorkspaceSceneUpdateEvent : FBSWorkspaceSceneEvent {

	FBSSceneSettingsDiff* _settings;
	FBSSceneTransitionContext* _transitionContext;

}

@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
-(void)dealloc;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneSettingsDiff *)settingsDiff;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
@end
