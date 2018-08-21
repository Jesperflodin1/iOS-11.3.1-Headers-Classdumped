/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class NSString, NSSet;

@interface BRCClientPrivilegesDescriptor : NSObject {

	NSString* _debugIdentifier;
	char _cloudEnabledStatusWithoutLogOutStatus;
	BOOL _canGetApplicationInfo;
	BOOL _isNonAppSandboxed;
	BOOL _isAllowedToAccessAnyCloudService;
	BOOL _isProxyEntitled;
	BOOL _isSharingProxyEntitled;
	BOOL _isFolderSharingProxyEntitled;
	BOOL _isSharingPrivateInterfaceEntitled;
	BOOL _isAutomationEntitled;
	BOOL _hasAuditToken;
	NSString* _applicationIdentifier;
	NSSet* _appLibraryIDs;
	NSString* _defaultAppLibraryID;
	SCD_Struct_BR21 _auditToken;

}

@property (nonatomic,readonly) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isNonAppSandboxed;                              //@synthesize isNonAppSandboxed=_isNonAppSandboxed - In the implementation block
@property (nonatomic,readonly) BOOL isAllowedToAccessAnyCloudService;               //@synthesize isAllowedToAccessAnyCloudService=_isAllowedToAccessAnyCloudService - In the implementation block
@property (nonatomic,readonly) BOOL isProxyEntitled;                                //@synthesize isProxyEntitled=_isProxyEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isSharingProxyEntitled;                         //@synthesize isSharingProxyEntitled=_isSharingProxyEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isFolderSharingProxyEntitled;                   //@synthesize isFolderSharingProxyEntitled=_isFolderSharingProxyEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isSharingPrivateInterfaceEntitled;              //@synthesize isSharingPrivateInterfaceEntitled=_isSharingPrivateInterfaceEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isAutomationEntitled;                           //@synthesize isAutomationEntitled=_isAutomationEntitled - In the implementation block
@property (nonatomic,readonly) BOOL canFetchUserQuota; 
@property (nonatomic,readonly) NSSet * appLibraryIDs;                               //@synthesize appLibraryIDs=_appLibraryIDs - In the implementation block
@property (nonatomic,readonly) NSString * defaultAppLibraryID;                      //@synthesize defaultAppLibraryID=_defaultAppLibraryID - In the implementation block
@property (nonatomic,readonly) BOOL hasAuditToken;                                  //@synthesize hasAuditToken=_hasAuditToken - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR21 auditToken;                          //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)_isNonSandboxedForAuditToken:(SCD_Struct_BR21)arg1 ;
-(BOOL)hasPid;
-(id)description;
-(NSString *)applicationIdentifier;
-(SCD_Struct_BR21)auditToken;
-(int)pid;
-(id)initWithAuditToken:(SCD_Struct_BR21)arg1 ;
-(NSSet *)appLibraryIDs;
-(char)cloudEnabledStatusForSession:(id)arg1 ;
-(NSString *)defaultAppLibraryID;
-(BOOL)isProxyEntitled;
-(BOOL)isAutomationEntitled;
-(BOOL)isSharingPrivateInterfaceEntitled;
-(id)initWithNonSandboxedAppWithAppLibraryIDs:(id)arg1 bundleID:(id)arg2 auditToken:(SCD_Struct_BR21)arg3 ;
-(BOOL)isSharingProxyEntitled;
-(BOOL)canFetchUserQuota;
-(BOOL)isFolderSharingProxyEntitled;
-(void)updateCloudEnabledStatus;
-(void)_finishSetupWithClientContainerIDs:(id)arg1 ;
-(BOOL)hasAuditToken;
-(char)_computeCloudEnabledStatusWithoutLogOutStatus;
-(BOOL)isAllowedToAccessAnyCloudService;
-(BOOL)isNonAppSandboxed;
@end

