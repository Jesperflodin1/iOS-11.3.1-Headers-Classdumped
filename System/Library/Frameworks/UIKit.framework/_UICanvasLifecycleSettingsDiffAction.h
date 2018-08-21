/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UICanvasSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UICanvasLifecycleSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsLifecycleEventDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsLifecycleEventDiffInspector;              //@synthesize sceneSettingsLifecycleEventDiffInspector=_sceneSettingsLifecycleEventDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureInitialDeactivationReasons:(unsigned long long)arg1 ;
-(void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsLifecycleEventDiffInspector;
-(void)_updateForcedStatusBarForegroundTransparentWithSceneSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)setSceneSettingsLifecycleEventDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

