/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSInstallationServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendCallbackWithDictionary:(id)arg1 ;
-(void)_preflightAppDeletion:(id)arg1 ;
-(id)uninstallBundle:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)unregisterBundle:(id)arg1 placeholderOnly:(BOOL)arg2 notification:(int*)arg3 ;
-(void)_postProcessingForApp:(id)arg1 notification:(int)arg2 ;
-(void)sendCallbackDeliveryComplete;
-(BOOL)validateEntitlementsForInstall:(BOOL)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_douninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)dispatchRegistration:(id)arg1 ;
-(id)installPackage:(id)arg1 withIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(int)getNotificationTypeForOperation:(unsigned long long)arg1 ;
-(BOOL)registerBundle:(id)arg1 withOptions:(id)arg2 ;
-(void)_doinstallApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setDatabaseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
@end

