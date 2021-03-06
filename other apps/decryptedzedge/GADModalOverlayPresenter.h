//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOverlayPresenting-Protocol.h"

@class GADViewController, NSString;
@protocol NSObject;

@interface GADModalOverlayPresenter : NSObject <GADOverlayPresenting>
{
    GADViewController *_presentedViewController;
    _Bool _statusBarWasHidden;
    id <NSObject> _appForegroundObserver;
}

@property(nonatomic) __weak GADViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void).cxx_destruct;
- (void)hideStatusBar;
- (void)appDidEnterForeground:(id)arg1;
- (void)forceUpdateViewControllerOrientation:(id)arg1;
- (void)updateViewControllerOrientation:(id)arg1;
- (void)setNeedsUpdateOrientation;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isReadyToPresent) _Bool readyToPresent;
- (id)presentationViewController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

