/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDDeviceSetupSessionInternal.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)role;
+(id)logCategory;
+(BOOL)isSupported;
+(id)allowedClasses;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end

