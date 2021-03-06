/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSDClient.h>
#import <libobjc.A.dylib/_LSDModifyProtocol.h>

@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>
-(void)setDatabaseIsSeeded:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)registerExtensionPoint:(id)arg1 withInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unregisterExtensionPoint:(id)arg1 withVersion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 roles:(unsigned)arg3 forContentType:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 forURLScheme:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeHandlerForURLScheme:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synchronizeWithMobileInstallation;
-(void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)rebuildApplicationDatabasesForSystem:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setHandlerOptions:(unsigned)arg1 forContentType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeHandlerForContentType:(id)arg1 roles:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unregisterBundleUnit:(unsigned)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerContainerURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateContainerUnit:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetServerStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(BOOL)canRegisterWithOptions:(unsigned)arg1 ;
-(BOOL)clientHasMIEntitlement:(id)arg1 ;
@end

