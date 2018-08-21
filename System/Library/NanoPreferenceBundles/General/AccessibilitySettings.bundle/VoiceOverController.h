/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor;

@interface VoiceOverController : PSListController {

	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
-(id)voiceOverGestureDirectionSummary:(id)arg1 ;
-(id)voiceOverTapticTimeSummary:(id)arg1 ;
-(void)setGizmoPref:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_gizmoHasTapticTime;
-(BOOL)_gizmoLocaleIsRTL;
-(id)init;
-(void)dealloc;
-(void)reload;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)specifiers;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
@end

