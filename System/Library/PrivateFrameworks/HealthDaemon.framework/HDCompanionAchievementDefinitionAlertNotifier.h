/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAchievementDefinitionAlertNotifier.h>
#import <libobjc.A.dylib/HDFitnessAppBadgeCountProvider.h>

@class HDFitnessAppBadgeManager, NSString;

@interface HDCompanionAchievementDefinitionAlertNotifier : NSObject <HDAchievementDefinitionAlertNotifier, HDFitnessAppBadgeCountProvider> {

	HDFitnessAppBadgeManager* _badgeManager;
	unsigned long long _achievementDefinitionCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long badgeCount; 
-(void)notifyAchievementDefinitions:(id)arg1 ;
-(unsigned long long)badgeCount;
-(id)initWithFitnessAppBadgeManager:(id)arg1 ;
@end

