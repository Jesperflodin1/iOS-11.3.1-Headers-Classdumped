/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/LowPowerModule.bundle/LowPowerModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>

@class _CDBatterySaver;

@interface CCUILowPowerModule : CCUIToggleModule {

	_CDBatterySaver* _batterySaver;

}
-(void)_observeSystemNotifications;
-(void)_unobserveSystemNotifications;
-(id)init;
-(void)dealloc;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState;
-(id)glyphPackageDescription;
-(id)glyphState;
@end

