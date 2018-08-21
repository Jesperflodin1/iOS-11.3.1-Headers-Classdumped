/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ICDelegateToken, NSNumber;

@interface ICUserIdentityProperties : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	NSString* _alternateDSID;
	NSString* _carrierBundleDeviceIdentifier;
	BOOL _cloudBackupEnabled;
	BOOL _delegated;
	ICDelegateToken* _delegateToken;
	NSNumber* _dsid;
	NSString* _firstName;
	NSString* _iCloudPersonID;
	NSString* _lastName;
	BOOL _managedAppleID;
	BOOL _sandboxed;
	NSString* _storefrontIdentifier;
	NSString* _username;

}

@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled;              //@synthesize cloudBackupEnabled=_cloudBackupEnabled - In the implementation block
@property (setter=setICloudPersonID:,nonatomic,copy) NSString * iCloudPersonID;                //@synthesize iCloudPersonID=_iCloudPersonID - In the implementation block
@property (nonatomic,copy,readonly) NSString * alternateDSID; 
@property (nonatomic,copy,readonly) NSString * carrierBundleDeviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                                           //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID;                    //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (getter=isSandboxed,nonatomic,readonly) BOOL sandboxed;                              //@synthesize sandboxed=_sandboxed - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (getter=isDelegated,nonatomic,readonly) BOOL delegated;                              //@synthesize delegated=_delegated - In the implementation block
@property (nonatomic,copy,readonly) ICDelegateToken * delegateToken;                           //@synthesize delegateToken=_delegateToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)username;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(void)setICloudPersonID:(NSString *)arg1 ;
-(NSString *)carrierBundleDeviceIdentifier;
-(NSString *)iCloudPersonID;
-(ICDelegateToken *)delegateToken;
-(BOOL)isCloudBackupEnabled;
-(NSString *)storefrontIdentifier;
-(BOOL)isDelegated;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isManagedAppleID;
-(BOOL)isSandboxed;
-(NSNumber *)DSID;
-(NSString *)alternateDSID;
@end

