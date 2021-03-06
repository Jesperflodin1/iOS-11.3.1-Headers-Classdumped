//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFFlowItem.h"
#import "PSUISoftwareUpdateManagerDelegate.h"

@class BFFSimpleProgressView, NSString, PSUISoftwareUpdateManager;

@interface BuddyMandatoryUpdateProgressController : UIViewController <PSUISoftwareUpdateManagerDelegate, BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;
    PSUISoftwareUpdateManager *_updateManager;
    BFFSimpleProgressView *_progressView;
}

+ (id)cloudConfigSkipKey;
@property(retain) BFFSimpleProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain) PSUISoftwareUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)manager:(id)arg1 installFailedWithError:(id)arg2;
- (void)manager:(id)arg1 installStartedForUpdate:(id)arg2;
- (void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;
- (void)manager:(id)arg1 downloadFinished:(id)arg2;
- (void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(CDUnknownBlockType)arg2;
- (void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;
- (void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;
- (_Bool)shouldAllowStartOver;
- (void)startInstall;
- (void)startDownload;
- (void)showAlertForError:(id)arg1;
- (void)resetProgress;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithMandatoryUpdate:(_Bool)arg1 bypassTermsAndConditions:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

