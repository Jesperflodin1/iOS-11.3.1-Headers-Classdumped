/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebUIDelegate <NSObject>
@optional
-(void)webView:(id)arg1 printFrameView:(id)arg2;
-(void)webViewClose:(id)arg1;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
-(void)webViewShow:(id)arg1;
-(id)webView:(id)arg1 createWebViewModalDialogWithRequest:(id)arg2;
-(void)webViewRunModal:(id)arg1;
-(void)webViewFocus:(id)arg1;
-(void)webViewUnfocus:(id)arg1;
-(id)webViewFirstResponder:(id)arg1;
-(void)webView:(id)arg1 makeFirstResponder:(id)arg2;
-(void)webView:(id)arg1 setStatusText:(id)arg2;
-(id)webViewStatusText:(id)arg1;
-(BOOL)webViewAreToolbarsVisible:(id)arg1;
-(void)webView:(id)arg1 setToolbarsVisible:(BOOL)arg2;
-(BOOL)webViewIsStatusBarVisible:(id)arg1;
-(void)webView:(id)arg1 setStatusBarVisible:(BOOL)arg2;
-(BOOL)webViewIsResizable:(id)arg1;
-(void)webView:(id)arg1 setResizable:(BOOL)arg2;
-(void)webView:(id)arg1 setFrame:(CGRect)arg2;
-(CGRect*)webViewFrame:(id)arg1;
-(BOOL)webView:(id)arg1 runBeforeUnloadConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3;
-(void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
-(BOOL)webView:(id)arg1 shouldPerformAction:(SEL)arg2 fromSender:(id)arg3;
-(float)webViewHeaderHeight:(id)arg1;
-(float)webViewFooterHeight:(id)arg1;
-(void)webView:(id)arg1 drawHeaderInRect:(CGRect)arg2;
-(void)webView:(id)arg1 drawFooterInRect:(CGRect)arg2;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3;
-(void)webView:(id)arg1 setContentRect:(CGRect)arg2;
-(CGRect*)webViewContentRect:(id)arg1;

@end

