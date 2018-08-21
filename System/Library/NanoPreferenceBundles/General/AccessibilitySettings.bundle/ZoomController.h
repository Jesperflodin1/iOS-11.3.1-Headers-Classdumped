/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor;

@interface ZoomController : PSListController {

	NPSDomainAccessor* _axDomainAccessor;

}

@property (retain) NPSDomainAccessor * axDomainAccessor;              //@synthesize axDomainAccessor=_axDomainAccessor - In the implementation block
-(void)setGizmoAxPref:(id)arg1 forKey:(id)arg2 ;
-(void)setZoomEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)zoomEnabled:(id)arg1 ;
-(NPSDomainAccessor *)axDomainAccessor;
-(void)setAxDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reload;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)specifiers;
@end

