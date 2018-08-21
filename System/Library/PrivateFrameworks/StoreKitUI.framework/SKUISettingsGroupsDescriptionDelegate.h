/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUISettingsGroupsDescriptionDelegate <NSObject>
@required
-(id)owningViewControllerForSettingsGroupsDescription:(id)arg1;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
-(void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2;
-(void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2;
-(void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1;

@end
