/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {

	PSUIPrefsListController* _rootListController;

}
+(BOOL)isPlayingRingtone;
+(void)playRingtoneWithIdentifier:(id)arg1 loop:(BOOL)arg2 ;
+(void)stopRingtoneWithFadeOut:(float)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(id)rootListController;
-(void)setupControllerForToolbar:(id)arg1 ;
-(void)mediaServerDiedNotification:(id)arg1 ;
@end

