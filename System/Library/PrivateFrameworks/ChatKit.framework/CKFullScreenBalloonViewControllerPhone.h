/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKFullScreenBalloonViewController.h>
#import <libobjc.A.dylib/CKActionSheetMenuViewDelegate.h>
#import <libobjc.A.dylib/CKBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKStickerDetailViewControllerDelegate.h>

@class CKActionSheetMenuView, CKGroupAcknowledgmentVotingViewController, UIView, NSArray, NSString;

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKActionSheetMenuViewDelegate, CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate> {

	BOOL _shouldLayoutViews;
	BOOL _animationsDisabledForTesting;
	CKActionSheetMenuView* _menuView;
	CKGroupAcknowledgmentVotingViewController* _votingViewController;
	UIView* _balloonView;
	NSArray* _interfaceActions;
	double _balloonYOffsetFromTranscript;

}

@property (nonatomic,retain) CKActionSheetMenuView * menuView;                                              //@synthesize menuView=_menuView - In the implementation block
@property (nonatomic,retain) CKGroupAcknowledgmentVotingViewController * votingViewController;              //@synthesize votingViewController=_votingViewController - In the implementation block
@property (nonatomic,retain) UIView * balloonView;                                                          //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,copy) NSArray * interfaceActions;                                                      //@synthesize interfaceActions=_interfaceActions - In the implementation block
@property (assign,nonatomic) double balloonYOffsetFromTranscript;                                           //@synthesize balloonYOffsetFromTranscript=_balloonYOffsetFromTranscript - In the implementation block
@property (assign,nonatomic) BOOL animationsDisabledForTesting;                                             //@synthesize animationsDisabledForTesting=_animationsDisabledForTesting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CKActionSheetMenuView *)menuView;
-(void)setMenuView:(CKActionSheetMenuView *)arg1 ;
-(UIView *)balloonView;
-(void)setBalloonView:(UIView *)arg1 ;
-(void)balloonViewTapped:(id)arg1 ;
-(void)balloonViewDoubleTapped:(id)arg1 ;
-(void)balloonViewLongTouched:(id)arg1 ;
-(void)presentStickerDetailControllerWithStickers:(id)arg1 ;
-(id)initWithChatItem:(id)arg1 title:(id)arg2 interfaceActions:(id)arg3 gradientReferenceView:(id)arg4 isGroupConversation:(BOOL)arg5 showActionMenu:(BOOL)arg6 pluginBalloonSnapshot:(id)arg7 delegate:(id)arg8 ;
-(void)balloonEditMenuViewWasDismissed:(id)arg1 ;
-(void)dismissTapGestureRecognized:(id)arg1 ;
-(void)performInitialAnimations;
-(void)performClosingAnimationsWithSendAnimation:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2 ;
-(void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2 ;
-(void)setInterfaceActions:(NSArray *)arg1 ;
-(void)setBalloonYOffsetFromTranscript:(double)arg1 ;
-(void)_stickerDetailViewControllerCloseButtonPressed:(id)arg1 ;
-(BOOL)_shouldShowVotingView;
-(void)setVotingViewController:(CKGroupAcknowledgmentVotingViewController *)arg1 ;
-(NSArray *)interfaceActions;
-(CKGroupAcknowledgmentVotingViewController *)votingViewController;
-(double)balloonYOffsetFromTranscript;
-(BOOL)animationsDisabledForTesting;
-(void)setAnimationsDisabledForTesting:(BOOL)arg1 ;
-(void)disableAnimationsForTesting;
@end

