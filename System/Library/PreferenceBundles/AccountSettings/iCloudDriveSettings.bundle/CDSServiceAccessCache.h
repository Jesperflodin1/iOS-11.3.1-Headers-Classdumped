/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iCloudDriveSettings/iCloudDriveSettings-Structs.h>
@class NSMutableDictionary;

@interface CDSServiceAccessCache : NSObject {

	NSMutableDictionary* _accessInfoByBundleID;

}
-(id)servicesForBundleID:(id)arg1 ;
-(void)addAccessInfo:(id)arg1 forServiceName:(id)arg2 ;
-(id)allBundleIDs;
-(CFBundleRef)bundleForBundleID:(id)arg1 ;
-(id)serviceNamesForBundleID:(id)arg1 ;
-(void)setAccessGranted:(BOOL)arg1 forBundleID:(id)arg2 ;
-(BOOL)isAccessGrantedForBundleID:(id)arg1 ;
@end

