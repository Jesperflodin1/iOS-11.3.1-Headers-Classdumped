/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityGuidedAccessControlCenterModule.bundle/AccessibilityGuidedAccessControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@protocol AXCCGuidedAccessModuleViewControllerDelegate;
@class NSString;

@interface AXCCGuidedAccessModuleViewController : CCUIButtonModuleViewController {

	BOOL _enabled;
	id<AXCCGuidedAccessModuleViewControllerDelegate> _gaxDelegate;
	NSString* _lastFetchedEffectiveApp;

}

@property (nonatomic,copy) NSString * lastFetchedEffectiveApp;                                                 //@synthesize lastFetchedEffectiveApp=_lastFetchedEffectiveApp - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<AXCCGuidedAccessModuleViewControllerDelegate> gaxDelegate;              //@synthesize gaxDelegate=_gaxDelegate - In the implementation block
-(BOOL)_guidedAccessAvailable;
-(void)setLastFetchedEffectiveApp:(NSString *)arg1 ;
-(void)setGaxDelegate:(id<AXCCGuidedAccessModuleViewControllerDelegate>)arg1 ;
-(id<AXCCGuidedAccessModuleViewControllerDelegate>)gaxDelegate;
-(NSString *)lastFetchedEffectiveApp;
-(id)_accessibilityControlCenterButtonIdentifier;
-(id)_accessibilityControlCenterButtonLabel;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)_updateEnabledState;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)_isDeviceUnlocked;
@end

