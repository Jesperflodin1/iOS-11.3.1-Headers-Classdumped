/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFluidProgressStateSource.h>
#import <libobjc.A.dylib/_WKDownloadDelegate.h>

@protocol _SFDownloadControllerDelegate;
@class _WKDownload, NSString, NSURL, _WKUserInitiatedAction, WBSFluidProgressState, WBSFluidProgressController;

@interface _SFDownloadController : NSObject <WBSFluidProgressStateSource, _WKDownloadDelegate> {

	long long _downloadingFileType;
	_WKDownload* _fileDownload;
	unsigned long long _downloadBackgroundTaskIdentifier;
	NSString* _fileDownloadPath;
	long long _downloadBytesExpected;
	unsigned long long _downloadBytesLoaded;
	NSURL* _fileDownloadSourceURL;
	BOOL _downloadHasFailed;
	BOOL _downloadWasCanceled;
	_WKUserInitiatedAction* _userInitiatedActionForNextDownload;
	WBSFluidProgressState* _fluidProgressState;
	double _timeLastProgressNotificationWasSent;
	id<_SFDownloadControllerDelegate> _delegate;
	WBSFluidProgressController* _fluidProgressController;

}

@property (assign,nonatomic,__weak) id<_SFDownloadControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long downloadingFileType;                                   //@synthesize downloadingFileType=_downloadingFileType - In the implementation block
@property (nonatomic,retain) WBSFluidProgressController * fluidProgressController;              //@synthesize fluidProgressController=_fluidProgressController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id<_SFDownloadControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFDownloadControllerDelegate>)arg1 ;
-(double)estimatedProgress;
-(void)_beginDownloadBackgroundTask:(id)arg1 ;
-(WBSFluidProgressController *)fluidProgressController;
-(void)_endDownloadBackgroundTask;
-(void)_clearFileDownloadState;
-(void)_downloadDidCancel:(id)arg1 ;
-(void)clearFluidProgressState;
-(BOOL)createFluidProgressState;
-(id)expectedOrCurrentURL;
-(BOOL)hasFailedURL;
-(void)_downloadDidStart:(id)arg1 ;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2 ;
-(void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_downloadDidFinish:(id)arg1 ;
-(void)_download:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)startDownloadWithType:(long long)arg1 userInitiatedAction:(id)arg2 ;
-(long long)downloadingFileType;
-(void)setFluidProgressController:(WBSFluidProgressController *)arg1 ;
-(id)progressState;
@end

