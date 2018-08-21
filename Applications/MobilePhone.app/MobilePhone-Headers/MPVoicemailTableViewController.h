//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHTableViewController.h"

#import "CNAvatarCardControllerDelegate.h"
#import "MPVoicemailMessageTableViewCellDelegate.h"
#import "MPVoicemailMessageTableViewDelegate.h"
#import "PHAudioRoutingAlertDataSource.h"
#import "PHAudioRoutingAlertDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSourcePrefetching.h"
#import "VMMessageTranscriptViewDelegate.h"
#import "VMPlayerControlsDelegate.h"
#import "VMPlayerTimelineSliderDelegate.h"

@class CNAvatarCardController, MPVoicemailConnectionUnavailableView, MPVoicemailController, MPVoicemailTranscriptionUnavailableView, NSArray, NSCache, NSIndexPath, NSMutableArray, NSString, PHAudioRoutingAlertController, PHVoicemailNavigationController, UIGestureRecognizer, VMMessageTranscriptionProgressView;

@interface MPVoicemailTableViewController : PHTableViewController <CNAvatarCardControllerDelegate, PHAudioRoutingAlertDataSource, PHAudioRoutingAlertDelegate, MPVoicemailMessageTableViewCellDelegate, VMMessageTranscriptViewDelegate, VMPlayerControlsDelegate, VMPlayerTimelineSliderDelegate, UIGestureRecognizerDelegate, UITableViewDataSourcePrefetching, MPVoicemailMessageTableViewDelegate>
{
    _Bool _visible;
    NSMutableArray *_voicemails;
    NSArray *_allVoicemails;
    MPVoicemailController *_voicemailController;
    NSIndexPath *_detailIndexPath;
    MPVoicemailConnectionUnavailableView *_connectionUnavailableView;
    MPVoicemailTranscriptionUnavailableView *_transcriptionUnavailableView;
    CDUnknownBlockType _audioPlaybackRequestBlock;
    UIGestureRecognizer *_navBarGestureRecognizer;
    UIGestureRecognizer *_leftBarButtonItemGestureRecognizer;
    UIGestureRecognizer *_rightBarButtonItemGestureRecognizer;
    CNAvatarCardController *_cardController;
    NSCache *_rowHeightCache;
    NSMutableArray *_messagePlaybackQueue;
    PHAudioRoutingAlertController *_routeListController;
    VMMessageTranscriptionProgressView *_progressView;
    PHVoicemailNavigationController *_voicemailNavigationController;
}

@property(readonly, nonatomic) __weak PHVoicemailNavigationController *voicemailNavigationController; // @synthesize voicemailNavigationController=_voicemailNavigationController;
@property(retain, nonatomic) VMMessageTranscriptionProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) PHAudioRoutingAlertController *routeListController; // @synthesize routeListController=_routeListController;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(readonly, copy, nonatomic) NSMutableArray *messagePlaybackQueue; // @synthesize messagePlaybackQueue=_messagePlaybackQueue;
@property(readonly, nonatomic) NSCache *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(retain, nonatomic) CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
@property(retain, nonatomic) UIGestureRecognizer *rightBarButtonItemGestureRecognizer; // @synthesize rightBarButtonItemGestureRecognizer=_rightBarButtonItemGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *leftBarButtonItemGestureRecognizer; // @synthesize leftBarButtonItemGestureRecognizer=_leftBarButtonItemGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *navBarGestureRecognizer; // @synthesize navBarGestureRecognizer=_navBarGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType audioPlaybackRequestBlock; // @synthesize audioPlaybackRequestBlock=_audioPlaybackRequestBlock;
@property(retain, nonatomic) MPVoicemailTranscriptionUnavailableView *transcriptionUnavailableView; // @synthesize transcriptionUnavailableView=_transcriptionUnavailableView;
@property(retain, nonatomic) MPVoicemailConnectionUnavailableView *connectionUnavailableView; // @synthesize connectionUnavailableView=_connectionUnavailableView;
@property(retain, nonatomic) NSIndexPath *detailIndexPath; // @synthesize detailIndexPath=_detailIndexPath;
@property(readonly, nonatomic) __weak MPVoicemailController *voicemailController; // @synthesize voicemailController=_voicemailController;
@property(copy, nonatomic) NSArray *allVoicemails; // @synthesize allVoicemails=_allVoicemails;
@property(retain, nonatomic) NSMutableArray *voicemails; // @synthesize voicemails=_voicemails;
- (void).cxx_destruct;
- (void)performDeleteAtIndexPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)exportVoicemailDataForVoicemail:(id)arg1;
- (void)playMessageFromPlaybackQueue;
- (void)playMessage:(id)arg1;
- (void)playbackControls:(id)arg1 didRequestState:(long long)arg2;
- (void)cancelPlaybackRequest;
- (void)messageTranscriptView:(id)arg1 didReportFeedback:(unsigned long long)arg2;
- (void)messageTranscriptView:(id)arg1 didReceiveTapGesture:(id)arg2;
- (void)tableViewCell:(id)arg1 moveButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableViewCell:(id)arg1 dialRequestButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableViewCell:(id)arg1 audioRouteButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableViewCell:(id)arg1 actionButtonTappedForRowWithIndexPath:(id)arg2;
- (void)playerTimelineSlider:(id)arg1 didChangeElapsedTime:(double)arg2;
- (void)playerTimelineSliderScrubbingDidCancel:(id)arg1;
- (void)playerTimelineSliderScrubbingDidEnd:(id)arg1;
- (void)playerTimelineSliderScrubbingDidBegin:(id)arg1;
- (CDUnknownBlockType)inboxVoicemailPredicate;
- (CDUnknownBlockType)trashVoicemailPredicate;
- (CDUnknownBlockType)blockedVoicemailPredicate;
- (void)audioRoutingAlertControllerDidDismiss:(id)arg1;
- (void)audioRoutingAlertController:(id)arg1 didSelectRoute:(id)arg2;
- (id)hideActionTitleForAudioRoutingAlertController:(id)arg1;
- (id)routesForAudioRoutingAlertController:(id)arg1;
- (void)dismissAudioRoutingDeviceListAnimated:(_Bool)arg1;
- (void)revealAudioRoutingDeviceListAnimated:(_Bool)arg1;
- (_Bool)shouldSuppressAudioRouteAlertController;
- (void)configureAudioButtonForRowAtIndexPath:(id)arg1;
- (void)handleDialVoiceMail:(id)arg1;
- (void)layoutTableHeaderView;
- (void)loadTableHeaderView;
- (struct CGRect)visibleFrameForTableView:(id)arg1;
- (id)playerController;
- (id)backgroundViewForTableView;
- (void)handleTapGesture:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)configureCellForDetail:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 expandRowAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 collapseRowAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)contactViewControllerForVoicemail:(id)arg1;
- (void)popViewControllerIfNeeded;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)messageAtIndex:(long long)arg1;
- (id)messagesAtIndexPaths:(id)arg1;
- (id)indexPathsForMessages:(id)arg1;
- (id)indexPathForMessage:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadDataIfNeeded;
- (_Bool)tableViewCanPerformReloadData:(id)arg1;
- (void)_reloadVoicemailUI;
- (void)handleVMVoicemailOnlineStatusChangedNotification:(id)arg1;
- (void)handleUIContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)handlePHDeviceCellularRadioEnabledDidChangeNotification:(id)arg1;
- (void)handlePHAudioDeviceControllerPickedRouteChangedNotification:(id)arg1;
- (void)handlePHAudioDeviceControllerAudioRoutesChangedNotification:(id)arg1;
- (void)handleMPVoicemailControllerMessagesDidChangeNotification:(id)arg1;
- (void)handleVoicemailTranscriptionStatusChangedNotification:(id)arg1;
- (void)hideProgressView;
- (void)showProgressView;
- (void)showHideProgressView;
- (void)addMessageToPlaybackQueue:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)voicemails:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)_fetchCurrentVoicemails;
- (id)_allVoicemails;
- (_Bool)shouldShowTranscriptionModelWarningHeaderViewForCount:(long long)arg1;
- (void)showTranscriptionModelWarningHeaderIfNecessary;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)unknownContactForMessage:(id)arg1;
- (void)_updateMetadataCache;
- (void)_handleNavBarTap:(id)arg1;
- (void)_updateUIForMaskViewChange;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1 voicemailController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
