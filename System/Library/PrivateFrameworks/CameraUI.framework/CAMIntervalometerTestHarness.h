/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMPerformanceTestHarness.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@class CUCaptureController, NSMutableDictionary, NSNumber, CAMCaptureRequestIntervalometer, NSString;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate> {

	CUCaptureController* _captureController;
	BOOL _hasOutstandingCapture;
	BOOL _nextCaptureIsMyLast;
	NSMutableDictionary* _numberOfResponsesForRequest;
	NSNumber* _expectedNumberOfResponsesPerRequest;
	CAMCaptureRequestIntervalometer* _testIntervalometer;

}

@property (nonatomic,retain) CAMCaptureRequestIntervalometer * testIntervalometer;              //@synthesize testIntervalometer=_testIntervalometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)harnessWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3 ;
-(void)setTestIntervalometer:(CAMCaptureRequestIntervalometer *)arg1 ;
-(void)startTesting;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)stopTesting;
-(void)failedTestwithReason:(id)arg1 ;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(void)intervalometerDidReachMaximumCount:(id)arg1 ;
-(id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3 ;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForRequests;
-(CAMCaptureRequestIntervalometer *)testIntervalometer;
@end
