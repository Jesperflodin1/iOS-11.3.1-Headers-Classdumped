/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneManagerDelegate <FBSceneManagerObserver>
@optional
-(long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;

@required
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;

@end

