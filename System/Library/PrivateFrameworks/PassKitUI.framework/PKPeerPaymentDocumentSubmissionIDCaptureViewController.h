/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CRCameraReader.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentDocumentSubmissionControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentDocumentSubmissionViewControllerResponder.h>

@class PKPeerPaymentDocumentSubmissionController, PKCameraCaptureInstructionView, UIView, NSTimer, UIBarButtonItem, NSString;

@interface PKPeerPaymentDocumentSubmissionIDCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPeerPaymentDocumentSubmissionControllerDelegate, PKPeerPaymentDocumentSubmissionViewControllerResponder> {

	PKPeerPaymentDocumentSubmissionController* _captureController;
	PKCameraCaptureInstructionView* _cameraInstructionView;
	UIView* _cameraView;
	BOOL _reachedTimeout;
	NSTimer* _timerTryAgain;
	UIBarButtonItem* _buttonCancel;
	long long _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateUIWithState:(long long)arg1 ;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)captureController:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(void)captureController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)captureController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(id)initWithController:(id)arg1 context:(long long)arg2 ;
@end

