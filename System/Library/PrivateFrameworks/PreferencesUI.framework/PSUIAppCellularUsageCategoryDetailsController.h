/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class WirelessDataUsageWorkspace;

@interface PSUIAppCellularUsageCategoryDetailsController : PSListController {

	WirelessDataUsageWorkspace* _workspace;

}

@property (nonatomic,retain) WirelessDataUsageWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)specifiers;
-(WirelessDataUsageWorkspace *)workspace;
-(void)setWorkspace:(WirelessDataUsageWorkspace *)arg1 ;
@end

