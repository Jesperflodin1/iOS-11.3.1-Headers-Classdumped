/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/CompanionHealth.bundle/CompanionHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthExtensionsPlugin.h>

@class CHActivityApplicationInstallationManager;

@interface HDCompanionHealthPlugin : HDHealthExtensionsPlugin {

	CHActivityApplicationInstallationManager* _activityApplicationInstallationManager;

}
-(void)activate;
-(id)pluginIdentifier;
@end

