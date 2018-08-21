/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileManagerDelegate.h>

@class NSString;

@interface CKBackupManager : NSObject <NSFileManagerDelegate> {

	id _localDBUserClient;

}

@property (nonatomic,retain) id localDBUserClient;                  //@synthesize localDBUserClient=_localDBUserClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setupDropBox;
+(id)backUpRecordsLocation:(long long)arg1 ;
+(void)load;
+(id)sharedManager;
-(id)localDBUserClient;
-(void)handleReplaceLastBackSettings;
-(void)autoBackupCurrentCallHistory:(long long)arg1 progressBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)beginUpload:(long long)arg1 progressBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)backupCurrentCallHistory:(id)arg1 destination:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(BOOL)isSourceSupported:(long long)arg1 ;
-(BOOL)isSourceConfigured:(long long)arg1 ;
-(void)uploadBackup:(long long)arg1 rootFolder:(id)arg2 destinationName:(id)arg3 progressBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(BOOL)removeLocalFile:(id)arg1 error:(id*)arg2 ;
-(void)restoreBackup:(long long)arg1 filePath:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)checkAndCreateBackup:(BOOL)arg1 completion:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)backupCurrentCallHistory:(long long)arg1 progressBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)authorizeSource:(long long)arg1 controller:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleSourceRedirectURL:(long long)arg1 url:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadallBackedupHistory:(long long)arg1 completion:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)deleteBackup:(long long)arg1 filePath:(id)arg2 completion:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)setLocalDBUserClient:(id)arg1 ;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
@end

