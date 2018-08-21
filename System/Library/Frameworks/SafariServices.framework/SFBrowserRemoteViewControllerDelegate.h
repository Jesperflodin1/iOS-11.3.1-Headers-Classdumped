/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFBrowserRemoteViewControllerDelegate <NSObject>
@optional
-(void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(BOOL)arg3;

@required
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
-(void)remoteViewControllerWillDismiss:(id)arg1;
-(void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
-(void)remoteViewControllerDidLoadWebView:(id)arg1;
-(void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 didFinishInitialLoad:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
-(void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
-(void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;

@end

