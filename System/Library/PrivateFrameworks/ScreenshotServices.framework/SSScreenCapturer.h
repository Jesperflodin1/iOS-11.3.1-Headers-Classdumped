/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSScreenCapturerDelegate;
@class SSSnapshotter, SSDittoRemoteConnection, SSScreenshotsWindow;

@interface SSScreenCapturer : NSObject {

	SSSnapshotter* _snapshotter;
	SSDittoRemoteConnection* _dittoRemoteConnection;
	SSScreenshotsWindow* _serviceWindow;
	id<SSScreenCapturerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSScreenCapturerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_currentDisplayLayout;
+(BOOL)shouldUseScreenCapturerForScreenshots;
+(void)playScreenshotSound;
-(id)init;
-(id<SSScreenCapturerDelegate>)delegate;
-(void)setDelegate:(id<SSScreenCapturerDelegate>)arg1 ;
-(void)takeScreenshot;
-(void)_sendEnvironmentDescriptionsWithPresentationOptions:(id)arg1 ;
-(void)takeScreenshotWithPresentationOptions:(id)arg1 ;
-(void)_saveSnapshotToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2 ;
-(void)_actuallyPerformCaptureAndSendEnvironmentDescriptionsWithPresentationOptions:(id)arg1 ;
@end

