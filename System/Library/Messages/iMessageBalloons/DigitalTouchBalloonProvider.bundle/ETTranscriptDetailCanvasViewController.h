/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <DigitalTouchShared/DTSCanvasViewController.h>
#import <DigitalTouchBalloonProvider/ETHorizontalColorPickerDelegate.h>
#import <DigitalTouchBalloonProvider/ETVideoControllerDelegate.h>
#import <DigitalTouchBalloonProvider/ETMessageTimeSource.h>

@protocol ETTranscriptDetailCanvasViewControllerPresentationDelegate;
@class ETHorizontalColorPicker, NSTimer, UIButton, ETVideoController, ETVideoMessage, ETVideoRecordButton, UIView, UILabel, NSDateFormatter, UIPinchGestureRecognizer, ETLandscapeTrapView, MediaInstructionView, GestureInstructionView, NSString;

@interface ETTranscriptDetailCanvasViewController : DTSCanvasViewController <ETHorizontalColorPickerDelegate, ETVideoControllerDelegate, ETMessageTimeSource> {

	ETHorizontalColorPicker* _expandedColorPicker;
	BOOL _animatingCompositionControls;
	BOOL _showingCompositionControls;
	NSTimer* _showCompositionControlsTimer;
	UIButton* _expandToCameraButton;
	UIButton* _expandColorPickerButton;
	CGPoint _expandedColorPickerCenter;
	BOOL _expandToCameraPreview;
	ETVideoController* _videoController;
	ETVideoMessage* _mediaMessage;
	UIButton* _smallVideoOnButton;
	UIButton* _largeVideoOnButton;
	UIButton* _videoOnButton;
	UIButton* _sendButton;
	UIButton* _backToPreviewButton;
	ETVideoRecordButton* _videoRecordButton;
	ETVideoRecordButton* _photoCaptureButton;
	NSTimer* _photoSendMessageTimer;
	UIView* _videoProgressBar;
	UIView* _videoProgressDot;
	UILabel* _videoProgressTimeLabel;
	NSDateFormatter* _videoProgressTimeFormatter;
	BOOL _showingVideoProgress;
	UIButton* _cameraFlipButton;
	UIPinchGestureRecognizer* _videoZoomGestureRecognizer;
	double _videoZoomScale;
	double _lastVideoZoomGestureScale;
	ETLandscapeTrapView* _landscapeTrapView;
	BOOL _showingLandscapeTrap;
	MediaInstructionView* _mediaInstructionView;
	BOOL _expandToGestureInstructionView;
	GestureInstructionView* _gestureInstructionView;
	UIButton* _gestureInstructionButton;
	id<ETTranscriptDetailCanvasViewControllerPresentationDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<ETTranscriptDetailCanvasViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoControllerDidEndPreview:(id)arg1 ;
-(void)_expandToCameraButtonTapped;
-(void)_expandColorPickerButtonTapped;
-(void)_sendButtonTapped;
-(void)_cameraFlipButtonTapped;
-(void)_backToPreviewButtonTapped;
-(void)_gestureInstructionButtonTapped;
-(id)_videoProgressTimeString:(unsigned long long)arg1 ;
-(void)_updateVideoOnButtonForHorizontalSizeClass:(long long)arg1 ;
-(void)_updateVideoOnButtonOpacity;
-(void)_dismissColorWheel;
-(void)_setShowingCompositionControls:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_startCameraPreview;
-(void)_setShowingGestureInstructionView:(BOOL)arg1 ;
-(void)_endMediaMessageComposition;
-(BOOL)_canShowCompositionControls;
-(void)_showCompositionControlsTimerFired;
-(void)_startShowCompositionControlsTimer;
-(void)expandUI;
-(void)_updateCompositionControlsCenter;
-(double)_topMarginForColorPicker;
-(void)_updateLandscapeTrap;
-(BOOL)_shouldUseWideLayout;
-(void)_updateCompositionControls;
-(void)_updateGestureInstructionViewFrame;
-(void)_updateBackToPreviewButton;
-(void)_updateVideoProgressFrame;
-(BOOL)_showingSendInProgress;
-(void)_updateVideoPreviewFrame;
-(void)_videoRecordButtonTapped;
-(void)_photoCaptureButtonTapped;
-(void)_updateGestureInstructionButton;
-(void)_setShowingVideoProgress:(BOOL)arg1 ;
-(void)_updateMediaInstructionView;
-(BOOL)_shouldShowOnButton;
-(BOOL)_shouldShowSendButton;
-(void)_setEntryViewHidden:(BOOL)arg1 ;
-(void)_moveComposedMessagesIntoMediaMessage;
-(void)_clearPhotoSendMessageTimer;
-(void)_endPhotoMessageComposition;
-(void)_setVideoZoomEnabled:(BOOL)arg1 ;
-(void)_composingOnlyIntroMessageType:(BOOL)arg1 ;
-(void)_endIntroMessage;
-(void)_photoSendMessageTimerFired;
-(void)_updateVideoRecorderTime:(unsigned long long)arg1 ;
-(BOOL)_isRecognizer:(id)arg1 closeToButton:(id)arg2 ;
-(void)_hideVideoController;
-(void)_showWriteErrorAlertForMediaType:(unsigned long long)arg1 outOfSpaceError:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startPhotoSendMessageTimer;
-(void)_videoZoomGestureRecognized:(id)arg1 ;
-(BOOL)_shouldRestrictOrientation;
-(void)_videoOnButtonTapped;
-(id)_largeVideoOnButton;
-(id)_smallVideoOnButton;
-(void)colorPicker:(id)arg1 requestsPresentColorWheel:(id)arg2 ;
-(void)colorPicker:(id)arg1 requestsDismissColorWheel:(id)arg2 ;
-(void)videoControllerDidInterruptPreview:(id)arg1 withInterruptionReason:(long long)arg2 ;
-(void)videoControllerDidStartPreview:(id)arg1 ;
-(void)videoControllerDidStartRecording:(id)arg1 ;
-(void)videoControllerWillCancelRecording:(id)arg1 ;
-(void)videoControllerDidEndRecording:(id)arg1 mediaURL:(id)arg2 withError:(id)arg3 ;
-(void)videoControllerWillBeginPhotoCapture:(id)arg1 ;
-(void)videoControllerDidEndPhotoCapture:(id)arg1 photoImage:(id)arg2 ;
-(void)videoControllerDidStopPreview:(id)arg1 ;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setCameraEnabled:(BOOL)arg1 ;
-(void)setPresentationDelegate:(id<ETTranscriptDetailCanvasViewControllerPresentationDelegate>)arg1 ;
-(void)_cancelButtonTapped;
-(id)colorPicker;
-(void)viewWillTransitionToExpandedPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewDidTransitionToCompactPresentation;
-(id<ETTranscriptDetailCanvasViewControllerPresentationDelegate>)presentationDelegate;
-(double)elapsedTimeSinceStartOfMessage:(id)arg1 ;
-(void)setPlayingMessages:(BOOL)arg1 ;
-(void)canvasView:(id)arg1 didUpdateComposingMessageType:(unsigned short)arg2 ;
-(BOOL)usesCompactKeyboardLayout;
-(BOOL)_shouldShowCancelButton;
-(void)_updateSkipButtonFrame;
-(BOOL)canShowReplayButton;
-(BOOL)_shouldAutoSend;
-(void)updateVideoUI;
-(BOOL)_shouldDimColorPicker;
-(void)didChangeColorPickerColor;
-(BOOL)_canLoopMessageDuringPlayback:(id)arg1 ;
-(BOOL)canExpireMessages;
-(void)didBeginComposingMessage;
-(void)didEndComposingMessage;
-(void)_updateSendButton;
-(BOOL)_tapRecognizerShouldBegin:(id)arg1 ;
-(void)dataSource:(id)arg1 startPlaybackWithCompletion:(/*^block*/id)arg2 ;
-(void)dataSourceStopPlayback:(id)arg1 ;
-(double)minimumBottomMargin;
@end
