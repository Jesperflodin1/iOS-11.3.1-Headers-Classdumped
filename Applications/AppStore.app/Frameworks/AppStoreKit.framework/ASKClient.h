/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:07 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <AppStoreKit/ASKClientExports.h>

@class NSString, NSURL;

@interface ASKClient : NSObject <ASKClientExports>

@property (copy,readonly) NSString * name; 
@property (readonly) NSString * deviceType; 
@property (readonly) CGSize screenSize; 
@property (copy,readonly) NSString * guid; 
@property (copy,readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (copy,readonly) NSString * modelIdentifier; 
@property (copy,readonly) NSString * localizedModel; 
@property (readonly) BOOL newPaymentMethodEnabled; 
@property (copy,readonly) NSString * storefrontIdentifier; 
@property (readonly) NSString * buildType; 
@property (readonly) BOOL isInternalBuild; 
@property (readonly) BOOL isDevelopmentBuild; 
@property (readonly) BOOL isConvergenceBuild; 
@property (readonly) BOOL isUnitTesting; 
@property (readonly) BOOL diagnosticQRCodesEnabled; 
@property (nonatomic,readonly) BOOL isCacheBusterEnabled; 
@property (nonatomic,readonly) BOOL isMultiUser; 
@property (nonatomic,readonly) BOOL debugAlwaysTreatResidentSessionAsInvalid; 
@property (nonatomic,readonly) NSURL * jsPackageURL; 
+(id)currentClient;
-(BOOL)diagnosticQRCodesEnabled;
-(BOOL)isDevelopmentBuild;
-(BOOL)isConvergenceBuild;
-(BOOL)newPaymentMethodEnabled;
-(BOOL)isCacheBusterEnabled;
-(BOOL)debugAlwaysTreatResidentSessionAsInvalid;
-(NSURL *)jsPackageURL;
-(BOOL)deviceHasCapabilities:(id)arg1 ;
-(BOOL)isOperatingSystemAtLeast:(long long)arg1 :(long long)arg2 :(long long)arg3 ;
-(NSString *)buildType;
-(NSString *)guid;
-(NSString *)name;
-(NSString *)localizedModel;
-(BOOL)isInternalBuild;
-(NSString *)storefrontIdentifier;
-(NSString *)thinnedApplicationVariantIdentifier;
-(BOOL)isMultiUser;
-(CGSize)screenSize;
-(BOOL)isUnitTesting;
-(NSString *)deviceType;
-(NSString *)modelIdentifier;
@end

