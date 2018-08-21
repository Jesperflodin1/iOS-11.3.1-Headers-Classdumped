/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKContainerID, NSString, CKAccountOverrideInfo, NSDictionary;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding> {

	BOOL _captureResponseHTTPHeaders;
	BOOL _wantsSiloedContext;
	BOOL _useZoneWidePCS;
	BOOL _holdAllOperations;
	BOOL _returnPCSMetadata;
	BOOL _useMMCSEncryptionV2;
	BOOL _bypassPCSEncryption;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _masqueradeAsThirdPartyApp;
	unsigned _clientSDKVersion;
	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKAccountOverrideInfo* _accountInfoOverride;
	NSDictionary* _fakeEntitlements;
	NSString* _containerEncryptionServiceName;

}

@property (nonatomic,retain) CKContainerID * containerID;                               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) CKAccountOverrideInfo * accountInfoOverride;               //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                           //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                   //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                       //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (nonatomic,retain) NSDictionary * fakeEntitlements;                           //@synthesize fakeEntitlements=_fakeEntitlements - In the implementation block
@property (assign,nonatomic) BOOL holdAllOperations;                                    //@synthesize holdAllOperations=_holdAllOperations - In the implementation block
@property (assign,nonatomic) BOOL returnPCSMetadata;                                    //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (assign,nonatomic) BOOL useMMCSEncryptionV2;                                  //@synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2 - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;                 //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                                  //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                           //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (assign,nonatomic) unsigned clientSDKVersion;                                 //@synthesize clientSDKVersion=_clientSDKVersion - In the implementation block
@property (assign,nonatomic) BOOL masqueradeAsThirdPartyApp;                            //@synthesize masqueradeAsThirdPartyApp=_masqueradeAsThirdPartyApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CKContainerID *)containerID;
-(void)setFakeEntitlements:(NSDictionary *)arg1 ;
-(void)setMasqueradeAsThirdPartyApp:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)holdAllOperations;
-(BOOL)forceEnableReadOnlyManatee;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(BOOL)bypassPCSEncryption;
-(BOOL)returnPCSMetadata;
-(NSDictionary *)fakeEntitlements;
-(void)setHoldAllOperations:(BOOL)arg1 ;
-(BOOL)useZoneWidePCS;
-(BOOL)useMMCSEncryptionV2;
-(void)setUseMMCSEncryptionV2:(BOOL)arg1 ;
-(NSString *)containerEncryptionServiceName;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(BOOL)wantsSiloedContext;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(BOOL)masqueradeAsThirdPartyApp;
-(BOOL)captureResponseHTTPHeaders;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(unsigned)clientSDKVersion;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
@end

