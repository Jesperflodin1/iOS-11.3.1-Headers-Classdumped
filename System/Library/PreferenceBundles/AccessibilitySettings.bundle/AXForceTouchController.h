/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewing;
@class NSArray, NSString;

@interface AXForceTouchController : AccessibilityBaseListController <UIViewControllerPreviewingDelegate> {

	BOOL _forceTouchSettingsEnabled;
	id<UIViewControllerPreviewing> _viewControllerPreviewing;
	BOOL _shouldIgnoreNextEnabledChangedNotification;
	NSArray* _forceTouchSettingItems;

}

@property (assign,nonatomic) BOOL shouldIgnoreNextEnabledChangedNotification;              //@synthesize shouldIgnoreNextEnabledChangedNotification=_shouldIgnoreNextEnabledChangedNotification - In the implementation block
@property (nonatomic,retain) NSArray * forceTouchSettingItems;                             //@synthesize forceTouchSettingItems=_forceTouchSettingItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldIgnoreNextEnabledChangedNotification;
-(id)forceTouchEnabled:(id)arg1 ;
-(void)setForceTouchSettingItems:(NSArray *)arg1 ;
-(id)_specsForMasterSwitch;
-(id)_specsForSensitivity;
-(id)_specsForTester;
-(NSArray *)forceTouchSettingItems;
-(void)setForceTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setForceTouchSensitivity:(id)arg1 specifier:(id)arg2 ;
-(id)forceTouchSensitivity:(id)arg1 ;
-(void)setShouldIgnoreNextEnabledChangedNotification:(BOOL)arg1 ;
-(void)setForceTouchSettingsEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)specifiers;
@end

