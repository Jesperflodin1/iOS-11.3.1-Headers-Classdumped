/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DCService, NSMutableDictionary;

@interface DCUploadManager : NSObject {

	DCService* _service;
	NSMutableDictionary* _uploadingFiles;
	NSMutableDictionary* _uploadTasks;

}
+(id)uploadManagerForService:(id)arg1 ;
-(id)_initWithService:(id)arg1 ;
-(BOOL)isUploadingFile:(id)arg1 ;
-(void)uploadFile:(id)arg1 usingRemoteFileManager:(id)arg2 activityInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)uploadForItemAtPath:(id)arg1 ;
-(void)cancelAllUploadTasks;
-(id)_handlersToCallForItemAtSubpath:(id)arg1 ;
-(unsigned long long)_addHandlerToCallForItemAtSubpath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removePendingCompletionHandlersForCompletedUploads;
-(void)_cancelExistingUpload:(id)arg1 forFile:(id)arg2 ;
-(void)_finishUploadFile:(id)arg1 parent:(id)arg2 error:(id)arg3 ;
-(BOOL)_isUploadingFileAtPath:(id)arg1 ;
-(BOOL)_needsToStartUploadingItemAtSubpath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

