/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKChatController.h>

@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController {

	CKNavbarCanvasViewController* _navbarCanvasViewController;

}

@property (nonatomic,retain) CKNavbarCanvasViewController * navbarCanvasViewController;              //@synthesize navbarCanvasViewController=_navbarCanvasViewController - In the implementation block
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CKNavbarCanvasViewController *)navbarCanvasViewController;
-(void)setNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(void)setupBizNavBarIfNecessary;
-(void)cleanUpBizNavBarIfNecessary;
@end
