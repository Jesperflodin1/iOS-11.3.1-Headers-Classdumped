/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,copy) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
+(id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1 ;
-(void)main;
-(NSArray *)containerPrivacySettings;
-(id)activityCreate;
-(BOOL)shouldCheckAppVersion;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
@end
