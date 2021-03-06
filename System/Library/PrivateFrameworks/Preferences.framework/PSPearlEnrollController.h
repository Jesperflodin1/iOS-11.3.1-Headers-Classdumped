/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/BKEnrollOperationDelegate.h>
#import <libobjc.A.dylib/BKEnrollPearlOperationDelegate.h>
#import <libobjc.A.dylib/PSPearlEnrollViewDelegate.h>
#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, PSPearlEnrollControllerDelegate;
@class BKDevicePearl, BKEnrollPearlOperation, NSMutableArray, PSPearlEnrollView, UIScrollView, UIView, _UIBackdropView, UILabel, NSMutableDictionary, UIButton, NSString, LAContext, NSObject, NSDate, NSTimer, SFClient, AVAudioEngine, AVAudioPlayerNode, AVAudioPCMBuffer, AVHapticPlayer;

@interface PSPearlEnrollController : PSViewController <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, PSPearlEnrollViewDelegate, LAUIDelegate> {

	BKDevicePearl* _device;
	BKEnrollPearlOperation* _enrollOperation;
	NSMutableArray* _poseStatus;
	BOOL _bioCaptureComplete;
	double _bioKitCompletion;
	PSPearlEnrollView* _enrollView;
	UIScrollView* _scrollView;
	UIView* _buttonTray;
	_UIBackdropView* _darkTrayBackdrop;
	_UIBackdropView* _lightTrayBackdrop;
	UILabel* _instructionLabel;
	UILabel* _animatingInstructionLabel;
	UILabel* _detailLabel;
	UILabel* _animatingDetailLabel;
	NSMutableDictionary* _customInstructionStrings;
	NSMutableDictionary* _customDetailStrings;
	UIButton* _nextStateButton;
	UIButton* _escapeHatchButton;
	UILabel* _debugLabel;
	NSString* _progressString;
	NSString* _statusString;
	LAContext* _authContext;
	int _state;
	int _previousState;
	BOOL _suspended;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_semaphore> _stateSema;
	NSDate* _stateStart;
	NSTimer* _stateDelayTimer;
	BOOL _animatingState;
	NSDate* _lastFaceFoundDate;
	int _substate;
	int _pendingSubstate;
	BOOL _substatePending;
	NSTimer* _substateDelayTimer;
	NSTimer* _statusPollTimer;
	SFClient* _sharingclient;
	AVAudioEngine* _audioEngine;
	AVAudioPlayerNode* _audioNode;
	AVAudioPCMBuffer* _lockSoundBuffer;
	AVAudioPCMBuffer* _scanSoundBuffer;
	AVAudioPCMBuffer* _completeSoundBuffer;
	AVAudioPCMBuffer* _endSoundBuffer;
	AVAudioPCMBuffer* _failSoundBuffer;
	AVHapticPlayer* _hapticPlayer;
	BOOL _inBuddy;
	BOOL _inDemo;
	BOOL _darkBackground;
	id<PSPearlEnrollControllerDelegate> _delegate;
	NSString* _credential;

}

@property (nonatomic,readonly) int state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * credential;                                              //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL darkBackground;                                              //@synthesize darkBackground=_darkBackground - In the implementation block
@property (assign,nonatomic,__weak) id<PSPearlEnrollControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL inBuddy;                                                     //@synthesize inBuddy=_inBuddy - In the implementation block
@property (assign,nonatomic) BOOL inDemo;                                                      //@synthesize inDemo=_inDemo - In the implementation block
@property (assign,nonatomic) BOOL useNextButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldShowEscapeHatchForState:(int)arg1 inBuddy:(BOOL)arg2 ;
+(BOOL)_shouldShowAccessibilityOptionForState:(int)arg1 poseStatus:(id)arg2 ;
+(BOOL)isPearlAvailable;
+(BOOL)isPearlInterlocked;
+(void)preloadAnimations;
-(NSString *)credential;
-(id)init;
-(id<PSPearlEnrollControllerDelegate>)delegate;
-(void)setDelegate:(id<PSPearlEnrollControllerDelegate>)arg1 ;
-(void)dealloc;
-(int)state;
-(void)_setSuspended:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)_setState:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willResignActive:(id)arg1 ;
-(void)endEnrollFlowWithError:(id)arg1 ;
-(void)_cleanupEnroll;
-(void)_cleanupSound;
-(void)_cleanUpHaptics;
-(BOOL)inBuddy;
-(void)_endEnrollFlowWithError:(id)arg1 ;
-(void)_setupSound;
-(void)_setUpHaptics;
-(void)_checkForCompletion;
-(void)setDarkBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSplashImageView:(id)arg1 ;
-(void)setInBuddy:(BOOL)arg1 ;
-(void)toggleDebugAndSave;
-(id)_createInstructionLabel;
-(id)_createDetailLabel;
-(void)escapeHatchButtonPressed;
-(void)_updateLeftBarButtonItem;
-(void)nextStateButtonPressed:(id)arg1 ;
-(void)toggleDebug;
-(CGRect)_instructionsFrameForState:(int)arg1 label:(id)arg2 ;
-(double)_scrollViewOffsetForState:(int)arg1 ;
-(CGRect)_detailFrameForState:(int)arg1 label:(id)arg2 instructionLabel:(id)arg3 ;
-(BOOL)inDemo;
-(void)returnToEnroll;
-(void)cancelEnroll;
-(int)_firstVisibleState;
-(id)_instructionTextForState:(int)arg1 substate:(int)arg2 ;
-(id)_detailTextForState:(int)arg1 substate:(int)arg2 ;
-(id)_nextStateButtonTitleForState:(int)arg1 ;
-(id)_escapeHatchTitleForState:(int)arg1 ;
-(void)_prepareForLabelsAnimationToState:(int)arg1 fromState:(int)arg2 ;
-(void)_triggerSoundHapticForTransitionToState:(int)arg1 fromState:(int)arg2 ;
-(void)_animateLabels;
-(void)_finishAnimatingLabels;
-(void)_triggerSoundHapticForTransitionToSubstate:(int)arg1 fromSubstate:(int)arg2 ;
-(void)_setSubstate:(int)arg1 animated:(BOOL)arg2 ;
-(void)setState:(int)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)startEnroll;
-(void)_updateDebugLabel;
-(id)_loadSound:(id)arg1 ;
-(void)fadeCurrentSound:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)playHaptic:(unsigned long long)arg1 withDelay:(double)arg2 gain:(double)arg3 ;
-(id)getAuthContextForCredentialError:(id*)arg1 ;
-(id)_locStateNameForState:(int)arg1 ;
-(void)setSubstate:(int)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(BOOL)_validateEnrolledPoses:(id)arg1 ;
-(void)enrollOperation:(id)arg1 percentCompleted:(long long)arg2 ;
-(void)enrollOperation:(id)arg1 finishedWithIdentity:(id)arg2 ;
-(void)enrollOperation:(id)arg1 failedWithReason:(long long)arg2 ;
-(void)operation:(id)arg1 faceDetectStateChanged:(id)arg2 ;
-(void)enrollOperation:(id)arg1 progressedWithInfo:(id)arg2 ;
-(void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3 ;
-(void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3 ;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg1 ;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg1 ;
-(void)setUseNextButton:(BOOL)arg1 ;
-(BOOL)useNextButton;
-(void)primeWithPasscode:(id)arg1 ;
-(void)setCustomInstructionString:(id)arg1 forState:(int)arg2 ;
-(void)setCustomDetailString:(id)arg1 forState:(int)arg2 ;
-(void)setInDemo:(BOOL)arg1 ;
-(BOOL)darkBackground;
-(void)setDarkBackground:(BOOL)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setState:(int)arg1 animated:(BOOL)arg2 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)setCredential:(NSString *)arg1 ;
@end

