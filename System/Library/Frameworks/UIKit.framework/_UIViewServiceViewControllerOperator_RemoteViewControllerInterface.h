/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface,_UIViewServiceUIBehaviorInterface>
@required
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1;
-(void)__setContentSize:(CGSize)arg1 withFence:(id)arg2;
-(void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(BOOL)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(id)arg8 replyHandler:(/*^block*/id)arg9;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
-(void)__hostDidChangeStatusBarHeight:(double)arg1;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostDidBecomeActive;
-(void)__hostWillResignActive;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(/*^block*/id)arg6;
-(void)__hostDidAttachDisplay:(id)arg1;
-(void)__hostDidUpdateDisplay:(id)arg1;
-(void)__hostDidDetachDisplay:(id)arg1;
-(void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2;
-(void)__hostViewDidAppear:(BOOL)arg1;
-(void)__hostViewWillDisappear:(BOOL)arg1;
-(void)__hostViewDidDisappear:(BOOL)arg1;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 canShowTextServices:(BOOL)arg2;
-(void)__setContentSize:(CGSize)arg1;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(double)arg3 underlapsStatusBar:(BOOL)arg4 whenDone:(/*^block*/id)arg5;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2;
-(void)__setServiceInPopover:(BOOL)arg1;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3;
-(void)__dimmingViewWasTapped;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)__textServiceDidDismiss;
-(void)__cancelAlertActionWithToken:(long long)arg1;
-(void)__undoActionWithToken:(long long)arg1;
-(void)__redoActionWithToken:(long long)arg1;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 replyHandler:(/*^block*/id)arg5;

@end

