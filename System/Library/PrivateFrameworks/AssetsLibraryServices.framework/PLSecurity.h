/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(id)_secTask:(SecTaskRef)arg1 grantedEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valuesForEntitlements:(id)arg2 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 valueForEntitlement:(id)arg2 ;
+(BOOL)isEntitledForCloudSharingData;
+(BOOL)canSkipUserPromptsForProcessWithName:(id)arg1 identifier:(int)arg2 ;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg1 ;
+(BOOL)isEntitledForPhotoKit;
+(id)connection:(id)arg1 grantedEntitlements:(id)arg2 ;
@end

