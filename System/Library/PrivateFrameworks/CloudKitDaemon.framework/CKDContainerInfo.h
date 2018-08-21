/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _publicCloudDBURL;
	NSURL* _publicShareServiceURL;
	NSURL* _publicDeviceServiceURL;
	NSURL* _publicCodeServiceURL;
	NSURL* _publicMetricsServiceURL;
	NSString* _containerScopedUserID;
	NSString* _orgAdminUserID;
	long long _environment;

}

@property (nonatomic,copy) NSURL * publicCloudDBURL;                      //@synthesize publicCloudDBURL=_publicCloudDBURL - In the implementation block
@property (nonatomic,copy) NSURL * publicShareServiceURL;                 //@synthesize publicShareServiceURL=_publicShareServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicDeviceServiceURL;                //@synthesize publicDeviceServiceURL=_publicDeviceServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicCodeServiceURL;                  //@synthesize publicCodeServiceURL=_publicCodeServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicMetricsServiceURL;               //@synthesize publicMetricsServiceURL=_publicMetricsServiceURL - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserID;              //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,copy) NSString * orgAdminUserID;                     //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (assign,nonatomic) long long environment;                       //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnvironment:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(NSURL *)publicCloudDBURL;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(NSURL *)publicShareServiceURL;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
-(NSURL *)publicDeviceServiceURL;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(NSURL *)publicCodeServiceURL;
-(void)setPublicCodeServiceURL:(NSURL *)arg1 ;
-(NSURL *)publicMetricsServiceURL;
-(void)setPublicMetricsServiceURL:(NSURL *)arg1 ;
-(NSString *)containerScopedUserID;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(NSString *)orgAdminUserID;
-(void)setOrgAdminUserID:(NSString *)arg1 ;
@end
