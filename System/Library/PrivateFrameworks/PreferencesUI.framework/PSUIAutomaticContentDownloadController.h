/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary;

@interface PSUIAutomaticContentDownloadController : PSListController {

	id _settingsChangedObserver;
	NSMutableArray* _applications;
	NSMutableDictionary* _applicationStates;

}

@property (nonatomic,retain) NSMutableArray * applications;                        //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applicationStates;              //@synthesize applicationStates=_applicationStates - In the implementation block
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSMutableDictionary *)applicationStates;
-(void)setApplicationStates:(NSMutableDictionary *)arg1 ;
-(id)whitelist;
-(id)specifiers;
-(void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)applicationEnabled:(id)arg1 ;
-(void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2 ;
-(id)backgroundRefreshState:(id)arg1 ;
-(NSMutableArray *)applications;
-(void)setApplications:(NSMutableArray *)arg1 ;
@end

